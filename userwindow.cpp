#include "userwindow.h"
#include "ui_userwindow.h"
#include "loginwindow.h"

#include <QFile>
#include <QTextStream>
#include <QTableWidgetItem>
#include <QDate>
#include <QMessageBox>

UserWindow::UserWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UserWindow)
{
    ui->setupUi(this);

    // Set kolom tabel
    ui->tabelUser->setColumnCount(3);
    QStringList headers;
    headers << "Nama" << "Jumlah" << "Tanggal";
    ui->tabelUser->setHorizontalHeaderLabels(headers);

    // Hapus item lama lalu tambahkan pilihan comboBox (hindari duplikat)
    ui->comboUrutkan->clear();
    ui->comboUrutkan->addItem("Nama (A-Z)");
    ui->comboUrutkan->addItem("Tanggal (Terbaru-Terlama)");
    ui->comboUrutkan->addItem("Jumlah (Terbesar-Terkecil)");

    // Load dan tampilkan data pertama kali
    loadDataDariFile();
    urutkanDanTampilkan();

    // Connect tombol logout
    connect(ui->logoutButton, &QPushButton::clicked, this, &UserWindow::handleLogout);

    // Connect comboBox untuk pengurutan
    connect(ui->comboUrutkan, &QComboBox::currentIndexChanged, this, &UserWindow::urutkanDanTampilkan);
}

UserWindow::~UserWindow()
{
    delete ui;
}

void UserWindow::handleLogout()
{
    LoginWindow *login = new LoginWindow();
    login->show();
    this->close();
}

void UserWindow::loadDataDariFile()
{
    QFile file("data.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    daftarBarang.clear();

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(";");
        if (parts.size() == 3) {
            Barang b;
            b.nama = parts[0];
            b.jumlah = parts[1].toInt();
            b.tanggalDitambahkan = parts[2];
            daftarBarang.append(b);
        }
    }

    file.close();
}

void UserWindow::tampilkanDataKeTabel()
{
    ui->tabelUser->setRowCount(daftarBarang.size());

    for (int i = 0; i < daftarBarang.size(); ++i) {
        ui->tabelUser->setItem(i, 0, new QTableWidgetItem(daftarBarang[i].nama));
        ui->tabelUser->setItem(i, 1, new QTableWidgetItem(QString::number(daftarBarang[i].jumlah)));
        ui->tabelUser->setItem(i, 2, new QTableWidgetItem(daftarBarang[i].tanggalDitambahkan));
    }
}

void UserWindow::urutkanDanTampilkan()
{
    int mode = ui->comboUrutkan->currentIndex(); // 0 = nama, 1 = tanggal, 2 = jumlah
    bubbleSort(mode);
    tampilkanDataKeTabel();
}

void UserWindow::bubbleSort(int mode)
{
    int n = daftarBarang.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            bool tukar = false;

            if (mode == 0) {
                // Nama A-Z
                if (daftarBarang[j].nama > daftarBarang[j + 1].nama)
                    tukar = true;
            } else if (mode == 1) {
                // Tanggal: terbaru ke terlama
                QDate t1 = QDate::fromString(daftarBarang[j].tanggalDitambahkan, "yyyy-MM-dd");
                QDate t2 = QDate::fromString(daftarBarang[j + 1].tanggalDitambahkan, "yyyy-MM-dd");
                if (t1 < t2)
                    tukar = true;
            } else if (mode == 2) {
                // Jumlah: terbesar ke terkecil
                if (daftarBarang[j].jumlah < daftarBarang[j + 1].jumlah)
                    tukar = true;
            }

            if (tukar)
                std::swap(daftarBarang[j], daftarBarang[j + 1]);
        }
    }
}
