#include "buscararquivo.h"
#include "matricula.h"
#include <QFile>
#include <QTextStream>
#include "aluno.h"

namespace Pedro
{

    BuscarArquivo::BuscarArquivo()
    {
    }

    QString BuscarArquivo::operator()(QWidget *parent, ArvoreBinaria& arvore)
    {
        QString enderecoArquivo = QFileDialog::getOpenFileName(parent, "Abrir Arquivo", QDir::homePath(), "*.csv");
        QFile arquivo(enderecoArquivo);

        if (!arquivo.open(QIODevice::ReadOnly))
        {
            throw QString("Erro ao abrir o arquivo");
        }
        QTextStream in(&arquivo);
        while (!in.atEnd())
        {
            QString linha = in.readLine();
            QStringList parts = linha.split(";");
            int i = 0;
            Pedro::Aluno aluno;
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
                    aluno.setMatricula(matricula);
                    break;
                }
                case 1:
                {
                    aluno.setNome(part);
                    break;
                }
                case 2:
                {
                    aluno.setTurno(part);
                    break;
                }
                case 3:
                {
                    aluno.setPeriodo(part.toInt());
                    break;
                }
                case 4:
                {
                    aluno.setOptativa(part);
                    break;
                }
                case 5:
                {
                    aluno.setCurso(part);
                    break;
                }
                }
                i++;
            }
            arvore.inserir(aluno);
        }

        arquivo.close();
        return enderecoArquivo;
    }

}
