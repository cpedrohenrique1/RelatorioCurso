#include "arvorebinaria.h"

void ArvoreBinaria::inserirRecursivo(No **raiz, Pedro::Aluno elemento)
{
    if (*raiz == 0)
    {
        *raiz = new No(elemento);
    }
    else if (elemento.getMatricula() < (*raiz)->getDado().getMatricula())
        inserirRecursivo(&(*raiz)->esquerda, elemento);
    else if (!(elemento.getMatricula() < (*raiz)->getDado().getMatricula()))
        inserirRecursivo(&(*raiz)->direita, elemento);
    else
        throw QString("Elemento já Existe");
}

ArvoreBinaria::ArvoreBinaria() : raiz(0)
{
}

ArvoreBinaria::~ArvoreBinaria()
{
    if (raiz != 0)
        delete raiz;
}
