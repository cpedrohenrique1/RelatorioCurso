#include "executarmostrar.h"
#include "aluno.h"
#include "AlunoComparatorMatricula.h"
#include <set>
#include <QFile>
#include <QTextStream>

ExecutarMostrar::ExecutarMostrar()
{

}

void ExecutarMostrar::operator ()(QTableWidget *parent, QString modo, QString ordem, QString enderecoArquivo)
{
    QFile arquivo(enderecoArquivo);
    QTextStream in(&arquivo);
    std::set<Pedro::Aluno*> arvoreAlunos;
    if (!arquivo.open(QIODevice::ReadOnly))
    {
        throw QString("Erro ao abrir o arquivo");
    }
    if (ordem == "Crescente")
    {
        if (modo == "Matricula")
        {
            while (!in.atEnd())
            {
                QString linha = in.readLine();
                QStringList parts = linha.split(";");
                int i = 0;
                Pedro::Aluno *aluno = new Pedro::Aluno();
                for (QString part : parts)
                {
                    switch (i)
                    {
                    case 0:
                    {
                        Pedro::Matricula matricula;
                        QStringList partsMatricula = part.split(".");
                        int j = 0;
                        for (QString partMatricula : partsMatricula)
                        {
                            if (j == 0)
                            {
                                matricula.setAno(partMatricula.toInt());
                            }
                            if (j == 1)
                            {
                                matricula.setSemestre(partMatricula.toInt());
                            }
                            if (j == 2)
                            {
                                matricula.setCurso(partMatricula.toInt());
                            }
                            if (j == 3)
                            {
                                matricula.setNumero(partMatricula.toInt());
                            }
                            j++;
                        }
                        aluno->setMatricula(matricula);
                        break;
                    }
                    case 1:
                    {
                        aluno->setNome(part);
                        break;
                    }
                    case 2:
                    {
                        aluno->setTurno(part);
                        break;
                    }
                    case 3:
                    {
                        aluno->setPeriodo(part.toInt());
                        break;
                    }
                    case 4:
                    {
                        aluno->setOptativa(part);
                        break;
                    }
                    case 5:
                    {
                        aluno->setCurso(part);
                        break;
                    }
                    }
                    i++;
                }
                arvoreAlunos.insert(aluno);
            }
            for (const Pedro::Aluno *aluno : arvoreAlunos)
            {
                int linha = parent->rowCount();
                parent->insertRow(linha);
                parent->setItem(linha, 0, new QTableWidgetItem(aluno->getMatricula()));
                parent->setItem(linha, 1, new QTableWidgetItem(aluno->getNome()));
                parent->setItem(linha, 2, new QTableWidgetItem(aluno->getTurno()));
                parent->setItem(linha, 3, new QTableWidgetItem(QString::number(aluno->getPeriodo())));
                parent->setItem(linha, 4, new QTableWidgetItem(aluno->getOptativa()));
                parent->setItem(linha, 5, new QTableWidgetItem(aluno->getCurso()));
            }
        }
        if (modo == "Nome")
        {

        }
        if (modo == "Curso")
        {

        }
        if (modo == "Optativa")
        {

        }
        if (modo == "Periodo")
        {

        }
        if (modo == "Turno")
        {

        }
    }
    else
    {
        if (modo == "Matricula")
        {

        }
        if (modo == "Nome")
        {

        }
        if (modo == "Curso")
        {

        }
        if (modo == "Optativa")
        {

        }
        if (modo == "Periodo")
        {

        }
        if (modo == "Turno")
        {

        }
    }
}

