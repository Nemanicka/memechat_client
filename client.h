#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QHostAddress>
#include <memory>

class Client : public QObject
{
    Q_OBJECT
public:
    void init(QString login);
    static Client& getInstance();

private:
    Client();

    QString login_;
    QString ip_;
};

#endif // CLIENT_H
