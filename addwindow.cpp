#include "addwindow.h"
#include "ui_addwindow.h"
#include <string>
using namespace std;

addwindow::addwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addwindow)
{
    ui->setupUi(this);
    name = "";
    nameqstring = "";
}

addwindow::~addwindow()
{
    delete ui;
}

void addwindow::on_ok_1_clicked()
{
    close();
    nameqstring = ui->acidname->text();
    name = nameqstring.toStdString();

}

void addwindow::on_pushButton_clicked()
{
    close();
}
