#include "input.h"
#include "ui_input.h"

input::input(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::input)
{
    ui->setupUi(this);
    filename = "";
}

input::~input()
{
    delete ui;
}

void input::on_pushButton_clicked()
{
    filename = ui->lineEdit->text();
    close();
}

void input::on_pushButton_2_clicked()
{
    close();
}
