#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "client.h"
#include "memetextedit.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent* event);
    ~MainWindow();

signals:
    void sendText(QString text);
public slots:
    void showChat();

private:
    Ui::MainWindow *ui;
    Client* client;
    MemeTextEdit* textEdit;
};

#endif // MAINWINDOW_H
