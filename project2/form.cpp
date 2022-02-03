#include "form.h"
#include "ui_form.h"
#include"cache.h"
#include"QMessageBox"
#include"QFile"
#include"QTextStream"
#include"QDebug"
#include"string"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    cache c1;
}

Form::~Form()
{
    delete ui;
}

int readf()
{
    QFile count("count.txt");
    if (!count.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "cant open file count for read\n";
        return 0;
    }
    QTextStream in(&count);

    int co;
    in >> co;
    if (co == NULL)
    {
        co = 0;
    }
    count.close();

    return co;
}

void write()
{
    //QString co = "2";// = readf();
    int ico = readf();
    ico++;
    //co = static_cast<QString>(ico);

    QFile out("count.txt");
    if (!out.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "cant open file count for read\n";
        return;
    }

    QTextStream ou(&out);
    ou << ico;

    out.flush();
    out.close();
}

void write(cache c1)
{
    QFile data("saves.txt");

    if (!data.open(QFile::Append | QFile::Text))
    {
        qDebug() << "cant open file for write";
        return;
    }
    QTextStream out(&data);


    std::string help = c1.get_gender();
    QString qhelp = QString::fromStdString(help);
    out << qhelp << "*";

    help = c1.get_model();
    qhelp = QString::fromStdString(help);
    out << qhelp << "*";

    help = c1.get_mark();
    qhelp = QString::fromStdString(help);
    out << qhelp << "*";

    help = c1.get_model_waxe();
    qhelp = QString::fromStdString(help);
    out << qhelp << "*";

    help = c1.get_mark_waxe();
    qhelp = QString::fromStdString(help);
    out << qhelp << "*";

    help = c1.get_repair();
    qhelp = QString::fromStdString(help);
    out << qhelp << "\n";

    data.close();
}

void Form::on_pushButton_clicked()
{
    cache c1;
    QString type;
    type = ui->comboBox->currentText();//gender
    c1.set_gender(type);

    type = ui->comboBox_2->currentText();//shoe model
    c1.set_model(type);

    type = ui->comboBox_3->currentText();//shoe brand
    c1.set_mark(type);

    type = ui->comboBox_4->currentText();//waxe model
    c1.set_model_waxe(type);

    type = ui->comboBox_5->currentText();//waxe brand
    c1.set_mark_waxe(type);

    type = ui->comboBox_6->currentText();//repair
    c1.set_repair(type);

    write(c1);

    write();

    QMessageBox text;
    text.setText("Your information was recorded");
    text.exec();


}
