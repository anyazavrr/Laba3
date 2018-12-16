/********************************************************************************
** Form generated from reading UI file 'delwindow.ui'
**
** Created: Sun 16. Dec 13:09:52 2018
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELWINDOW_H
#define UI_DELWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_delwindow
{
public:
    QPushButton *back;
    QPushButton *forward;
    QPushButton *ok_but;
    QPushButton *cancel_but;
    QLabel *label;
    QLabel *acid;

    void setupUi(QDialog *delwindow)
    {
        if (delwindow->objectName().isEmpty())
            delwindow->setObjectName(QString::fromUtf8("delwindow"));
        delwindow->resize(400, 300);
        back = new QPushButton(delwindow);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(82, 120, 61, 28));
        forward = new QPushButton(delwindow);
        forward->setObjectName(QString::fromUtf8("forward"));
        forward->setGeometry(QRect(270, 120, 61, 28));
        ok_but = new QPushButton(delwindow);
        ok_but->setObjectName(QString::fromUtf8("ok_but"));
        ok_but->setGeometry(QRect(80, 210, 93, 28));
        cancel_but = new QPushButton(delwindow);
        cancel_but->setObjectName(QString::fromUtf8("cancel_but"));
        cancel_but->setGeometry(QRect(240, 210, 93, 28));
        label = new QLabel(delwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 70, 111, 16));
        acid = new QLabel(delwindow);
        acid->setObjectName(QString::fromUtf8("acid"));
        acid->setGeometry(QRect(160, 110, 91, 51));
        acid->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 10pt \"Microsoft JhengHei UI\";"));

        retranslateUi(delwindow);

        QMetaObject::connectSlotsByName(delwindow);
    } // setupUi

    void retranslateUi(QDialog *delwindow)
    {
        delwindow->setWindowTitle(QApplication::translate("delwindow", "Dialog", 0, QApplication::UnicodeUTF8));
        back->setText(QApplication::translate("delwindow", "<", 0, QApplication::UnicodeUTF8));
        forward->setText(QApplication::translate("delwindow", ">", 0, QApplication::UnicodeUTF8));
        ok_but->setText(QApplication::translate("delwindow", "\320\236\320\272", 0, QApplication::UnicodeUTF8));
        cancel_but->setText(QApplication::translate("delwindow", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("delwindow", "\320\255\321\202\321\203 \321\203\320\264\320\260\320\273\321\217\320\265\320\274?", 0, QApplication::UnicodeUTF8));
        acid->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class delwindow: public Ui_delwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELWINDOW_H
