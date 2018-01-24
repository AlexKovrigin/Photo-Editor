#ifndef COLORSELECT_H
#define COLORSELECT_H

#include <QDialog>
#include <QPixmap>

namespace Ui {
class colorSelect;
}

class colorSelect : public QDialog
{
    Q_OBJECT

public:
    explicit colorSelect(QWidget *parent = 0);
    ~colorSelect();
    QColor color = Qt::black;

private slots:
    void on_blackBtn_clicked();

    void on_whiteBtn_clicked();

    void on_grayBtn_clicked();

    void on_redBtn_clicked();

    void on_greenBtn_clicked();

    void on_blueBtn_clicked();

    void on_yellowBtn_clicked();

    void on_magentaBtn_clicked();

    void on_cyanBtn_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::colorSelect *ui;
    void indicatorUpdate();
};

#endif // COLORSELECT_H
