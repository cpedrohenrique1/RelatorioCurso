#include "executarmostrar.h"
#include <QFile>
#include <QTextStream>
#include "AlunoComparatorMatricula.h"
#include "AlunoComparatorNome.h"
#include "AlunoComparatorTurno.h"
#include "AlunoComparatorCurso.h"
#include "AlunoComparatorOptativa.h"
#include "AlunoComparatorPeriodo.h"

ExecutarMostrar::ExecutarMostrar()
{

}

void ExecutarMostrar::operator ()(QTableWidget *parent, QString modo, QString ordem, std::list<Pedro::Aluno*> &listaAlunos)
{
    if (modo == "Matricula")
    {
        std::multiset<Pedro::Aluno*, AlunoComparatorMatricula> arvoreAlunos;
        for (Pedro::Aluno *aluno: listaAlunos)
        {
            arvoreAlunos.insert(aluno);
        }
        if (ordem == "Crescente")
        {
            emOrdem(parent, arvoreAlunos);
        }
        else
        {
            reverseOrdem(parent, arvoreAlunos);
        }
    }
    if (modo == "Nome")
    {
        std::multiset<Pedro::Aluno*, AlunoComparatorNome> arvoreAlunos;
        for (Pedro::Aluno *aluno: listaAlunos)
        {
            arvoreAlunos.insert(aluno);
        }
        if (ordem == "Crescente")
        {
            emOrdem(parent, arvoreAlunos);
        }
        else
        {
            reverseOrdem(parent, arvoreAlunos);
        }
    }
    if (modo == "Curso")
    {
        std::multiset<Pedro::Aluno*, AlunoComparatorCurso> arvoreAlunos;
        for (Pedro::Aluno *aluno: listaAlunos)
        {
            arvoreAlunos.insert(aluno);
        }
        if (ordem == "Crescente")
        {
            emOrdem(parent, arvoreAlunos);
        }
        else
        {
            reverseOrdem(parent, arvoreAlunos);
        }
    }
    if (modo == "Optativa")
    {
        std::multiset<Pedro::Aluno*, AlunoComparatorOptativa> arvoreAlunos;
        for (Pedro::Aluno *aluno: listaAlunos)
        {
            arvoreAlunos.insert(aluno);
        }
        if (ordem == "Crescente")
        {
            emOrdem(parent, arvoreAlunos);
        }
        else
        {
            reverseOrdem(parent, arvoreAlunos);
        }
    }
    if (modo == "Periodo")
    {
        std::multiset<Pedro::Aluno*, AlunoComparatorPeriodo> arvoreAlunos;
        for (Pedro::Aluno *aluno: listaAlunos)
        {
            arvoreAlunos.insert(aluno);
        }
        if (ordem == "Crescente")
        {
            emOrdem(parent, arvoreAlunos);
        }
        else
        {
            reverseOrdem(parent, arvoreAlunos);
        }
    }
    if (modo == "Turno")
    {
        std::multiset<Pedro::Aluno*, AlunoComparatorTurno> arvoreAlunos;
        for (Pedro::Aluno *aluno: listaAlunos)
        {
            arvoreAlunos.insert(aluno);
        }
        if (ordem == "Crescente")
        {
            emOrdem(parent, arvoreAlunos);
        }
        else
        {
            reverseOrdem(parent, arvoreAlunos);
        }
    }
}
