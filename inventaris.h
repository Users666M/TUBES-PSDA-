#ifndef INVENTARIS_H
#define INVENTARIS_H

#include <QString>

class Inventaris {
public:
    QString namaBarang;
    int jumlah;
    QString tanggalDitambahkan; // Format: dd-mm-yyyy

    Inventaris(QString nama = "", int jumlah = 0, QString tanggal = "");
};

#endif // INVENTARIS_H
