#ifndef MATRICULA_H
#define MATRICULA_H
#include <QString>

namespace Pedro
{

    class Matricula
    {
    private:
        int ano;
        int semestre;
        int curso;
        int numero;

    public:
        Matricula();
        operator QString();
        bool CompararMatricula(Pedro::Matricula other);
        void setAno(int ano);
        void setSemestre(int semestre);
        void setCurso(int curso);
        void setNumero(int numero);
    };

}

#endif // MATRICULA_H
