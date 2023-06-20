#ifndef EXECUTARMOSTRAR_H
#define EXECUTARMOSTRAR_H
#include <QTableWidget>
#include "arvorebinaria.h"

class ExecutarMostrar
{
public:
    ExecutarMostrar();
    void operator ()(QTableWidget *parent, ArvoreBinaria arvore, QString modo, QString ordem);
};

#endif // EXECUTARMOSTRAR_H
