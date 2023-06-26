#ifndef EXECUTARMOSTRAR_H
#define EXECUTARMOSTRAR_H
#include <QTableWidget>
#include <set>
#include <list>
#include "aluno.h"

class ExecutarMostrar
{
private:
    template<typename Comparator>
    void emOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno*, Comparator> &arvoreAlunos)
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
    template<typename Comparator>
    void reverseOrdem(QTableWidget *parent, std::multiset<Pedro::Aluno*, Comparator> &arvoreAlunos)
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

public:
    ExecutarMostrar();
    void operator()(QTableWidget *parent, QString modo, QString ordem, std::list<Pedro::Aluno*> &listaAlunos);
};

#endif // EXECUTARMOSTRAR_H
