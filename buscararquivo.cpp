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
            throw QString("Arquivo nao pode ser aberto");
        }
        arquivo.close();
        return enderecoArquivo;
    }

}
