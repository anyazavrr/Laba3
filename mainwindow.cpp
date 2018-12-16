#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addwindow.h"
#include "warning.h"
#include "delwindow.h"
#include "input.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->delone->setEnabled(false);
    ui->delall->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_adding_clicked()
{
    if (ui->radioButton->isChecked() || ui->radioButton_2->isChecked() )
       {
        addwindow win;
        win.setModal(true);
        win.exec();
        if(win.nameqstring!="")
        {
            if (ui->radioButton->isChecked())
            {
                p1.add(win.name);
                iter it = p1.getbegin_iter();
                std::string s = "";
                int i = 0;
                do
                {
                    s = s + " " + it.getshortname();
                    if(it==p1.getend_iter()) i =1;
                    ++it;
                }
                while(i==0);
                const char *c1 = s.c_str();
                ui->prot_1->setText(QString::fromUtf8(c1));
            }
            else if (ui->radioButton_2->isChecked())
            {
                p2.add(win.name);
                iter it = p2.getbegin_iter();
                std::string s = "";
                int i = 0;
                do
                {
                    s = s + " " + it.getshortname();
                    if(it==p2.getend_iter()) i =1;
                    ++it;
                }
                while(i==0);
                const char *c1 = s.c_str();
                ui->prot_2->setText(QString::fromUtf8(c1));
            }
            ui->delone->setEnabled(true);
            ui->delall->setEnabled(true);
        }
    }
    else
    {
        warning win;
        win.setModal(true);
        win.exec();
    }
}

void MainWindow::on_delone_clicked()
{

    if (ui->radioButton->isChecked() || ui->radioButton_2->isChecked() )
       {
        delwindow win;
        if (ui->radioButton->isChecked()) win.it  = p1.getbegin_iter();
        if (ui->radioButton_2->isChecked()) win.it = p2.getbegin_iter();
        win.setModal(true);
        win.exec();
        if(win.flag == true)
        {
            if (ui->radioButton->isChecked())
            {
                p1.deleterecord(win.it);
                if(p1.count()>0)
                {
                    iter it = p1.getbegin_iter();
                    std::string s = "";
                    int i = 0;
                    do
                    {
                        s = s + " " + it.getshortname();
                        if(it==p1.getend_iter()) i =1;
                        ++it;
                    }
                    while(i==0);
                    const char *c1 = s.c_str();
                    ui->prot_1->setText(QString::fromUtf8(c1));
                }
                else
                {
                    ui->prot_1->setText("");
                }
            }
            else if (ui->radioButton_2->isChecked())
            {
                p2.deleterecord(win.it);
                if(p2.count()>0)
                {
                    iter it = p2.getbegin_iter();
                    std::string s = "";
                    int i = 0;
                    do
                    {
                        s = s + " " + it.getshortname();
                        if(it==p2.getend_iter()) i =1;
                        ++it;
                    }
                    while(i==0);
                    const char *c1 = s.c_str();
                    ui->prot_2->setText(QString::fromUtf8(c1));
                }
                else ui->prot_1->setText("");

            }
        }

    }
    else
    {
        warning win;
        win.setModal(true);
        win.exec();
    }

}

void MainWindow::on_delall_clicked()
{

    if (ui->radioButton->isChecked() || ui->radioButton_2->isChecked() )
       {
            if (ui->radioButton->isChecked())
            {
                p1.deleteall();
                ui->prot_1->setText("");
            }
            else if (ui->radioButton_2->isChecked())
            {
                p2.deleteall();
                ui->prot_2->setText("");
            }
            ui->delone->setEnabled(false);
            ui->delall->setEnabled(false);
    }
    else
    {
        warning win;
        win.setModal(true);
        win.exec();
    }
}

void MainWindow::on_radioButton_clicked()
{
    if(p1.count()>0)
    {
        ui->delone->setEnabled(true);
        ui->delall->setEnabled(true);
    }
    else
    {
        ui->delone->setEnabled(false);
        ui->delall->setEnabled(false);
    }
}

void MainWindow::on_radioButton_2_clicked()
{
    if(p2.count()>0)
    {
        ui->delone->setEnabled(true);
        ui->delall->setEnabled(true);
    }
    else
    {
        ui->delone->setEnabled(false);
        ui->delall->setEnabled(false);
    }
}

void MainWindow::on_read_clicked()
{
    if (ui->radioButton->isChecked() || ui->radioButton_2->isChecked() )
       {
        input win;
        win.setModal(true);
        win.exec();
        if(win.filename!="")
        {
            if (ui->radioButton->isChecked())
            {
                protein p;
                p1 = p;
                ifstream file;
                QByteArray ba = win.filename.toLatin1();
                const char *c = ba.data();
                file.open(c);
                file>>p1;
                iter it = p1.getbegin_iter();
                std::string s = "";
                int i = 0;
                    do
                    {

                        s = s + " " + it.getshortname();
                        if(it==p1.getend_iter()) i =1;
                        ++it;
                    }
                    while(i==0);

                 const char *c1 = s.c_str();
                ui->prot_1->setText(QString::fromUtf8(c1));
                file.close();
            }
            else if(ui->radioButton_2->isChecked())
            {
                p2.deleteall();
                ifstream file;
                QByteArray ba = win.filename.toLatin1();
                const char *c = ba.data();
                file.open(c);
                file>>p2;
                iter it = p2.getbegin_iter();
                std::string s = "";
                int i = 0;
                do
                {
                    s = s + " " + it.getshortname();
                    if(it==p2.getend_iter()) i =1;
                    ++it;
                }
                while(i==0);
                const char *c1 = s.c_str();
                ui->prot_2->setText(QString::fromUtf8(c1));
            }
        }

    }
else
    {
        warning win2;
        win2.setModal(true);
        win2.exec();
    }
}
