#include "login.h"
#include "ui_login.h"
#include "client.h"
#include "server.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::accept()
{
    qDebug("OkOk");
    QString loginName = ui->lineEdit->text();
    Client::getInstance().init(loginName);
    Server::getInstance().init(loginName);
    Server::getInstance().run();
}
