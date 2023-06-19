#ifndef ALUNO_H
#define ALUNO_H
#include "matricula.h"

namespace Pedro{

class Aluno
{
private:
    Pedro::Matricula matricula;
    QString nome;
    QString turno;
    int periodo;
    QString optativa;
    QString curso;
public:
    Aluno();
    Aluno(Pedro::Matricula matricula, QString nome, QString turno, int periodo, QString optativa, QString curso);

    Pedro::Matricula getMatricula() const;
    void setMatricula(const Pedro::Matricula &newMatricula);
    const QString &getNome() const;
    void setNome(const QString &newNome);
    const QString &getTurno() const;
    void setTurno(const QString &newTurno);
    const QString &getOptativa() const;
    void setOptativa(const QString &newOptativa);
    const QString &getCurso() const;
    void setCurso(const QString &newCurso);
    int getPeriodo() const;
    void setPeriodo(int newPeriodo);
};

}

#endif // ALUNO_H
