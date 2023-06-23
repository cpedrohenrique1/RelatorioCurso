#ifndef ALUNOCOMPARATORMATRICULA_H
#define ALUNOCOMPARATORMATRICULA_H
#include "aluno.h"

struct AlunoComparatorMatricula{
    bool operator()(const Pedro::Aluno* aluno1,const Pedro::Aluno* aluno2){
        return aluno1->getMatricula() < aluno2->getMatricula();
    }
};

#endif // ALUNOCOMPARATORMATRICULA_H
