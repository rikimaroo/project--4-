#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QMessageBox"
#include"infomation.h"
#include"QFile"
#include"QDebug"
#include"QString"

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

QString read()
{
    QFile count("count.txt");
    if (!count.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "cant open file count for read\n";
        return 0;
    }

    QString co = count.readAll();
    count.close();

    return co;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox text;
    infomation *inf = new infomation();
    inf->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox text;
    text.setText("bye :( ");
    text.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox text;
    text.setText("Number of registered information: " + read());
    text.exec();
}
