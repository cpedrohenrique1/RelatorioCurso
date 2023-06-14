#include "buscararquivo.h"

namespace Pedro{

BuscarArquivo::BuscarArquivo()
{

}

QString BuscarArquivo::operator()(QWidget *parent)
{
    QString enderecoArquivo = "";
    enderecoArquivo = QFileDialog::getOpenFileName(parent, "Abrir Arquivo", QDir::homePath(), "*.xls");
    return enderecoArquivo;
}

}
