/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *label;
    QPushButton *closeBtn;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(400, 300);
        label = new QLabel(About);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 351, 241));
        closeBtn = new QPushButton(About);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(300, 260, 75, 23));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("About", "<html><head/><body><p align=\"center\">\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\275\320\260\320\277\320\270\321\201\320\260\320\275\320\260 \321\216\320\275\321\213\320\274 \320\277\320\276\320\264\320\260\321\216\321\211\320\270\320\274 \320\275\320\260\320\264\320\265\320\266\320\264\321\213 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\201\321\202\320\276\320\274</p><p align=\"center\">\320\250\321\203\321\200\320\270\320\272\320\276\320\274 \320\232\320\276\320\262\321\200\320\270\320\266\320\272\320\270\320\275\321\213\320\274,</p><p align=\"center\">\320\260 \321\202\320\260\320\272\320\266\320\265</p><p align=\"center\">\320\276\320\277\321\213\321\202\320\275\321\213\320\274 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\201\321\202\320\276\320\274</p><p align=\"center\">\320\241\320\265\321\200\320\263\320\265\320\265\320\274 \320\241\320\265\321\200\320\263\320\265\320\265\320\262\320\270\321\207\320\265"
                        "\320\274 \320\232\320\276\320\275\320\264\321\200\320\260\321\210\320\276\320\262\321\213\320\274</p><p align=\"center\">\320\222\321\201\320\265 \320\277\321\200\320\260\320\262\320\260 \320\275\320\265 \320\267\320\260\321\211\320\270\321\211\320\265\320\275\321\213</p><p align=\"center\">\320\241\320\276\320\267\320\264\320\260\321\202\320\265\320\273\321\214: \320\227\320\220\320\236 &quot;\320\222 \320\223\320\276\321\201\321\202\321\217\321\205 \321\203 \320\250\321\203\321\200\320\270\320\272\320\260&quot;</p><p align=\"center\">\320\230\320\267\320\264\320\260\321\202\320\265\320\273\321\214: \320\236\320\236\320\236 &quot;\320\241\320\277\320\276\320\275\321\201\320\270\321\200\321\203\320\271\321\202\320\265 \320\275\320\260\321\201!&quot;</p><p align=\"center\">\320\237\321\200\320\260\320\262\320\276\320\276\320\261\320\273\320\260\320\264\320\260\321\202\320\265\320\273\321\214: \320\236\320\220\320\236 &quot;\320\237\321\200\320\260\320\262\320\260 \321\203 \320\275\320\260\321\201 - \320\273\320"
                        "\265\320\262\320\260 \321\202\320\276\320\266\320\265&quot;</p><p align=\"center\">v. 1.2</p><p align=\"center\">Visit us on: kovrigin.uniax.com</p></body></html>", Q_NULLPTR));
        closeBtn->setText(QApplication::translate("About", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
