#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QWidget>
#include <QVector>
#include <QString>
#include <QFile>
#include <QTextStream>

namespace Ui {
class AdminWindow;
}

// Struct untuk menyimpan data barang
struct Barang {
    QString nama;
    int jumlah;
    QString tanggalDitambahkan;
};

class AdminWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();

private slots:
    void handleLogout();
    void tambahBarang();       // Tambah data (CREATE)
    void editBarang();         // Edit data (UPDATE)
    void hapusBarang();        // Hapus data (DELETE)
    void saatItemDipilih();    // Menyimpan indeks saat baris diklik

private:
    Ui::AdminWindow *ui;
    QVector<Barang> daftarBarang;
    int indeksDipilih = -1;    // Indeks data yang dipilih untuk edit/hapus

    void loadDataDariFile();
    void simpanDataKeFile();
    void tampilkanDataKeTabel();
};

#endif // ADMINWINDOW_H
