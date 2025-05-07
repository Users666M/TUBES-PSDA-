#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "inventaris.h"
#include <QVector>
#include <QString>

class FileManager {
public:
    static QVector<Inventaris> loadData(const QString &filename);
    static void saveData(const QString &filename, const QVector<Inventaris> &data);
};

#endif // FILEMANAGER_H
