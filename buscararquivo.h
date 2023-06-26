#ifndef BUSCARARQUIVO_H
#define BUSCARARQUIVO_H
#include <QString>
#include <QFileDialog>
#include <list>
#include "aluno.h"

namespace Pedro{

class BuscarArquivo
{
public:
    BuscarArquivo();
    QString operator()(QWidget* parent, std::list<Pedro::Aluno*> &listaAlunos);
};

}

#endif // BUSCARARQUIVO_H
