/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWindow
{
public:
    QLabel *labelUser;
    QLabel *labelUser_2;
    QPushButton *logoutButton;
    QTableWidget *tabelUser;
    QComboBox *comboUrutkan;
    QLabel *label;

    void setupUi(QWidget *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName("UserWindow");
        UserWindow->resize(531, 466);
        labelUser = new QLabel(UserWindow);
        labelUser->setObjectName("labelUser");
        labelUser->setGeometry(QRect(70, 40, 191, 20));
        labelUser_2 = new QLabel(UserWindow);
        labelUser_2->setObjectName("labelUser_2");
        labelUser_2->setGeometry(QRect(120, 80, 71, 20));
        logoutButton = new QPushButton(UserWindow);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(120, 410, 83, 29));
        tabelUser = new QTableWidget(UserWindow);
        if (tabelUser->columnCount() < 3)
            tabelUser->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabelUser->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabelUser->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabelUser->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tabelUser->setObjectName("tabelUser");
        tabelUser->setGeometry(QRect(30, 170, 471, 192));
        comboUrutkan = new QComboBox(UserWindow);
        comboUrutkan->addItem(QString());
        comboUrutkan->addItem(QString());
        comboUrutkan->addItem(QString());
        comboUrutkan->setObjectName("comboUrutkan");
        comboUrutkan->setGeometry(QRect(230, 130, 221, 28));
        label = new QLabel(UserWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 130, 151, 20));

        retranslateUi(UserWindow);

        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QWidget *UserWindow)
    {
        UserWindow->setWindowTitle(QCoreApplication::translate("UserWindow", "Form", nullptr));
        labelUser->setText(QCoreApplication::translate("UserWindow", "SELAMAT DATANG USER !", nullptr));
        labelUser_2->setText(QCoreApplication::translate("UserWindow", "Halo User", nullptr));
        logoutButton->setText(QCoreApplication::translate("UserWindow", "Logout", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabelUser->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("UserWindow", "Nama", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabelUser->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("UserWindow", "Jumlah", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabelUser->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("UserWindow", "Tanggal", nullptr));
        comboUrutkan->setItemText(0, QCoreApplication::translate("UserWindow", "Nama (A-Z)", nullptr));
        comboUrutkan->setItemText(1, QCoreApplication::translate("UserWindow", "Tanggal (Terbaru)", nullptr));
        comboUrutkan->setItemText(2, QCoreApplication::translate("UserWindow", "Jumlah (Terbanyak)", nullptr));

        label->setText(QCoreApplication::translate("UserWindow", "Urutkan Berdasarkan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
