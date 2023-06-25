#ifndef ALUNOCOMPARATOROPTATIVA_H
#define ALUNOCOMPARATOROPTATIVA_H
#include "aluno.h"

struct AlunoComparatorOptativa{
    bool operator ()(Pedro::Aluno *a, Pedro::Aluno *b) const{
        if (a->getOptativa() < b->getOptativa())
        {
            return true;
        }
        if (a->getOptativa() == b->getOptativa())
        {
            return (bool) (a->getNome() < b->getNome());
        }
        return false;
    }
};

#endif // ALUNOCOMPARATOROPTATIVA_H
