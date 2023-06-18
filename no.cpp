#include "no.h"

No::No():
    dado(),
    esquerda(0),
    direita(0)
{}

No::No(Pedro::Aluno dado):
    dado(dado),
    esquerda(0),
    direita(0)
{}
No::~No(){
    if (this->esquerda != 0)
    {
        delete this->esquerda;
    }
    if (this->direita != 0)
    {
        delete this->direita;
    }
}
Pedro::Aluno No::getDado() const{
    return dado;
}
void No::setDado(Pedro::Aluno dado){
    this->dado = dado;
}
No* No::getDireita(){
    return direita;
}
void No::setDireita(No* direita){
    this->direita = direita;
}
No* No::getEsquerda(){
    return esquerda;
}
void No::setEsquerda(No* esquerda){
    this->esquerda = esquerda;
}
