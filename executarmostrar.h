#ifndef EXECUTARMOSTRAR_H
#define EXECUTARMOSTRAR_H
#include <QTableWidget>
#include <set>
#include "aluno.h"
#include "AlunoComparatorMatricula.h"
#include "AlunoComparatorNome.h"
#include "AlunoComparatorTurno.h"
#include "AlunoComparatorCurso.h"
#include "AlunoComparatorOptativa.h"
#include "AlunoComparatorPeriodo.h"

class ExecutarMostrar
{
public:
    ExecutarMostrar();
    void operator()(QTableWidget *parent, QString modo, QString ordem, QString enderecoArquivo);

    void emOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno *, AlunoComparatorMatricula> arvoreAlunos)
    {
        for (Pedro::Aluno *aluno : arvoreAlunos)
        {
            parent->insertRow(parent->rowCount());
            parent->setItem(parent->rowCount() - 1, 0, new QTableWidgetItem(aluno->getMatricula()));
            parent->setItem(parent->rowCount() - 1, 1, new QTableWidgetItem(aluno->getNome()));
            parent->setItem(parent->rowCount() - 1, 2, new QTableWidgetItem(aluno->getTurno()));
            parent->setItem(parent->rowCount() - 1, 3, new QTableWidgetItem(QString::number(aluno->getPeriodo())));
            parent->setItem(parent->rowCount() - 1, 4, new QTableWidgetItem(aluno->getOptativa()));
            parent->setItem(parent->rowCount() - 1, 5, new QTableWidgetItem(aluno->getCurso()));
        }
    }
    void reverseOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno *, AlunoComparatorMatricula> arvoreAlunos)
    {
        for (Pedro::Aluno *aluno : arvoreAlunos)
        {
            parent->insertRow(0);
            parent->setItem(0, 0, new QTableWidgetItem(aluno->getMatricula()));
            parent->setItem(0, 1, new QTableWidgetItem(aluno->getNome()));
            parent->setItem(0, 2, new QTableWidgetItem(aluno->getTurno()));
            parent->setItem(0, 3, new QTableWidgetItem(QString::number(aluno->getPeriodo())));
            parent->setItem(0, 4, new QTableWidgetItem(aluno->getOptativa()));
            parent->setItem(0, 5, new QTableWidgetItem(aluno->getCurso()));
        }
    }

    void emOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno *, AlunoComparatorNome> arvoreAlunos)
    {
        for (Pedro::Aluno *aluno : arvoreAlunos)
        {
            parent->insertRow(parent->rowCount());
            parent->setItem(parent->rowCount() - 1, 0, new QTableWidgetItem(aluno->getMatricula()));
            parent->setItem(parent->rowCount() - 1, 1, new QTableWidgetItem(aluno->getNome()));
            parent->setItem(parent->rowCount() - 1, 2, new QTableWidgetItem(aluno->getTurno()));
            parent->setItem(parent->rowCount() - 1, 3, new QTableWidgetItem(QString::number(aluno->getPeriodo())));
            parent->setItem(parent->rowCount() - 1, 4, new QTableWidgetItem(aluno->getOptativa()));
            parent->setItem(parent->rowCount() - 1, 5, new QTableWidgetItem(aluno->getCurso()));
        }
    }
    void reverseOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno *, AlunoComparatorNome> arvoreAlunos)
    {
        for (Pedro::Aluno *aluno : arvoreAlunos)
        {
            parent->insertRow(0);
            parent->setItem(0, 0, new QTableWidgetItem(aluno->getMatricula()));
            parent->setItem(0, 1, new QTableWidgetItem(aluno->getNome()));
            parent->setItem(0, 2, new QTableWidgetItem(aluno->getTurno()));
            parent->setItem(0, 3, new QTableWidgetItem(QString::number(aluno->getPeriodo())));
            parent->setItem(0, 4, new QTableWidgetItem(aluno->getOptativa()));
            parent->setItem(0, 5, new QTableWidgetItem(aluno->getCurso()));
        }
    }

    void emOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno *, AlunoComparatorTurno> arvoreAlunos)
    {
        for (Pedro::Aluno *aluno : arvoreAlunos)
        {
            parent->insertRow(parent->rowCount());
            parent->setItem(parent->rowCount() - 1, 0, new QTableWidgetItem(aluno->getMatricula()));
            parent->setItem(parent->rowCount() - 1, 1, new QTableWidgetItem(aluno->getNome()));
            parent->setItem(parent->rowCount() - 1, 2, new QTableWidgetItem(aluno->getTurno()));
            parent->setItem(parent->rowCount() - 1, 3, new QTableWidgetItem(QString::number(aluno->getPeriodo())));
            parent->setItem(parent->rowCount() - 1, 4, new QTableWidgetItem(aluno->getOptativa()));
            parent->setItem(parent->rowCount() - 1, 5, new QTableWidgetItem(aluno->getCurso()));
        }
    }
    void reverseOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno *, AlunoComparatorTurno> arvoreAlunos)
    {
        for (Pedro::Aluno *aluno : arvoreAlunos)
        {
            parent->insertRow(0);
            parent->setItem(0, 0, new QTableWidgetItem(aluno->getMatricula()));
            parent->setItem(0, 1, new QTableWidgetItem(aluno->getNome()));
            parent->setItem(0, 2, new QTableWidgetItem(aluno->getTurno()));
            parent->setItem(0, 3, new QTableWidgetItem(QString::number(aluno->getPeriodo())));
            parent->setItem(0, 4, new QTableWidgetItem(aluno->getOptativa()));
            parent->setItem(0, 5, new QTableWidgetItem(aluno->getCurso()));
        }
    }

    void emOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno *, AlunoComparatorCurso> arvoreAlunos)
    {
        for (Pedro::Aluno *aluno : arvoreAlunos)
        {
            parent->insertRow(parent->rowCount());
            parent->setItem(parent->rowCount() - 1, 0, new QTableWidgetItem(aluno->getMatricula()));
            parent->setItem(parent->rowCount() - 1, 1, new QTableWidgetItem(aluno->getNome()));
            parent->setItem(parent->rowCount() - 1, 2, new QTableWidgetItem(aluno->getTurno()));
            parent->setItem(parent->rowCount() - 1, 3, new QTableWidgetItem(QString::number(aluno->getPeriodo())));
            parent->setItem(parent->rowCount() - 1, 4, new QTableWidgetItem(aluno->getOptativa()));
            parent->setItem(parent->rowCount() - 1, 5, new QTableWidgetItem(aluno->getCurso()));
        }
    }
    void reverseOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno *, AlunoComparatorCurso> arvoreAlunos)
    {
        for (Pedro::Aluno *aluno : arvoreAlunos)
        {
            parent->insertRow(0);
            parent->setItem(0, 0, new QTableWidgetItem(aluno->getMatricula()));
            parent->setItem(0, 1, new QTableWidgetItem(aluno->getNome()));
            parent->setItem(0, 2, new QTableWidgetItem(aluno->getTurno()));
            parent->setItem(0, 3, new QTableWidgetItem(QString::number(aluno->getPeriodo())));
            parent->setItem(0, 4, new QTableWidgetItem(aluno->getOptativa()));
            parent->setItem(0, 5, new QTableWidgetItem(aluno->getCurso()));
        }
    }

    void emOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno *, AlunoComparatorOptativa> arvoreAlunos)
    {
        for (Pedro::Aluno *aluno : arvoreAlunos)
        {
            parent->insertRow(parent->rowCount());
            parent->setItem(parent->rowCount() - 1, 0, new QTableWidgetItem(aluno->getMatricula()));
            parent->setItem(parent->rowCount() - 1, 1, new QTableWidgetItem(aluno->getNome()));
            parent->setItem(parent->rowCount() - 1, 2, new QTableWidgetItem(aluno->getTurno()));
            parent->setItem(parent->rowCount() - 1, 3, new QTableWidgetItem(QString::number(aluno->getPeriodo())));
            parent->setItem(parent->rowCount() - 1, 4, new QTableWidgetItem(aluno->getOptativa()));
            parent->setItem(parent->rowCount() - 1, 5, new QTableWidgetItem(aluno->getCurso()));
        }
    }
    void reverseOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno *, AlunoComparatorOptativa> arvoreAlunos)
    {
        for (Pedro::Aluno *aluno : arvoreAlunos)
        {
            parent->insertRow(0);
            parent->setItem(0, 0, new QTableWidgetItem(aluno->getMatricula()));
            parent->setItem(0, 1, new QTableWidgetItem(aluno->getNome()));
            parent->setItem(0, 2, new QTableWidgetItem(aluno->getTurno()));
            parent->setItem(0, 3, new QTableWidgetItem(QString::number(aluno->getPeriodo())));
            parent->setItem(0, 4, new QTableWidgetItem(aluno->getOptativa()));
            parent->setItem(0, 5, new QTableWidgetItem(aluno->getCurso()));
        }
    }

    void emOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno *, AlunoComparatorPeriodo> arvoreAlunos)
    {
        for (Pedro::Aluno *aluno : arvoreAlunos)
        {
            parent->insertRow(parent->rowCount());
            parent->setItem(parent->rowCount() - 1, 0, new QTableWidgetItem(aluno->getMatricula()));
            parent->setItem(parent->rowCount() - 1, 1, new QTableWidgetItem(aluno->getNome()));
            parent->setItem(parent->rowCount() - 1, 2, new QTableWidgetItem(aluno->getTurno()));
            parent->setItem(parent->rowCount() - 1, 3, new QTableWidgetItem(QString::number(aluno->getPeriodo())));
            parent->setItem(parent->rowCount() - 1, 4, new QTableWidgetItem(aluno->getOptativa()));
            parent->setItem(parent->rowCount() - 1, 5, new QTableWidgetItem(aluno->getCurso()));
        }
    }

    void reverseOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno *, AlunoComparatorPeriodo> arvoreAlunos)
    {
        for (Pedro::Aluno *aluno : arvoreAlunos)
        {
            parent->insertRow(0);
            parent->setItem(0, 0, new QTableWidgetItem(aluno->getMatricula()));
            parent->setItem(0, 1, new QTableWidgetItem(aluno->getNome()));
            parent->setItem(0, 2, new QTableWidgetItem(aluno->getTurno()));
            parent->setItem(0, 3, new QTableWidgetItem(QString::number(aluno->getPeriodo())));
            parent->setItem(0, 4, new QTableWidgetItem(aluno->getOptativa()));
            parent->setItem(0, 5, new QTableWidgetItem(aluno->getCurso()));
        }
    }
};

#endif // EXECUTARMOSTRAR_H
