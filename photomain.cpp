#include "photomain.h"
#include "ui_photomain.h"
#include <QMouseEvent>

class PixmapLabel : public QLabel{
public:
    explicit PixmapLabel(QWidget* parent=nullptr):QLabel(parent){
        //By default, this class scales the pixmap according to the label's size
        setScaledContents(true);
    }
    ~PixmapLabel(){}

protected:
    void paintEvent(QPaintEvent* event);
private:
    //QImage to cache the pixmap()
    //to avoid constructing a new QImage on every scale operation
    QImage cachedImage;
    //used to cache the last scaled pixmap
    //to avoid calling scale again when the size is still at the same
    QPixmap scaledPixmap;
    //key for the currently cached QImage and QPixmap
    //used to make sure the label was not set to another QPixmap
    qint64 cacheKey{0};
};

//based on the implementation of QLabel::paintEvent
void PixmapLabel::paintEvent(QPaintEvent *event){
    //if this is assigned to a pixmap
    if(pixmap() && !pixmap()->isNull()){
        QStyle* style= PixmapLabel::style();
        QPainter painter(this);
        drawFrame(&painter);
        QRect cr = contentsRect();
        cr.adjust(margin(), margin(), -margin(), -margin());
        int align= QStyle::visualAlignment(layoutDirection(), alignment());
        QPixmap pix;
        if(hasScaledContents()){ //if scaling is enabled
            QSize scaledSize= cr.size() * devicePixelRatioF();
            //if scaledPixmap is invalid
            if(scaledPixmap.isNull() || scaledPixmap.size()!=scaledSize
                    || pixmap()->cacheKey()!=cacheKey){
                //if cachedImage is also invalid
                if(pixmap()->cacheKey() != cacheKey){
                    //reconstruct cachedImage
                    cachedImage= pixmap()->toImage();
                }
                QImage scaledImage= cachedImage.scaled(
                            scaledSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
                scaledPixmap= QPixmap::fromImage(scaledImage);
                scaledPixmap.setDevicePixelRatio(devicePixelRatioF());
            }
            pix= scaledPixmap;
        } else { // no scaling, Just use pixmap()
            pix= *pixmap();
        }
        QStyleOption opt;
        opt.initFrom(this);
        if(!isEnabled())
            pix= style->generatedIconPixmap(QIcon::Disabled, pix, &opt);
        style->drawItemPixmap(&painter, cr, align, pix);
    } else { //otherwise (if the label is not assigned to a pixmap)
        //call base paintEvent
        QLabel::paintEvent(event);
    }
}


PhotoMain::PhotoMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PhotoMain)
{
    installEventFilter(this);
    ui->setupUi(this);
    size = ui->label->geometry().size();
    QPixmap pixmap(size);
    on_clearBtn_clicked();

}

PhotoMain::~PhotoMain()
{
    delete ui;
}


//DEMO program
QPixmap PhotoMain::generatePixmap() {
    QPixmap pixmap(size);
    pixmap.fill(Qt::white);
    return pixmap;
}
QPixmap PhotoMain::pointPaintPixmap(QPoint curPoint) {
    QPainter p(&pixmap);
    p.setRenderHint(QPainter::Antialiasing);
    if(!eraser)
        p.setPen(QPen(color, radius));
    else
        p.setPen(QPen(erase, radius));
    if(paintMode == 1)
        p.drawPoint(curPoint);
    else if(paintMode == 0)
    {
        p.setPen(QPen(color, radius / 2));
        p.drawEllipse(curPoint, radius / 2, radius / 2);
        if(radius != 1)
            p.drawEllipse(curPoint, radius / 2, radius / 2);
    }
    QDateTime curTime = QDateTime::currentDateTime();
    if(!eraser)
        p.setPen(QPen(color, radius));
    else
        p.setPen(QPen(erase, radius));
    if(!first)
    {

        double w = curPoint.rx() - prevPoint.ry();
        if(w < 0)
            w = 0 - w;
        double h = curPoint.rx() - prevPoint.ry();
        if(h < 0)
            h = 0 - h;
        double pixelsBetween = sqrt(pow(w, 2) + pow(h, 2));
        //const int curTime;

        if(curTime < prevTime)
            curTime.addMSecs(86400000);
        int timeBetween = prevTime.msecsTo(curTime);
        if(timeBetween <= 300 && pixelsBetween > radius * 2)
            p.drawLine(curPoint, prevPoint);
    }
    else
        first = false;
    prevPoint = curPoint;
    prevTime = curTime;
    return pixmap;
}
QPixmap PhotoMain::drawHard(QPoint first, QPoint second)
{
    QPainter p(&pixmap);
    p.setRenderHint(QPainter::Antialiasing);
    p.setPen(QPen(color, radius));
    if(paintMode == 2)
        p.drawLine(first, second);
    else if(paintMode == 3)
        p.drawRect(first.rx(), first.ry(), second.rx() - first.rx(), second.ry() - first.ry());
    else if(paintMode == 4)
        p.drawEllipse(first.rx(), first.ry(), second.rx() - first.rx(), second.ry() - first.ry());
    return pixmap;
}

