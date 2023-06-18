#include "aluno.h"

namespace Pedro{

const Pedro::Matricula &Aluno::getMatricula() const
{
    return matricula;
}

void Aluno::setMatricula(const Pedro::Matricula &newMatricula)
{
    matricula = newMatricula;
}

const QString &Aluno::getNome() const
{
    return nome;
}

void Aluno::setNome(const QString &newNome)
{
    nome = newNome;
}

const QString &Aluno::getTurno() const
{
    return turno;
}

void Aluno::setTurno(const QString &newTurno)
{
    turno = newTurno;
}

const QString &Aluno::getOptativa() const
{
    return optativa;
}

void Aluno::setOptativa(const QString &newOptativa)
{
    optativa = newOptativa;
}

const QString &Aluno::getCurso() const
{
    return curso;
}

void Aluno::setCurso(const QString &newCurso)
{
    curso = newCurso;
}

int Aluno::getPeriodo() const
{
    return periodo;
}

void Aluno::setPeriodo(int newPeriodo)
{
    periodo = newPeriodo;
}

Aluno::Aluno():
    matricula(),
    nome(""),
    turno(""),
    periodo(0),
    optativa(""),
    curso("")
{}

Aluno::Aluno(Matricula matricula, QString nome, QString turno, int periodo, QString optativa, QString curso):
    matricula(matricula),
    nome(nome),
    turno(turno),
    periodo(periodo),
    optativa(optativa),
    curso(curso)
{}

}
