#ifndef BUSCARARQUIVO_H
#define BUSCARARQUIVO_H
#include <QString>
#include <QFileDialog>
#include "arvorebinaria.h"

namespace Pedro{

class BuscarArquivo
{
public:
    BuscarArquivo();
    QString operator()(QWidget* parent, ArvoreBinaria& arvore);
};

}

#endif // BUSCARARQUIVO_H
