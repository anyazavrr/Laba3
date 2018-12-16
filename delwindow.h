#ifndef DELWINDOW_H
#define DELWINDOW_H
#include "protein.h"
#include <QDialog>

namespace Ui {
class delwindow;
}

class delwindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit delwindow(QWidget *parent = 0);
    ~delwindow();
    iter it;
    bool flag;
    
private slots:
    void on_back_clicked();

    void on_forward_clicked();

    void on_ok_but_clicked();

    void on_cancel_but_clicked();

private:
    Ui::delwindow *ui;
};

#endif // DELWINDOW_H
