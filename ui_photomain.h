/********************************************************************************
** Form generated from reading UI file 'photomain.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTOMAIN_H
#define UI_PHOTOMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhotoMain
{
public:
    QAction *actionImport;
    QAction *actionExport;
    QAction *actionAbout_us;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *colorIndicLbl;
    QPushButton *colorSelect;
    QPushButton *smallEliplseBtn;
    QPushButton *pointBtn;
    QPushButton *lineBtn;
    QPushButton *rectBtn;
    QPushButton *elipseBtn;
    QPushButton *eraserBtn;
    QLabel *label_5;
    QSpinBox *spinBoxRadius;
    QPushButton *clearBtn;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *PhotoMain)
    {
        if (PhotoMain->objectName().isEmpty())
            PhotoMain->setObjectName(QStringLiteral("PhotoMain"));
        PhotoMain->resize(1172, 751);
        QIcon icon;
        icon.addFile(QStringLiteral(":/paint.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PhotoMain->setWindowIcon(icon);
        actionImport = new QAction(PhotoMain);
        actionImport->setObjectName(QStringLiteral("actionImport"));
        actionExport = new QAction(PhotoMain);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionAbout_us = new QAction(PhotoMain);
        actionAbout_us->setObjectName(QStringLiteral("actionAbout_us"));
        centralWidget = new QWidget(PhotoMain);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(1090, 20, 77, 298));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        colorIndicLbl = new QLabel(layoutWidget);
        colorIndicLbl->setObjectName(QStringLiteral("colorIndicLbl"));

        verticalLayout->addWidget(colorIndicLbl);

        colorSelect = new QPushButton(layoutWidget);
        colorSelect->setObjectName(QStringLiteral("colorSelect"));
        colorSelect->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(colorSelect);

        smallEliplseBtn = new QPushButton(layoutWidget);
        smallEliplseBtn->setObjectName(QStringLiteral("smallEliplseBtn"));
        smallEliplseBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/brush.ico"), QSize(), QIcon::Normal, QIcon::Off);
        smallEliplseBtn->setIcon(icon1);

        verticalLayout->addWidget(smallEliplseBtn);

        pointBtn = new QPushButton(layoutWidget);
        pointBtn->setObjectName(QStringLiteral("pointBtn"));
        pointBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pencil.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pointBtn->setIcon(icon2);

        verticalLayout->addWidget(pointBtn);

        lineBtn = new QPushButton(layoutWidget);
        lineBtn->setObjectName(QStringLiteral("lineBtn"));
        lineBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/line.ico"), QSize(), QIcon::Normal, QIcon::Off);
        lineBtn->setIcon(icon3);

        verticalLayout->addWidget(lineBtn);

        rectBtn = new QPushButton(layoutWidget);
        rectBtn->setObjectName(QStringLiteral("rectBtn"));
        rectBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/rect.ico"), QSize(), QIcon::Normal, QIcon::Off);
        rectBtn->setIcon(icon4);

        verticalLayout->addWidget(rectBtn);

        elipseBtn = new QPushButton(layoutWidget);
        elipseBtn->setObjectName(QStringLiteral("elipseBtn"));
        elipseBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/ellipse.ico"), QSize(), QIcon::Normal, QIcon::Off);
        elipseBtn->setIcon(icon5);

        verticalLayout->addWidget(elipseBtn);

        eraserBtn = new QPushButton(layoutWidget);
        eraserBtn->setObjectName(QStringLiteral("eraserBtn"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/eraser.ico"), QSize(), QIcon::Normal, QIcon::Off);
        eraserBtn->setIcon(icon6);

        verticalLayout->addWidget(eraserBtn);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        spinBoxRadius = new QSpinBox(layoutWidget);
        spinBoxRadius->setObjectName(QStringLiteral("spinBoxRadius"));
        spinBoxRadius->setFrame(true);
        spinBoxRadius->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBoxRadius->setMinimum(1);
        spinBoxRadius->setMaximum(10000);
        spinBoxRadius->setValue(5);

        verticalLayout->addWidget(spinBoxRadius);

        clearBtn = new QPushButton(layoutWidget);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));

        verticalLayout->addWidget(clearBtn);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1080, 720));
        PhotoMain->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PhotoMain);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1172, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        PhotoMain->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionImport);
        menuMenu->addAction(actionExport);
        menuMenu->addSeparator();
        menuMenu->addAction(actionAbout_us);

        retranslateUi(PhotoMain);

        QMetaObject::connectSlotsByName(PhotoMain);
    } // setupUi

    void retranslateUi(QMainWindow *PhotoMain)
    {
        PhotoMain->setWindowTitle(QApplication::translate("PhotoMain", "PhotoMain", Q_NULLPTR));
        actionImport->setText(QApplication::translate("PhotoMain", "Import", Q_NULLPTR));
        actionExport->setText(QApplication::translate("PhotoMain", "Export", Q_NULLPTR));
        actionAbout_us->setText(QApplication::translate("PhotoMain", "About us", Q_NULLPTR));
        colorIndicLbl->setText(QString());
        colorSelect->setText(QApplication::translate("PhotoMain", "Select Color", Q_NULLPTR));
        smallEliplseBtn->setText(QString());
        pointBtn->setText(QString());
        lineBtn->setText(QString());
        rectBtn->setText(QString());
        elipseBtn->setText(QString());
        eraserBtn->setText(QString());
        label_5->setText(QApplication::translate("PhotoMain", "Pick radius:", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("PhotoMain", "Clear", Q_NULLPTR));
        label->setText(QString());
        menuMenu->setTitle(QApplication::translate("PhotoMain", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PhotoMain: public Ui_PhotoMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTOMAIN_H
