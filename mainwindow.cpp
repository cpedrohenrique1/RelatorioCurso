#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include "buscararquivo.h"
#include "executarmostrar.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget_Output->setColumnCount(6);
    QStringList cabecalho = {"Matricula", "Nome", "Turno", "Periodo", "Optativa", "Curso"};
    ui->tableWidget_Output->setHorizontalHeaderLabels(cabecalho);
    ui->tableWidget_Output->setColumnWidth(0, 120); // Matricula
    ui->tableWidget_Output->setColumnWidth(1, 330); // Nome
    ui->tableWidget_Output->setColumnWidth(2, 100); // Turno
    ui->tableWidget_Output->setColumnWidth(3, 5);   // Periodo
    ui->tableWidget_Output->setColumnWidth(4, 160); // Optativa
    ui->tableWidget_Output->setColumnWidth(5, 230); // Curso
    ui->tableWidget_Output->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Limpar_clicked()
{
    try
    {
        ui->tableWidget_Output->setRowCount(0);
        ui->tableWidget_Output->clearContents();
        ui->tableWidget_Output->setColumnCount(6);
        QStringList cabecalho = {"Matricula", "Nome", "Turno", "Periodo", "Optativa", "Curso"};
        ui->tableWidget_Output->setHorizontalHeaderLabels(cabecalho);
    }
    catch (...)
    {
        QMessageBox::critical(this, "Erro", "Erro ao limpar a tabela");
    }
}

void MainWindow::on_pushButton_Buscar_clicked()
{
    try
    {
        Pedro::BuscarArquivo buscarArquivo;
        ui->lineEdit_EnderecoArquivo->setText(buscarArquivo(this));
    }
    catch (QString &erro)
    {
        QMessageBox::critical(this, "Erro", erro);
    }
    catch (...)
    {
        QMessageBox::critical(this, "Erro", "Erro ao buscar o arquivo");
    }
}

void MainWindow::on_pushButton_Mostrar_clicked()
{
    try
    {
        if (ui->lineEdit_EnderecoArquivo->text().isEmpty())
        {
            throw QString("Arquivo nao aberto");
        }
        on_pushButton_Limpar_clicked();
        ExecutarMostrar executarMostrar;
        executarMostrar(ui->tableWidget_Output, ui->comboBox_SelecionarModo->currentText(), ui->comboBox_Ordem->currentText(), ui->lineEdit_EnderecoArquivo->text());
    }
    catch (QString &erro)
    {
        QMessageBox::critical(this, "Erro", erro);
    }
    catch (...)
    {
        QMessageBox::critical(this, "Erro", "Erro ao mostrar o arquivo");
    }
}
