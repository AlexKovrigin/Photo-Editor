/********************************************************************************
** Form generated from reading UI file 'colorselect.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORSELECT_H
#define UI_COLORSELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_colorSelect
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QPushButton *blackBtn;
    QPushButton *whiteBtn;
    QPushButton *grayBtn;
    QPushButton *redBtn;
    QPushButton *greenBtn;
    QPushButton *blueBtn;
    QPushButton *yellowBtn;
    QPushButton *magentaBtn;
    QPushButton *cyanBtn;
    QLabel *colorLbl;

    void setupUi(QDialog *colorSelect)
    {
        if (colorSelect->objectName().isEmpty())
            colorSelect->setObjectName(QStringLiteral("colorSelect"));
        colorSelect->resize(180, 248);
        buttonBox = new QDialogButtonBox(colorSelect);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 210, 121, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(colorSelect);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 141, 21));
        blackBtn = new QPushButton(colorSelect);
        blackBtn->setObjectName(QStringLiteral("blackBtn"));
        blackBtn->setGeometry(QRect(20, 60, 41, 41));
        whiteBtn = new QPushButton(colorSelect);
        whiteBtn->setObjectName(QStringLiteral("whiteBtn"));
        whiteBtn->setGeometry(QRect(70, 60, 51, 41));
        grayBtn = new QPushButton(colorSelect);
        grayBtn->setObjectName(QStringLiteral("grayBtn"));
        grayBtn->setGeometry(QRect(130, 60, 41, 41));
        redBtn = new QPushButton(colorSelect);
        redBtn->setObjectName(QStringLiteral("redBtn"));
        redBtn->setGeometry(QRect(20, 110, 41, 41));
        greenBtn = new QPushButton(colorSelect);
        greenBtn->setObjectName(QStringLiteral("greenBtn"));
        greenBtn->setGeometry(QRect(70, 110, 51, 41));
        blueBtn = new QPushButton(colorSelect);
        blueBtn->setObjectName(QStringLiteral("blueBtn"));
        blueBtn->setGeometry(QRect(130, 110, 41, 41));
        yellowBtn = new QPushButton(colorSelect);
        yellowBtn->setObjectName(QStringLiteral("yellowBtn"));
        yellowBtn->setGeometry(QRect(20, 160, 41, 41));
        magentaBtn = new QPushButton(colorSelect);
        magentaBtn->setObjectName(QStringLiteral("magentaBtn"));
        magentaBtn->setGeometry(QRect(70, 160, 51, 41));
        cyanBtn = new QPushButton(colorSelect);
        cyanBtn->setObjectName(QStringLiteral("cyanBtn"));
        cyanBtn->setGeometry(QRect(130, 160, 41, 41));
        colorLbl = new QLabel(colorSelect);
        colorLbl->setObjectName(QStringLiteral("colorLbl"));
        colorLbl->setGeometry(QRect(10, 210, 31, 31));

        retranslateUi(colorSelect);
        QObject::connect(buttonBox, SIGNAL(accepted()), colorSelect, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), colorSelect, SLOT(reject()));

        QMetaObject::connectSlotsByName(colorSelect);
    } // setupUi

    void retranslateUi(QDialog *colorSelect)
    {
        colorSelect->setWindowTitle(QApplication::translate("colorSelect", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("colorSelect", "Select Color for your brush", Q_NULLPTR));
        blackBtn->setText(QApplication::translate("colorSelect", "Black", Q_NULLPTR));
        whiteBtn->setText(QApplication::translate("colorSelect", "White", Q_NULLPTR));
        grayBtn->setText(QApplication::translate("colorSelect", "Gray", Q_NULLPTR));
        redBtn->setText(QApplication::translate("colorSelect", "Red", Q_NULLPTR));
        greenBtn->setText(QApplication::translate("colorSelect", "Green", Q_NULLPTR));
        blueBtn->setText(QApplication::translate("colorSelect", "Blue", Q_NULLPTR));
        yellowBtn->setText(QApplication::translate("colorSelect", "Yellow", Q_NULLPTR));
        magentaBtn->setText(QApplication::translate("colorSelect", "Magenta", Q_NULLPTR));
        cyanBtn->setText(QApplication::translate("colorSelect", "Cyan", Q_NULLPTR));
        colorLbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class colorSelect: public Ui_colorSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORSELECT_H
