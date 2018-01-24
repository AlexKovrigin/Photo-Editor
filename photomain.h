
#ifndef PHOTOMAIN_H
#define PHOTOMAIN_H

#include <QMainWindow>
#include <QFileDialog>
#include <QPainter>
#include <QDebug>
#include <colorselect.h>
#include <about.h>
#include <QColor>
#include <QTime>
#include <QDateTime>
#include <QFile>
#include <QMessageBox>
#include <QRect>
#include <QRectF>

namespace Ui {
class PhotoMain;
}

class PixmapLabel;

class PhotoMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit PhotoMain(QWidget *parent = 0);
    ~PhotoMain();
    QPixmap pixmap;

private slots:

    void on_pointBtn_clicked();

    void on_lineBtn_clicked();

    void on_rectBtn_clicked();

    void on_colorSelect_clicked();

    void on_actionAbout_us_triggered();

    void on_spinBoxRadius_editingFinished();

    void on_elipseBtn_clicked();

    void on_smallEliplseBtn_clicked();

    void on_actionImport_triggered();

    void on_eraserBtn_clicked();

    void on_clearBtn_clicked();

    void on_actionExport_triggered();

private:
    Ui::PhotoMain *ui;
    PixmapLabel* lbl;
    bool eventFilter( QObject* watched, QEvent* event );
    void displayLbl(QPixmap pixmap);
    int paintMode = 1;
    QPixmap pointPaintPixmap(QPoint curPoint);
    QBrush color = Qt::black;
    QBrush erase = Qt::white;
    unsigned int radius = 5;
    QPoint firstPoint;
    unsigned int pointCount = 0;
    QPixmap drawHard(QPoint first, QPoint second);
    QPoint prevPoint;
    int prevRadius = 5;
    QDateTime prevTime;
    bool first = true;
    bool eraser = false;
    QPixmap generatePixmap();
    QSize size;
};

#endif // PHOTOMAIN_H
