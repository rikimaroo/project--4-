#include "mainwindow.h"
#include"infomation.h"
#include"QMessageBox"
#include"QPushButton"
#include"QWidget"
#include"QDebug"
#include"QObject"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    /*int count = 0;

    QWidget window;
    QPushButton * start_app = new QPushButton(&window);
    start_app->setGeometry(10,20,100,50);
    start_app->setText("Start app");

    QPushButton * inf = new QPushButton(&window);
    inf->setGeometry(10,100,100,50);
    inf->setText("Get infomation");

    window.show();
    QWidget *ptr = &window;
    if (start_app->isEnabled())
    {
        //connect(start_app,SIGNAL(clicked()), ptr, SLOT(close()));
        //connect(start_app, SIGNAL(clicked()), window, SLOT(close()));
    }*/
    //while (1)
    //{
        /*if ()
        {
            w.show();
        }*/
    //}

    w.show();


    QMessageBox name;
    //name.setText(ui->lineEdit->text());
    return a.exec();
}

/*void MainWindow::on_start_app_clicked()
{
    //start_app.
}*/
