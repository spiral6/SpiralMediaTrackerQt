#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::LoginWindow) {
    ui->setupUi(this);
}

void LoginWindow::loadLogo(){
    QString filename = ":/Resources/emblem.png";

    QPixmap image;
    image.load(filename);
    int maxH = ui->program_logo->maximumHeight();
    image = image.scaled(maxH, maxH, Qt::KeepAspectRatio);
    printf("Attempting to load logo.\n");
    ui->program_logo->setPixmap(image);
    ui->program_logo->show();
}

void LoginWindow::login(){
    MainWindow *mw = new MainWindow();
    mw->show();
    this->hide();
}

LoginWindow::~LoginWindow() {
    delete ui;
}

void LoginWindow::on_program_login_button_clicked()
{
    this->login();
}
