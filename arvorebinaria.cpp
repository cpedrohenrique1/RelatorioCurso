#include "arvorebinaria.h"

void ArvoreBinaria::inserirRecursivo(No **raiz, Pedro::Aluno elemento)
{
    if (*raiz == 0)
    {
        *raiz = new No(elemento);
    }
    else
    {
        if (elemento.getMatricula() > (*raiz)->getDado().getMatricula())
        {

        }
    }
}

ArvoreBinaria::ArvoreBinaria():
    raiz(0)
{}

ArvoreBinaria::~ArvoreBinaria()
{
    if (raiz != 0)
        delete raiz;
}
