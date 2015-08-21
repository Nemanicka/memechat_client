#include "mainwindow.h"
#include "login.h"
#include <QApplication>


int main( int argc, char *argv[] )
{
    QApplication a(argc, argv);

    Login l;
    l.show();

    MainWindow w;
    QObject::connect(&l, SIGNAL(finished(int)), &w, SLOT(showChat()));



    return a.exec();
}
