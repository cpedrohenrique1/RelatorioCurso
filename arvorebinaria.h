#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H
#include "no.h"
#include "IArvoreBinaria.h"

class ArvoreBinaria : public IArvoreBinaria
{
private:
    No* raiz;

    void inserirRecursivo(No** raiz, Pedro::Aluno elemento);
    void removerRecursivo(No **raiz, Pedro::Aluno elemento);
    void centralEsquerda(No* raiz)const;
    void preEsquerda(No* raiz) const;
    void posEsquerda(No* raiz) const;
    void preDireita (No* raiz) const;
    void posDireita (No* raiz) const;
    void centralDireita (No* raiz) const;
    int retornar_Maior(No **raiz);
public:
    ArvoreBinaria();
    ~ArvoreBinaria();
    void inserir(Pedro::Aluno elemento){this->inserirRecursivo(&raiz,elemento);}
    //void remover(Pedro::Aluno elemento){this->removerRecursivo(&raiz, elemento);}
    QTableWidget imprimirMatriculaCrescente(QString modo, QString ordem);
    QTableWidget imprimirMatriculaDecrescente(QString modo, QString ordem);
    bool isEmpty() const{return !((bool)raiz);}
};

#endif // ARVOREBINARIA_H
