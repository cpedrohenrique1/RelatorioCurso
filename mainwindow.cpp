#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>

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
        ui->lineEdit_EnderecoArquivo->setText()
    } catch (...) {
        QMessageBox::critical(this, "Erro", "Erro ao buscar o arquivo");
    }
}

