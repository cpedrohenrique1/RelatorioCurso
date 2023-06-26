#ifndef ALUNOCOMPARATORPERIODO_H
#define ALUNOCOMPARATORPERIODO_H
#include "aluno.h"

struct AlunoComparatorPeriodo{
    bool operator ()(Pedro::Aluno *a, Pedro::Aluno *b) const{
        if (a->getPeriodo() < b->getPeriodo())
        {
            return true;
        }
        if (a->getPeriodo() == b->getPeriodo())
        {
            return (bool)(a->getNome() < b->getNome());
        }
        return false;
    }
};

#endif // ALUNOCOMPARATORPERIODO_H
