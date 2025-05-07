#include "utils.h"
#include <QDate>

void Utils::bubbleSortByName(QVector<Inventaris> &data) {
    for (int i = 0; i < data.size() - 1; ++i) {
        for (int j = 0; j < data.size() - i - 1; ++j) {
            if (data[j].namaBarang > data[j + 1].namaBarang) {
                std::swap(data[j], data[j + 1]);
            }
        }
    }
}

void Utils::bubbleSortByDate(QVector<Inventaris> &data) {
    for (int i = 0; i < data.size() - 1; ++i) {
        for (int j = 0; j < data.size() - i - 1; ++j) {
            QDate date1 = QDate::fromString(data[j].tanggalDitambahkan, "dd-MM-yyyy");
            QDate date2 = QDate::fromString(data[j + 1].tanggalDitambahkan, "dd-MM-yyyy");
            if (date1 > date2) {
                std::swap(data[j], data[j + 1]);
            }
        }
    }
}
