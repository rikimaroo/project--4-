#include "waxe.h"
#include"iostream"
#include "QMessageBox"
using namespace std;

void waxe::set_model(QString mo)
{
    model = mo.toStdString();
}
string waxe::get_model() const
{
    return model;
}

void waxe::set_mark(QString ma)
{
    mark = ma.toStdString();
}
string waxe::get_mark() const
{
    return mark;
}

void waxe::waxe::print()
{
    cout << "model is --->" << model << endl
         << "mark is  --->" << mark << endl;
}
