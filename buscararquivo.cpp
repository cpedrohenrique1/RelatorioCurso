#include "buscararquivo.h"
#include "matricula.h"
#include <QFile>
#include <QTextStream>

namespace Pedro
{

    BuscarArquivo::BuscarArquivo()
    {
    }

    QString BuscarArquivo::operator()(QWidget *parent)
    {
        QString enderecoArquivo = QFileDialog::getOpenFileName(parent, "Abrir Arquivo", QDir::homePath(), "*.csv");
        QFile arquivo(enderecoArquivo);

        if (!arquivo.open(QIODevice::ReadOnly))
        {
            throw QString("Erro ao abrir o arquivo");
        }
        arquivo.close();
        return enderecoArquivo;
    }

}
