#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>


namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    virtual void accept();


private:
    Ui::Login *ui;
signals:
    void destroyed();
};

#endif // LOGIN_H
