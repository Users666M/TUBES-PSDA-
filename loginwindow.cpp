#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include "adminwindow.h"
#include "userwindow.h"

// ✅ Gunakan define agar aman dari error non-POD
#define ADMIN_USERNAME "admin"
#define ADMIN_PASSWORD "admin123"

LoginWindow::LoginWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    connect(ui->loginButton, &QPushButton::clicked, this, &LoginWindow::handleLogin);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::handleLogin()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username == ADMIN_USERNAME && password == ADMIN_PASSWORD) {
        // Jika cocok dengan akun admin → buka AdminWindow
        AdminWindow *adminWin = new AdminWindow();
        adminWin->show();
        this->close();
    } else {
        // Jika bukan admin → buka UserWindow
        UserWindow *userWin = new UserWindow();
        userWin->show();
        this->close();
    }
}
