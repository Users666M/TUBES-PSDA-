/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QLabel *labelAdmin;
    QLabel *labelAdmin_2;
    QPushButton *logoutButton;
    QTableWidget *tabelInventaris;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *labelTanggal;
    QLabel *labelJumlah;
    QLineEdit *inputNama;
    QLineEdit *inputJumlah;
    QDateEdit *inputTanggal;
    QLabel *labelNama;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonEdit;
    QPushButton *buttonTambah;
    QPushButton *buttonHapus;

    void setupUi(QWidget *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName("AdminWindow");
        AdminWindow->resize(740, 464);
        labelAdmin = new QLabel(AdminWindow);
        labelAdmin->setObjectName("labelAdmin");
        labelAdmin->setGeometry(QRect(90, 40, 201, 20));
        labelAdmin_2 = new QLabel(AdminWindow);
        labelAdmin_2->setObjectName("labelAdmin_2");
        labelAdmin_2->setGeometry(QRect(130, 80, 111, 20));
        logoutButton = new QPushButton(AdminWindow);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(130, 360, 83, 29));
        tabelInventaris = new QTableWidget(AdminWindow);
        if (tabelInventaris->columnCount() < 3)
            tabelInventaris->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabelInventaris->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabelInventaris->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabelInventaris->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tabelInventaris->setObjectName("tabelInventaris");
        tabelInventaris->setGeometry(QRect(10, 140, 341, 191));
        formLayoutWidget = new QWidget(AdminWindow);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(430, 140, 291, 131));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelTanggal = new QLabel(formLayoutWidget);
        labelTanggal->setObjectName("labelTanggal");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, labelTanggal);

        labelJumlah = new QLabel(formLayoutWidget);
        labelJumlah->setObjectName("labelJumlah");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, labelJumlah);

        inputNama = new QLineEdit(formLayoutWidget);
        inputNama->setObjectName("inputNama");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, inputNama);

        inputJumlah = new QLineEdit(formLayoutWidget);
        inputJumlah->setObjectName("inputJumlah");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, inputJumlah);

        inputTanggal = new QDateEdit(formLayoutWidget);
        inputTanggal->setObjectName("inputTanggal");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, inputTanggal);

        labelNama = new QLabel(formLayoutWidget);
        labelNama->setObjectName("labelNama");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, labelNama);

        horizontalLayoutWidget = new QWidget(AdminWindow);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(430, 290, 290, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonEdit = new QPushButton(horizontalLayoutWidget);
        buttonEdit->setObjectName("buttonEdit");

        horizontalLayout->addWidget(buttonEdit);

        buttonTambah = new QPushButton(horizontalLayoutWidget);
        buttonTambah->setObjectName("buttonTambah");

        horizontalLayout->addWidget(buttonTambah);

        buttonHapus = new QPushButton(horizontalLayoutWidget);
        buttonHapus->setObjectName("buttonHapus");

        horizontalLayout->addWidget(buttonHapus);


        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QWidget *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "Form", nullptr));
        labelAdmin->setText(QCoreApplication::translate("AdminWindow", "SELAMAT DATANG ADMIN !", nullptr));
        labelAdmin_2->setText(QCoreApplication::translate("AdminWindow", "Halo Admin", nullptr));
        logoutButton->setText(QCoreApplication::translate("AdminWindow", "Logout", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabelInventaris->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AdminWindow", "NAMA", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabelInventaris->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AdminWindow", "Tanggal", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabelInventaris->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AdminWindow", "JUMLAH", nullptr));
        labelTanggal->setText(QCoreApplication::translate("AdminWindow", "Tanggal", nullptr));
        labelJumlah->setText(QCoreApplication::translate("AdminWindow", "Jumlah", nullptr));
        labelNama->setText(QCoreApplication::translate("AdminWindow", "Nama Barang", nullptr));
        buttonEdit->setText(QCoreApplication::translate("AdminWindow", "Edit", nullptr));
        buttonTambah->setText(QCoreApplication::translate("AdminWindow", "TambahBarang", nullptr));
        buttonHapus->setText(QCoreApplication::translate("AdminWindow", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
