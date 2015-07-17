#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QHostAddress>

class Client
{
    Q_OBJECT

public:
    Client();
private:
    QString clientName;
};

#endif // CLIENT_H
