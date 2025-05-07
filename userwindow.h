#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QWidget>
#include <QVector>
#include <QString>
#include "adminwindow.h"  // Sudah ada struct Barang di sini

namespace Ui {
class UserWindow;
}

class UserWindow : public QWidget
{
    Q_OBJECT

public:
    explicit UserWindow(QWidget *parent = nullptr);
    ~UserWindow();

private slots:
    void handleLogout();
    void urutkanDanTampilkan();  // Untuk mengurutkan dan menampilkan data

private:
    Ui::UserWindow *ui;
    QVector<Barang> daftarBarang;

    void loadDataDariFile();            // Load data dari file
    void tampilkanDataKeTabel();        // Tampilkan data ke tabel
    void bubbleSort(int mode);          // Bubble sort (0=nama, 1=tanggal, 2=jumlah)
};

#endif // USERWINDOW_H
