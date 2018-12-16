/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 16. Dec 12:26:01 2018
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *adding;
    QPushButton *delone;
    QPushButton *delall;
    QPushButton *read;
    QPushButton *write;
    QPushButton *plus;
    QLabel *result;
    QLabel *prot_1;
    QLabel *prot_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(419, 384);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 171, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        adding = new QPushButton(layoutWidget);
        adding->setObjectName(QString::fromUtf8("adding"));

        verticalLayout->addWidget(adding);

        delone = new QPushButton(layoutWidget);
        delone->setObjectName(QString::fromUtf8("delone"));

        verticalLayout->addWidget(delone);

        delall = new QPushButton(layoutWidget);
        delall->setObjectName(QString::fromUtf8("delall"));

        verticalLayout->addWidget(delall);

        read = new QPushButton(layoutWidget);
        read->setObjectName(QString::fromUtf8("read"));

        verticalLayout->addWidget(read);

        write = new QPushButton(layoutWidget);
        write->setObjectName(QString::fromUtf8("write"));

        verticalLayout->addWidget(write);

        plus = new QPushButton(layoutWidget);
        plus->setObjectName(QString::fromUtf8("plus"));

        verticalLayout->addWidget(plus);

        result = new QLabel(centralWidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(220, 230, 161, 31));
        result->setStyleSheet(QString::fromUtf8("background-color: rgb(241, 255, 228);\n"
"font: 75 10pt \"Microsoft YaHei UI Light\";"));
        prot_1 = new QLabel(centralWidget);
        prot_1->setObjectName(QString::fromUtf8("prot_1"));
        prot_1->setGeometry(QRect(220, 60, 131, 31));
        prot_1->setStyleSheet(QString::fromUtf8("background-color: rgb(241, 255, 228);\n"
"font: 75 10pt \"Microsoft YaHei UI Light\";"));
        prot_2 = new QLabel(centralWidget);
        prot_2->setObjectName(QString::fromUtf8("prot_2"));
        prot_2->setGeometry(QRect(220, 150, 131, 31));
        prot_2->setStyleSheet(QString::fromUtf8("background-color: rgb(241, 255, 228);\n"
"font: 75 10pt \"Microsoft YaHei UI Light\";"));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(220, 30, 73, 21));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(220, 110, 73, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 419, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        adding->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\270\321\201\320\273\320\276\321\202\321\203", 0, QApplication::UnicodeUTF8));
        delone->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\272\320\270\321\201\321\202\320\276\321\202\321\203", 0, QApplication::UnicodeUTF8));
        delall->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \320\272\320\270\321\201\320\273\320\276\321\202\321\213", 0, QApplication::UnicodeUTF8));
        read->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\207\320\270\321\202\320\260\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", 0, QApplication::UnicodeUTF8));
        write->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
        plus->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\276\320\266\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        result->setText(QString());
        prot_1->setText(QString());
        prot_2->setText(QString());
        radioButton->setText(QApplication::translate("MainWindow", "\320\221\320\265\320\273\320\276\320\272 1", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "\320\221\320\265\320\273\320\276\320\272 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
