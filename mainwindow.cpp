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
 //   ui->textEdit->setFocusPolicy(Qt::StrongFocus);
    ui->textBrowser->setFocusPolicy(Qt::NoFocus);

    textEdit = new MemeTextEdit(ui->centralWidget);
    textEdit->setObjectName(QStringLiteral("textEdit"));
    textEdit->setGeometry(QRect(0, 160, 401, 81));


    QObject::connect(  this, SIGNAL( sendText(QString) ), ui->textBrowser, SLOT( append(QString) )  );

}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    qDebug("qPressEvent");
    if (event->key() == Qt::Key_Return)
    {
        emit(  sendText( textEdit->toPlainText() )  );
        textEdit->clear();
    }
    if (event->key() == Qt::Key_V)
    {
        qDebug("ctrlv");
    }
}


void MainWindow::showChat()
{
    this->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
