#include "filemanager.h"
#include <QFile>
#include <QTextStream>

QVector<Inventaris> FileManager::loadData(const QString &filename) {
    QVector<Inventaris> list;
    QFile file(filename);

    if (file.open(QIODevice::ReadOnly)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList parts = line.split(',');
            if (parts.size() == 3) {
                list.append(Inventaris(parts[0], parts[1].toInt(), parts[2]));
            }
        }
        file.close();
    }

    return list;
}

void FileManager::saveData(const QString &filename, const QVector<Inventaris> &data) {
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly)) {
        QTextStream out(&file);
        for (const Inventaris &item : data) {
            out << item.namaBarang << "," << item.jumlah << "," << item.tanggalDitambahkan << "\n";
        }
        file.close();
    }
}
#ifndef FILEMANAGER_CPP
#define FILEMANAGER_CPP

#endif // FILEMANAGER_CPP
