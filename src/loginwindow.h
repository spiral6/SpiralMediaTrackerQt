#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QGraphicsPixmapItem>
#include "mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { 
    class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow {
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();
    void loadLogo();
    void login();

private slots:
    void on_program_login_button_clicked();

private:
    Ui::LoginWindow *ui;
};
#endif // LOGINWINDOW_H

