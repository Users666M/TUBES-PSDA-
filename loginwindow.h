#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void handleLogin();

private:
    Ui::LoginWindow *ui;

    const QString ADMIN_USERNAME = "admin";
    const QString ADMIN_PASSWORD = "admin123";
};
#endif // LOGINWINDOW_H
