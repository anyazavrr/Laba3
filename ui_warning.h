/********************************************************************************
** Form generated from reading UI file 'warning.ui'
**
** Created: Sun 16. Dec 12:26:01 2018
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING_H
#define UI_WARNING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_warning
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *warning)
    {
        if (warning->objectName().isEmpty())
            warning->setObjectName(QString::fromUtf8("warning"));
        warning->resize(285, 226);
        label = new QLabel(warning);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 70, 201, 61));
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial Rounded MT Bold\";"));
        pushButton = new QPushButton(warning);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 150, 93, 28));

        retranslateUi(warning);

        QMetaObject::connectSlotsByName(warning);
    } // setupUi

    void retranslateUi(QDialog *warning)
    {
        warning->setWindowTitle(QApplication::translate("warning", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("warning", "\320\222\321\213 \320\264\320\276\320\273\320\266\320\275\321\213 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 \320\261\320\265\320\273\320\276\320\272", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("warning", "\320\236\320\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class warning: public Ui_warning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING_H
