#ifndef ALUNOCOMPARATORCURSO_H
#define ALUNOCOMPARATORCURSO_H
#include "aluno.h"

struct AlunoComparatorCurso{
    bool operator()(Pedro::Aluno *a, Pedro::Aluno *b) const{
        if (a->getCurso() < b->getCurso())
        {
            return true;
        }
        if (a->getCurso() == b->getCurso())
        {
            return (bool)(a->getNome() < b->getNome());
        }
        return false;
    }
};


#endif // ALUNOCOMPARATORCURSO_H
