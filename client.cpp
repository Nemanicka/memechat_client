#include "client.h"
//#include <QNetworkAccessManager>
#include <QHostInfo>

Client::Client()
{

}

void Client::init(QString login)
{
    login_ = login;
    QHostInfo hi;
    qDebug("get addresses");
    for( auto &i: hi.addresses() )
    {
        qDebug(i.toString().toStdString().c_str());
    }
    qDebug("client inited");
}

Client& Client::getInstance()
{

    static Client thiz;
    return thiz;
}
