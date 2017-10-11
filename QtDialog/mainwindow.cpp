#include "mainwindow.h"
#include "ui_mainwindow.h"


const double PI = 3.14159;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_countBtn_clicked()
{
    bool ok;
    QString tempStr;
    QString valueStr = ui->radiuslineEdit->text();
    int valueInt = valueStr.toInt(&ok);
    double area = valueInt *valueInt *PI;
    ui->areaLabel_2->setText(tempStr.setNum(area));
}

void MainWindow::on_radiuslineEdit_textChanged(const QString &arg1)
{
    bool ok;
    QString tempStr;
    QString valueStr = ui->radiuslineEdit->text();
    int valueInt = valueStr.toInt(&ok);
    double area = valueInt *valueInt *PI;
    ui->areaLabel_2->setText(tempStr.setNum(area));
}