void PhotoMain::displayLbl(QPixmap pixmap)
{
    ui->label->setPixmap(pixmap);
    ui->label->setBackgroundRole(QPalette::Base);
    ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->label->setScaledContents(true);
}

bool PhotoMain::eventFilter( QObject* watched, QEvent* event ) {
    //if ( watched != ui->label )
    //    return false;
    //if ( event->type() != QEvent::MouseButtonPress )
    if ( event->type() != QEvent::MouseMove && event->type() != QEvent::MouseButtonPress)
        return false;
    const QMouseEvent* const me = static_cast<const QMouseEvent*>((QMouseEvent*) event );
    //might want to check the buttons here
    if(paintMode <= 1)
    {
        QPoint p = me->pos(); //...or ->globalPos();
        p.setY(p.ry() - 20);
        displayLbl(pointPaintPixmap(p));
    }
    else if(event->type() == QEvent::MouseButtonPress && paintMode >= 2)
    {
        QPoint p = me->pos();
        p.setY(p.ry() - 20);
        if(pointCount == 0)
        {
            firstPoint = p;
            pointCount++;
        }
        else
        {
            pointCount = 0;
            displayLbl(drawHard(firstPoint, p));
        }
    }
    return true;
}

void PhotoMain::on_pointBtn_clicked()
{
    paintMode = 1;
    pointCount = 0;
    first = true;
    eraser = false;
}

void PhotoMain::on_lineBtn_clicked()
{
    paintMode = 2;
    pointCount = 0;
    eraser = false;
}

void PhotoMain::on_rectBtn_clicked()
{
    paintMode = 3;
    pointCount = 0;
    eraser = false;
}

void PhotoMain::on_colorSelect_clicked()
{
    if(eraser)
    {
        QMessageBox u;
        u.setText("You, can't change color, you're using eraser!");
        u.exec();
        return;
    }
    colorSelect y;
    y.exec();
    color = y.color;
    QPixmap col(QSize(75, 13));
    col.fill(y.color);
    ui->colorIndicLbl->setPixmap(col);
}

void PhotoMain::on_actionAbout_us_triggered()
{
    About t;
    t.exec();
}

void PhotoMain::on_spinBoxRadius_editingFinished()
{
    radius = ui->spinBoxRadius->text().toInt();
}

void PhotoMain::on_elipseBtn_clicked()
{
    paintMode = 4;
    pointCount = 0;
    eraser = false;
}

void PhotoMain::on_smallEliplseBtn_clicked()
{
    paintMode = 0;
    pointCount = 0;
    first = true;
    eraser = false;
}

void PhotoMain::on_actionImport_triggered()
{
    QString path = QFileDialog::getOpenFileName(this, tr("Open File"),"C://", "Jpeg(*.jpeg);;Jpg(*.jpg);;Png(*.png);;All Files(*)");
    QPixmap pix(size);
    pix.load(path);
    pixmap = pix;
    displayLbl(pixmap);
}

void PhotoMain::on_eraserBtn_clicked()
{
    eraser = true;
    paintMode = 1;
    pointCount = 0;
    first = true;
}

void PhotoMain::on_clearBtn_clicked()
{
    pixmap = generatePixmap();
    displayLbl(pixmap);
}

void PhotoMain::on_actionExport_triggered()
{
    QString path = QFileDialog::getSaveFileName(this, tr("Save File"),"C://", "Png(*.png);;Jpeg(*.jpeg);;Jpg(*.jpg)");
    QFile file(path);
    file.open(QIODevice::WriteOnly);
    if(path.endsWith(".png"))
        pixmap.save(&file, "PNG");
    else if(path.endsWith(".jpeg"))
        pixmap.save(&file, "JPEG");
    else if(path.endsWith(".jpg"))
        pixmap.save(&file, "JPG");
    file.close();
}
