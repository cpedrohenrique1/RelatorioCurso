#ifndef BUSCARARQUIVO_H
#define BUSCARARQUIVO_H
#include <QString>
#include <QFileDialog>

namespace Pedro
{

    class BuscarArquivo
    {
    public:
        BuscarArquivo();
        QString operator()(QWidget *parent);
    };

}

#endif // BUSCARARQUIVO_H
