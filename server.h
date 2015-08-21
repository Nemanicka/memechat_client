#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <map>
#include <QTcpSocket>

class Server : public QObject
{
    Q_OBJECT
public:
    static Server& getInstance();
    void init(QString login);
    void run();
private:
    explicit Server(QObject *parent = 0);
    QString login_;
    std::map<int, QTcpSocket*> SClients_;

signals:

public slots:
    void newuser();
};

#endif // SERVER_H
