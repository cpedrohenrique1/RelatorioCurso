#ifndef ALUNOCOMPARATORTURNO_H
#define ALUNOCOMPARATORTURNO_H
#include "aluno.h"

struct AlunoComparatorTurno{
    bool operator ()(Pedro::Aluno *a, Pedro::Aluno *b) const{
        if (a->getTurno() < b->getTurno())
        {
            return true;
        }
        if (a->getTurno() == b->getTurno())
        {
            return (bool)(a->getNome() < b->getNome());
        }
        return false;
    }
};

#endif // ALUNOCOMPARATORTURNO_H
