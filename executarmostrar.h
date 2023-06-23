#ifndef EXECUTARMOSTRAR_H
#define EXECUTARMOSTRAR_H
#include <QTableWidget>

class ExecutarMostrar
{
public:
    ExecutarMostrar();
    void operator ()(QTableWidget *parent, QString modo, QString ordem, QString enderecoArquivo);
};

#endif // EXECUTARMOSTRAR_H
