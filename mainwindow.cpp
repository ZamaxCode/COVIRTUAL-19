#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_continuar_clicked()
{
    ui->CasosSW->setCurrentIndex(1);
}

void MainWindow::on_salir_clicked()
{
    exit(0);
}

void MainWindow::on_enviarQ0_clicked()
{
    if(ui->respuestaQ0->currentText()=="NO")
        ui->QN->setCurrentIndex(1);
    else
        if(ui->respuestaQ0->currentText()=="SI")
            ui->QN->setCurrentIndex(12);
    ui->respuestaQ0->setCurrentText("");
}

void MainWindow::on_enviarQ1_clicked()
{
    if(ui->respuestaQ1->currentText()=="SI")
        ui->QN->setCurrentIndex(2);
    else
        if(ui->respuestaQ1->currentText()=="NO")
            ui->QN->setCurrentIndex(13);
    ui->respuestaQ1->setCurrentText("");
}

void MainWindow::on_enviarQ2_clicked()
{
    if(ui->respuestaQ2->currentText()=="SI")
        ui->QN->setCurrentIndex(3);
    else
        if(ui->respuestaQ2->currentText()=="NO")
            ui->QN->setCurrentIndex(14);
    ui->respuestaQ2->setCurrentText("");
}

void MainWindow::on_enviarQ3_clicked()
{
    if(ui->respuestaQ3->currentText()=="SI")
        ui->QN->setCurrentIndex(4);
    else
        if(ui->respuestaQ3->currentText()=="NO")
            ui->QN->setCurrentIndex(15);
    ui->respuestaQ3->setCurrentText("");
}

void MainWindow::on_enviarQ4_clicked()
{
    if(ui->respuestaQ4->currentText()=="SI")
        ui->QN->setCurrentIndex(5);
    else
        if(ui->respuestaQ4->currentText()=="NO")
            ui->QN->setCurrentIndex(16);
    ui->respuestaQ4->setCurrentText("");
}

void MainWindow::on_enviarQ5_clicked()
{
    if(ui->respuestaQ5->currentText()=="SI")
        ui->QN->setCurrentIndex(6);
    else
        if(ui->respuestaQ5->currentText()=="NO")
            ui->QN->setCurrentIndex(17);
    ui->respuestaQ5->setCurrentText("");
}

void MainWindow::on_enviarQ6_clicked()
{
    if(ui->respuestaQ6->currentText()=="SI")
        ui->QN->setCurrentIndex(7);
    else
        if(ui->respuestaQ6->currentText()=="NO")
            ui->QN->setCurrentIndex(18);
    ui->respuestaQ6->setCurrentText("");
}

void MainWindow::on_enviarQ7_clicked()
{
    if(ui->respuestaQ7->currentText()=="SI")
        ui->QN->setCurrentIndex(8);
    else
        if(ui->respuestaQ7->currentText()=="NO")
            ui->QN->setCurrentIndex(19);
    ui->respuestaQ7->setCurrentText("");
}

void MainWindow::on_enviarQ8_clicked()
{
    if(ui->respuestaQ8->currentText()=="SI")
        ui->QN->setCurrentIndex(9);
    else
        if(ui->respuestaQ8->currentText()=="NO")
            ui->QN->setCurrentIndex(20);
    ui->respuestaQ8->setCurrentText("");
}

void MainWindow::on_enviarQ9_clicked()
{
    if(ui->respuestaQ9->currentText()=="SI")
        ui->QN->setCurrentIndex(10);
    else
        if(ui->respuestaQ9->currentText()=="NO")
            ui->QN->setCurrentIndex(20);
    ui->respuestaQ9->setCurrentText("");
}

void MainWindow::on_enviarQ10_clicked()
{
    if(ui->respuestaQ10->currentText()=="SI")
        ui->QN->setCurrentIndex(11);
    else
        if(ui->respuestaQ10->currentText()=="NO")
            ui->QN->setCurrentIndex(21);
    ui->respuestaQ10->setCurrentText("");
}

void MainWindow::on_enviarQ11_clicked()
{
    ui->QN->setCurrentIndex(0);
    ui->CasosSW->setCurrentIndex(0);
}

void MainWindow::on_salirQ11_clicked()
{
    exit(0);
}

void MainWindow::on_enviarQ12_clicked()
{
    if(ui->respuestaQ12->currentText()=="SI")
        ui->QN->setCurrentIndex(1);
    else
        if(ui->respuestaQ12->currentText()=="NO")
            ui->QN->setCurrentIndex(13);
    ui->respuestaQ10->setCurrentText("");
}

void MainWindow::on_regresarQ13_clicked()
{
    ui->QN->setCurrentIndex(0);
    ui->CasosSW->setCurrentIndex(0);
}

void MainWindow::on_salirQ13_clicked()
{
    exit(0);
}

void MainWindow::on_regresarQ14_clicked()
{
    ui->QN->setCurrentIndex(0);
    ui->CasosSW->setCurrentIndex(0);
}

void MainWindow::on_salirQ14_clicked()
{
    exit(0);
}

void MainWindow::on_regresarQ15_clicked()
{
    ui->QN->setCurrentIndex(0);
    ui->CasosSW->setCurrentIndex(0);
}

void MainWindow::on_salirQ15_clicked()
{
    exit(0);
}

void MainWindow::on_regresarQ16_clicked()
{
    ui->QN->setCurrentIndex(0);
    ui->CasosSW->setCurrentIndex(0);
}

void MainWindow::on_salirQ16_clicked()
{
    exit(0);
}

void MainWindow::on_regresarQ17_clicked()
{
    ui->QN->setCurrentIndex(0);
    ui->CasosSW->setCurrentIndex(0);
}

void MainWindow::on_salirQ17_clicked()
{
    exit(0);
}

void MainWindow::on_regresarQ18_clicked()
{
    ui->QN->setCurrentIndex(0);
    ui->CasosSW->setCurrentIndex(0);
}

void MainWindow::on_salirQ18_clicked()
{
    exit(0);
}

void MainWindow::on_regresarQ19_clicked()
{
    ui->QN->setCurrentIndex(0);
    ui->CasosSW->setCurrentIndex(0);
}

void MainWindow::on_salirQ19_clicked()
{
    exit(0);
}

void MainWindow::on_regresarQ20_clicked()
{
    ui->QN->setCurrentIndex(0);
    ui->CasosSW->setCurrentIndex(0);
}

void MainWindow::on_salirQ20_clicked()
{
    exit(0);
}

void MainWindow::on_regresarQ21_clicked()
{
    ui->QN->setCurrentIndex(0);
    ui->CasosSW->setCurrentIndex(0);
}

void MainWindow::on_salirQ21_clicked()
{
    exit(0);
}


void MainWindow::on_pushButton_clicked()
{

}
