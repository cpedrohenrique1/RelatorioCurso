#include "matricula.h"

namespace Pedro{

Matricula::Matricula():
	ano(0),
	semestre(0),
	curso(0),
	numero(0)
{}

Matricula::operator QString(){
	return QString::number(ano) + "." + QString::number(semestre) + "." + QString::number(curso) + "." + QString::number(numero);
}
void Matricula::setAno(int ano){
	this->ano = ano;
}
void Matricula::setSemestre(int semestre){
	this->semestre = semestre;
}
void Matricula::setCurso(int curso){
	this->curso = curso;
}
void Matricula::setNumero(int numero){
	this->numero = numero;
}

bool Matricula::operator < (Pedro::Matricula other){
    if (ano < other.ano)
    {
        return true;
    }
    if (semestre < other.semestre)
    {
        return true;
    }
    if (curso < other.curso)
    {
        return true;
    }
    if (numero < other.numero)
    {
        return true;
    }
	return false;
}

}
