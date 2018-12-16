#include "delwindow.h"
#include "ui_delwindow.h"

delwindow::delwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delwindow)
{
    ui->setupUi(this);
    flag = false;
}

delwindow::~delwindow()
{
    delete ui;
}

void delwindow::on_back_clicked()
{
    --it;
    const char *c1 = it.getshortname().c_str();
    ui->acid->setText(QString::fromUtf8(c1));
}

void delwindow::on_forward_clicked()
{
    ++it;
    const char *c1 = it.getshortname().c_str();
    ui->acid->setText(QString::fromUtf8(c1));
}

void delwindow::on_ok_but_clicked()
{
    flag = true;
    close();
}

void delwindow::on_cancel_but_clicked()
{
    close();
}
