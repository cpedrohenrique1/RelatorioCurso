#include "buscararquivo.h"
#include <fstream>
#include <iostream>

namespace Pedro{

QString BuscarArquivo::getEnderecoArquivo() const
{
    return enderecoArquivo;
}

BuscarArquivo::BuscarArquivo():
    enderecoArquivo("")
{

}

QString BuscarArquivo::operator()(QWidget *parent)
{
    std::string enderecoArquivo = QFileDialog::getOpenFileName(parent, "Abrir Arquivo", QDir::homePath(), "*.csv").toStdString();
    std::ifstream arquivo;
    arquivo.open(enderecoArquivo);
    if (!arquivo.is_open())
    {
        throw QString("Erro ao abrir o arquivo");
    }
    arquivo.seekg(0);
    std::string linha;
    for (int i = 0; i < 3; i++)
    {
        getline(arquivo,linha);
    }
    while (getline(arquivo, linha))
    {
        std::cout << linha << (char)10;
    }
    arquivo.close();
    return QString::fromStdString(enderecoArquivo);
}

}
