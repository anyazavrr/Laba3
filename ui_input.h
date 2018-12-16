/********************************************************************************
** Form generated from reading UI file 'input.ui'
**
** Created: Sun 16. Dec 14:38:45 2018
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_H
#define UI_INPUT_H

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

class Ui_input
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *input)
    {
        if (input->objectName().isEmpty())
            input->setObjectName(QString::fromUtf8("input"));
        input->resize(400, 300);
        pushButton = new QPushButton(input);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 210, 93, 28));
        pushButton_2 = new QPushButton(input);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 210, 93, 28));
        label = new QLabel(input);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 100, 131, 20));
        lineEdit = new QLineEdit(input);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 140, 121, 22));

        retranslateUi(input);

        QMetaObject::connectSlotsByName(input);
    } // setupUi

    void retranslateUi(QDialog *input)
    {
        input->setWindowTitle(QApplication::translate("input", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("input", "\320\236\320\272", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("input", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("input", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \321\204\320\260\320\271\320\273\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class input: public Ui_input {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT_H
