#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include "buscararquivo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget_Output->setColumnCount(6);
    QStringList cabecalho = {"Matricula", "Nome", "Turno", "Periodo", "Optativa", "Curso"};
    ui->tableWidget_Output->setHorizontalHeaderLabels(cabecalho);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Limpar_clicked()
{
    try {
        ui->tableWidget_Output->clear();
        ui->tableWidget_Output->setColumnCount(6);
        QStringList cabecalho = {"Matricula", "Nome", "Turno", "Periodo", "Optativa", "Curso"};
        ui->tableWidget_Output->setHorizontalHeaderLabels(cabecalho);
    }
    catch (...) {
        QMessageBox::critical(this, "Erro", "Erro ao limpar a tabela");
    }
}


void MainWindow::on_pushButton_Buscar_clicked()
{
    try {
        Pedro::BuscarArquivo buscarArquivo;
        ui->lineEdit_EnderecoArquivo->setText(buscarArquivo(this));
    } catch (...) {
        QMessageBox::critical(this, "Erro", "Erro ao buscar o arquivo");
    }
}


void MainWindow::on_pushButton_Mostrar_clicked()
{
    try {
        if (ui->lineEdit_EnderecoArquivo->text().isEmpty())
        {
            throw QString("Arquivo nao aberto");
        }
    }
    catch (QString &erro) {
            QMessageBox::critical(this, "Erro", erro);
    }
    catch (...) {
    }
}

