#ifndef NO_H
#define NO_H
#include "aluno.h"

class No
{
private:
    Pedro::Aluno dado;
public:
    No* esquerda;
    No* direita;
    No();
    No(Pedro::Aluno dado);
    ~No();
    Pedro::Aluno getDado() const;
    void setDado(Pedro::Aluno dado);
    No* getDireita();
    void setDireita(No* direita);
    No* getEsquerda();
    void setEsquerda(No* esquerda);
};

#endif // NO_H
