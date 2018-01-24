#include "colorselect.h"
#include "ui_colorselect.h"

colorSelect::colorSelect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::colorSelect)
{
    ui->setupUi(this);
}
void colorSelect::indicatorUpdate()
{
    QPixmap col(QSize(20, 20));
    col.fill(color);
    ui->colorLbl->setPixmap(col);
}

colorSelect::~colorSelect()
{
    delete ui;
}

void colorSelect::on_blackBtn_clicked()
{
    color = Qt::black;
    indicatorUpdate();
}

void colorSelect::on_whiteBtn_clicked()
{
    color = Qt::white;
    indicatorUpdate();
}

void colorSelect::on_grayBtn_clicked()
{
    color = Qt::gray;
    indicatorUpdate();
}

void colorSelect::on_redBtn_clicked()
{
    color = Qt::red;
    indicatorUpdate();
}

void colorSelect::on_greenBtn_clicked()
{
    color = Qt::green;
    indicatorUpdate();
}

void colorSelect::on_blueBtn_clicked()
{
    color = Qt::blue;
    indicatorUpdate();
}

void colorSelect::on_yellowBtn_clicked()
{
    color = Qt::yellow;
    indicatorUpdate();
}

void colorSelect::on_magentaBtn_clicked()
{
    color = Qt::magenta;
    indicatorUpdate();
}

void colorSelect::on_cyanBtn_clicked()
{
    color = Qt::cyan;
    indicatorUpdate();
}

void colorSelect::on_buttonBox_accepted()
{
    close();
}

void colorSelect::on_buttonBox_rejected()
{
    close();
}
