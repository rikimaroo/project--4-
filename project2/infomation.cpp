#include "infomation.h"
#include"mainwindow.h"
#include "ui_infomation.h"
#include"QMessageBox"
#include"form.h"
#include"cache.h"
#include"QFile"
#include"QTextStream"
#include"QDebug"

infomation::infomation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::infomation)
{
    ui->setupUi(this);
}

infomation::~infomation()
{
    delete ui;
}

void writee(cache c1)
{
    QFile data("saves.txt");

    if (!data.open(QFile::Append | QFile::Text))
    {
        qDebug() << "cant open file for write";
        return;
    }
    QTextStream out(&data);

    std::string help = c1.get_name();
    QString qhelp = QString::fromStdString(help);
    out << qhelp << "*";

    help = c1.get_familly();
    qhelp = QString::fromStdString(help);
    out << qhelp << "*";

    help = c1.get_tell();
    qhelp = QString::fromStdString(help);
    out << qhelp << "*";

    data.close();
}

void infomation::on_pushButton_clicked()
{
    QMessageBox name, familly, tell;
    name.setText(ui->lineEdit->text());
    familly.setText(ui->lineEdit_2->text());
    tell.setText(ui->lineEdit_3->text());

    QMessageBox temp;

    if(name.text() == NULL)
    {
        temp.setText("enter a name");
        temp.exec();
    }
    else if (familly.text() == NULL)
    {
        temp.setText("enter a familly");
        temp.exec();
    }
    else if (tell.text() == NULL)
    {
        temp.setText("enter a phone number");
        temp.exec();
    }
    else
    {
        cache c1;
        c1.set_name(name.text());
        c1.set_familly(familly.text());
        c1.set_tell(tell.text());

        writee(c1);

        connect(ui->pushButton,SIGNAL(clicked()), this, SLOT(close()));
        //nmidonam chera bayad dobar ejra bshe ta close beshe

        Form *frm = new Form();
        frm->show();
    }
}

void infomation::on_pushButton_2_clicked()
{
    MainWindow *mw = new MainWindow();
    mw->show();
}
