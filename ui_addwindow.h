/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created: Sun 16. Dec 12:05:01 2018
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addwindow
{
public:
    QPushButton *ok_1;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *acidname;

    void setupUi(QDialog *addwindow)
    {
        if (addwindow->objectName().isEmpty())
            addwindow->setObjectName(QString::fromUtf8("addwindow"));
        addwindow->resize(400, 300);
        ok_1 = new QPushButton(addwindow);
        ok_1->setObjectName(QString::fromUtf8("ok_1"));
        ok_1->setGeometry(QRect(70, 190, 93, 28));
        pushButton = new QPushButton(addwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 190, 93, 28));
        label = new QLabel(addwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 60, 251, 41));
        acidname = new QLineEdit(addwindow);
        acidname->setObjectName(QString::fromUtf8("acidname"));
        acidname->setGeometry(QRect(80, 120, 231, 31));

        retranslateUi(addwindow);

        QMetaObject::connectSlotsByName(addwindow);
    } // setupUi

    void retranslateUi(QDialog *addwindow)
    {
        addwindow->setWindowTitle(QApplication::translate("addwindow", "Dialog", 0, QApplication::UnicodeUTF8));
        ok_1->setText(QApplication::translate("addwindow", "ok", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("addwindow", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("addwindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\321\200\320\276\321\202\320\272\320\276\320\265 \320\276\320\261\320\276\320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\272\320\270\321\201\320\273\320\276\321\202\321\213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addwindow: public Ui_addwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
