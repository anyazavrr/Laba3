#ifndef DELWINDOW_H
#define DELWINDOW_H

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
    
private:
    Ui::delwindow *ui;
};

#endif // DELWINDOW_H
