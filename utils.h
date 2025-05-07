#ifndef UTILS_H
#define UTILS_H

#include "inventaris.h"
#include <QVector>

class Utils {
public:
    static void bubbleSortByName(QVector<Inventaris> &data);
    static void bubbleSortByDate(QVector<Inventaris> &data);
};

#endif // UTILS_H
