#ifndef BUSCARARQUIVO_H
#define BUSCARARQUIVO_H
#include <QString>
#include <QFileDialog>

namespace Pedro{

class BuscarArquivo
{
private:
    QString enderecoArquivo;
public:
    BuscarArquivo();
    QString operator()(QWidget* parent);
    QString getEnderecoArquivo() const;
};

}

#endif // BUSCARARQUIVO_H
