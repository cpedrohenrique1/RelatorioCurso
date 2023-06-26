#ifndef ALUNOCOMPARATORNOME_H
#define ALUNOCOMPARATORNOME_H
#include "aluno.h"

struct AlunoComparatorNome
{
    bool operator()(Pedro::Aluno *a, Pedro::Aluno *b) const
    {
        return (bool)(a->getNome() < b->getNome());
    }
};

#endif // ALUNOCOMPARATORNOME_H
