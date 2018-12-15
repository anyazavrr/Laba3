#include "delwindow.h"
#include "ui_delwindow.h"

delwindow::delwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delwindow)
{
    ui->setupUi(this);
}

delwindow::~delwindow()
{
    delete ui;
}
