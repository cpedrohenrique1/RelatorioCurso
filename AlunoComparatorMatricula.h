#ifndef ALUNOCOMPARATORMATRICULA_H
#define ALUNOCOMPARATORMATRICULA_H
#include "aluno.h"

struct AlunoComparatorMatricula
{
    bool operator()(Pedro::Aluno *a, Pedro::Aluno *b) const
    {
        return a->getMatricula().CompararMatricula(b->getMatricula());
    }
};

#endif // ALUNOCOMPARATORMATRICULA_H
