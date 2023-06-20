#ifndef IARVOREBINARIA_H
#define IARVOREBINARIA_H
#include "aluno.h"
#include <QTableWidget>

class IArvoreBinaria{
    virtual void inserir(Pedro::Aluno dado) = 0;
//    virtual QTableWidget imprimir(QString modo, QString ordem) = 0;
//    virtual void remover(Pedro::Aluno dado) = 0;
};

#endif // IARVOREBINARIA_H
