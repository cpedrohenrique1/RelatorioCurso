#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <list>
#include "aluno.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Limpar_clicked();

    void on_pushButton_Buscar_clicked();

    void on_pushButton_Mostrar_clicked();

private:
    Ui::MainWindow *ui;
    std::list<Pedro::Aluno*> listaAlunos;
};
#endif // MAINWINDOW_H
