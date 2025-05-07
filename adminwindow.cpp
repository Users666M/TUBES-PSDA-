#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "loginwindow.h"

#include <QFile>
#include <QTextStream>
#include <QTableWidgetItem>
#include <QMessageBox>
#include <QDate>

AdminWindow::AdminWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdminWindow)
{
    ui->setupUi(this);

    // Set header tabel
    ui->tabelInventaris->setColumnCount(3);
    QStringList headers;
    headers << "Nama" << "Jumlah" << "Tanggal";
    ui->tabelInventaris->setHorizontalHeaderLabels(headers);

    // Load data dari file dan tampilkan ke tabel
    loadDataDariFile();
    tampilkanDataKeTabel();

    // Tombol
    connect(ui->logoutButton, &QPushButton::clicked, this, &AdminWindow::handleLogout);
    connect(ui->buttonTambah, &QPushButton::clicked, this, &AdminWindow::tambahBarang);
    connect(ui->buttonEdit, &QPushButton::clicked, this, &AdminWindow::editBarang);
    connect(ui->buttonHapus, &QPushButton::clicked, this, &AdminWindow::hapusBarang);

    // Gunakan slot yang sesuai dengan deklarasi
    connect(ui->tabelInventaris, &QTableWidget::itemSelectionChanged, this, &AdminWindow::saatItemDipilih);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::handleLogout()
{
    LoginWindow *login = new LoginWindow();
    login->show();
    this->close();
}

void AdminWindow::loadDataDariFile()
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

void AdminWindow::simpanDataKeFile()
{
    QFile file("data.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);
    for (const Barang &b : daftarBarang) {
        out << b.nama << ";" << b.jumlah << ";" << b.tanggalDitambahkan << "\n";
    }

    file.close();
}

void AdminWindow::tampilkanDataKeTabel()
{
    ui->tabelInventaris->setRowCount(daftarBarang.size());

    for (int i = 0; i < daftarBarang.size(); ++i) {
        ui->tabelInventaris->setItem(i, 0, new QTableWidgetItem(daftarBarang[i].nama));
        ui->tabelInventaris->setItem(i, 1, new QTableWidgetItem(QString::number(daftarBarang[i].jumlah)));
        ui->tabelInventaris->setItem(i, 2, new QTableWidgetItem(daftarBarang[i].tanggalDitambahkan));
    }
}

void AdminWindow::tambahBarang()
{
    QString nama = ui->inputNama->text().trimmed();
    int jumlah = ui->inputJumlah->text().toInt();
    QString tanggal = ui->inputTanggal->date().toString("yyyy-MM-dd");

    if (nama.isEmpty() || jumlah <= 0) {
        QMessageBox::warning(this, "Input Tidak Valid", "Isi semua kolom dengan benar.");
        return;
    }

    Barang barangBaru;
    barangBaru.nama = nama;
    barangBaru.jumlah = jumlah;
    barangBaru.tanggalDitambahkan = tanggal;

    daftarBarang.append(barangBaru);

    simpanDataKeFile();
    tampilkanDataKeTabel();

    ui->inputNama->clear();
    ui->inputJumlah->clear();
    ui->inputTanggal->setDate(QDate::currentDate());
}

void AdminWindow::editBarang()
{
    int row = ui->tabelInventaris->currentRow();
    if (row < 0 || row >= daftarBarang.size()) {
        QMessageBox::warning(this, "Edit Gagal", "Pilih data yang ingin diedit.");
        return;
    }

    QString nama = ui->inputNama->text().trimmed();
    int jumlah = ui->inputJumlah->text().toInt();
    QString tanggal = ui->inputTanggal->date().toString("yyyy-MM-dd");

    if (nama.isEmpty() || jumlah <= 0) {
        QMessageBox::warning(this, "Input Tidak Valid", "Isi semua kolom dengan benar.");
        return;
    }

    daftarBarang[row].nama = nama;
    daftarBarang[row].jumlah = jumlah;
    daftarBarang[row].tanggalDitambahkan = tanggal;

    simpanDataKeFile();
    tampilkanDataKeTabel();

    ui->inputNama->clear();
    ui->inputJumlah->clear();
    ui->inputTanggal->setDate(QDate::currentDate());
}

void AdminWindow::hapusBarang()
{
    int row = ui->tabelInventaris->currentRow();
    if (row < 0 || row >= daftarBarang.size()) {
        QMessageBox::warning(this, "Hapus Gagal", "Pilih data yang ingin dihapus.");
        return;
    }

    daftarBarang.remove(row);

    simpanDataKeFile();
    tampilkanDataKeTabel();

    ui->inputNama->clear();
    ui->inputJumlah->clear();
    ui->inputTanggal->setDate(QDate::currentDate());
}

void AdminWindow::saatItemDipilih()
{
    int row = ui->tabelInventaris->currentRow();
    if (row >= 0 && row < daftarBarang.size()) {
        const Barang &b = daftarBarang[row];
        ui->inputNama->setText(b.nama);
        ui->inputJumlah->setText(QString::number(b.jumlah));
        ui->inputTanggal->setDate(QDate::fromString(b.tanggalDitambahkan, "yyyy-MM-dd"));
    }
}
