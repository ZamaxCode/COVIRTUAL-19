#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_salir_clicked();

    void on_continuar_clicked();

    void on_enviarQ0_clicked();

    void on_enviarQ1_clicked();

    void on_enviarQ2_clicked();

    void on_enviarQ3_clicked();

    void on_enviarQ4_clicked();

    void on_enviarQ5_clicked();

    void on_enviarQ6_clicked();

    void on_enviarQ7_clicked();

    void on_enviarQ8_clicked();

    void on_enviarQ9_clicked();

    void on_enviarQ10_clicked();

    void on_enviarQ11_clicked();

    void on_pushButton_clicked();

    void on_salirQ11_clicked();

    void on_enviarQ12_clicked();

    void on_regresarQ13_clicked();

    void on_salirQ13_clicked();

    void on_regresarQ14_clicked();

    void on_salirQ14_clicked();

    void on_regresarQ15_clicked();

    void on_salirQ15_clicked();

    void on_regresarQ16_clicked();

    void on_salirQ16_clicked();

    void on_regresarQ17_clicked();

    void on_salirQ17_clicked();

    void on_regresarQ19_clicked();

    void on_regresarQ18_clicked();

    void on_salirQ18_clicked();

    void on_salirQ19_clicked();

    void on_regresarQ20_clicked();

    void on_salirQ20_clicked();

    void on_regresarQ21_clicked();

    void on_salirQ21_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
