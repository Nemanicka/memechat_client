#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QFocusEvent>
#include <QWidget>
#include "client.h"

//using namespace UI;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setFocusPolicy(Qt::StrongFocus);
    ui->textBrowser->setFocusPolicy(Qt::NoFocus);

    QObject::connect(  this, SIGNAL( sendText(QString) ), ui->textBrowser, SLOT( append(QString) )  );

}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    qDebug("qPressEvent");
    if (event->key() == Qt::Key_Return)
    {
        emit(  sendText( ui->textEdit->toPlainText() )  );
        ui->textEdit->clear();
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}
