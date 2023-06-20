#include "executarmostrar.h"

ExecutarMostrar::ExecutarMostrar()
{

}

void ExecutarMostrar::operator ()(QTableWidget *parent, ArvoreBinaria arvore, QString modo, QString ordem)
{
    if (ordem == "Crescente")
    {
        if (modo == "Matricula")
        {
            for (int i = 0; i < 20; i++)
            {
                parent->insertRow(i);
                parent->setItem(i, 0, new QTableWidgetItem("332"));
            }
        }
        if (modo == "Nome")
        {

        }
        if (modo == "Curso")
        {

        }
        if (modo == "Optativa")
        {

        }
        if (modo == "Periodo")
        {

        }
        if (modo == "Turno")
        {

        }
    }
    else
    {
        if (modo == "Matricula")
        {

        }
        if (modo == "Nome")
        {

        }
        if (modo == "Curso")
        {

        }
        if (modo == "Optativa")
        {

        }
        if (modo == "Periodo")
        {

        }
        if (modo == "Turno")
        {

        }
    }
}

