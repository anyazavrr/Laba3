#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "protein.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    protein p1;
    protein p2;
    
private slots:
    void on_adding_clicked();

    void on_delone_clicked();

    void on_delall_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_read_clicked();

    void on_write_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
