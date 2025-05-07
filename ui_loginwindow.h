/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QPushButton *loginButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *usernameLineEdit;
    QLabel *label;
    QLineEdit *passwordLineEdit;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        loginButton = new QPushButton(LoginWindow);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(140, 360, 83, 29));
        verticalLayoutWidget = new QWidget(LoginWindow);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(90, 90, 191, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(20, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        usernameLineEdit = new QLineEdit(verticalLayoutWidget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(usernameLineEdit);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        passwordLineEdit = new QLineEdit(verticalLayoutWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(passwordLineEdit);

        label_3 = new QLabel(LoginWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(130, 40, 119, 16));
        label_3->setAutoFillBackground(false);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(LoginWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 60, 119, 16));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Form", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("LoginWindow", "SISTEM LOGIN ", nullptr));
        label_4->setText(QCoreApplication::translate("LoginWindow", "Inventaris Kantor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
