#include "executarmostrar.h"
#include <QFile>
#include <QTextStream>

ExecutarMostrar::ExecutarMostrar()
{

}

void ExecutarMostrar::operator ()(QTableWidget *parent, QString modo, QString ordem, QString enderecoArquivo)
{
    QFile arquivo(enderecoArquivo);
    QTextStream in(&arquivo);
    if (!arquivo.open(QIODevice::ReadOnly))
    {
        throw QString("Erro ao abrir o arquivo");
    }
    if (modo == "Matricula")
    {
        std::multiset<Pedro::Aluno*, AlunoComparatorMatricula> arvoreAlunos;
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
                    Pedro::Matricula *matricula = new Pedro::Matricula();
                    QStringList partsMatricula = part.split(".");
                    int j = 0;
                    for (QString partMatricula : partsMatricula)
                    {
                        if (j == 0)
                        {
                            matricula->setAno(partMatricula.toInt());
                        }
                        if (j == 1)
                        {
                            matricula->setSemestre(partMatricula.toInt());
                        }
                        if (j == 2)
                        {
                            matricula->setCurso(partMatricula.toInt());
                        }
                        if (j == 3)
                        {
                            matricula->setNumero(partMatricula.toInt());
                        }
                        j++;
                    }
                    aluno->setMatricula(*matricula);
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
                ++i;
            }
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
                    Pedro::Matricula *matricula = new Pedro::Matricula();
                    QStringList partsMatricula = part.split(".");
                    int j = 0;
                    for (QString partMatricula : partsMatricula)
                    {
                        if (j == 0)
                        {
                            matricula->setAno(partMatricula.toInt());
                        }
                        if (j == 1)
                        {
                            matricula->setSemestre(partMatricula.toInt());
                        }
                        if (j == 2)
                        {
                            matricula->setCurso(partMatricula.toInt());
                        }
                        if (j == 3)
                        {
                            matricula->setNumero(partMatricula.toInt());
                        }
                        j++;
                    }
                    aluno->setMatricula(*matricula);
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
                ++i;
            }
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
                    Pedro::Matricula *matricula = new Pedro::Matricula();
                    QStringList partsMatricula = part.split(".");
                    int j = 0;
                    for (QString partMatricula : partsMatricula)
                    {
                        if (j == 0)
                        {
                            matricula->setAno(partMatricula.toInt());
                        }
                        if (j == 1)
                        {
                            matricula->setSemestre(partMatricula.toInt());
                        }
                        if (j == 2)
                        {
                            matricula->setCurso(partMatricula.toInt());
                        }
                        if (j == 3)
                        {
                            matricula->setNumero(partMatricula.toInt());
                        }
                        j++;
                    }
                    aluno->setMatricula(*matricula);
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
                ++i;
            }
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
                    Pedro::Matricula *matricula = new Pedro::Matricula();
                    QStringList partsMatricula = part.split(".");
                    int j = 0;
                    for (QString partMatricula : partsMatricula)
                    {
                        if (j == 0)
                        {
                            matricula->setAno(partMatricula.toInt());
                        }
                        if (j == 1)
                        {
                            matricula->setSemestre(partMatricula.toInt());
                        }
                        if (j == 2)
                        {
                            matricula->setCurso(partMatricula.toInt());
                        }
                        if (j == 3)
                        {
                            matricula->setNumero(partMatricula.toInt());
                        }
                        j++;
                    }
                    aluno->setMatricula(*matricula);
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
                ++i;
            }
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
                    Pedro::Matricula *matricula = new Pedro::Matricula();
                    QStringList partsMatricula = part.split(".");
                    int j = 0;
                    for (QString partMatricula : partsMatricula)
                    {
                        if (j == 0)
                        {
                            matricula->setAno(partMatricula.toInt());
                        }
                        if (j == 1)
                        {
                            matricula->setSemestre(partMatricula.toInt());
                        }
                        if (j == 2)
                        {
                            matricula->setCurso(partMatricula.toInt());
                        }
                        if (j == 3)
                        {
                            matricula->setNumero(partMatricula.toInt());
                        }
                        j++;
                    }
                    aluno->setMatricula(*matricula);
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
                ++i;
            }
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
                    Pedro::Matricula *matricula = new Pedro::Matricula();
                    QStringList partsMatricula = part.split(".");
                    int j = 0;
                    for (QString partMatricula : partsMatricula)
                    {
                        if (j == 0)
                        {
                            matricula->setAno(partMatricula.toInt());
                        }
                        if (j == 1)
                        {
                            matricula->setSemestre(partMatricula.toInt());
                        }
                        if (j == 2)
                        {
                            matricula->setCurso(partMatricula.toInt());
                        }
                        if (j == 3)
                        {
                            matricula->setNumero(partMatricula.toInt());
                        }
                        j++;
                    }
                    aluno->setMatricula(*matricula);
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
                ++i;
            }
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
