#include "server.h"
#include <QTcpServer>

Server::Server(QObject *parent) : QObject(parent)
{

}

void Server::init(QString login)
{
    login_ = login;
    qDebug("server inited");
}

Server& Server::getInstance()
{
    static Server thiz;
    return thiz;
}

void Server::run()
{
    QTcpServer* server = new QTcpServer();
    connect(server, SIGNAL(newConnection()), this, SLOT(newuser()));
    if(!server->listen(QHostAddress::Any, 8000))
    {
        qDebug("unable to run server");
        if(!server->listen(QHostAddress::Any, 6666))
        {
            qDebug("unable ololo");
        }
        else
        {
            qDebug("ok");
        }

        QTcpSocket* clientSocket=server->nextPendingConnection();
        int idusersocs=clientSocket->socketDescriptor();
        SClients_[idusersocs]=clientSocket;
//      connect(SClients_[idusersocs],SIGNAL(readyRead()),this, SLOT(slotReadClient()));
    }
}

void Server::newuser()
{
    qDebug("new user!");
}
