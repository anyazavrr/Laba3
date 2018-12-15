#include "addwindow.h"
#include "ui_addwindow.h"
#include <string>
using namespace std;

addwindow::addwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addwindow)
{
    ui->setupUi(this);
}

addwindow::~addwindow()
{
    delete ui;
}

void addwindow::on_ok_1_clicked()
{
    QString aname = ui->acidname->text();
    close();
    name2 = aname;
    name = aname.toStdString();

}

void addwindow::on_pushButton_clicked()
{
    close();
}
