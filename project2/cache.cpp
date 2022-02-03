#include "cache.h"

#include<iostream>

using namespace std;

void cache::set_name(QString na)
{
    name = na.toStdString();
}
string cache::get_name()
{
    return name;
}

void cache::set_familly(QString fa)
{
    familly = fa.toStdString();
}
string cache::get_familly()
{
    return familly;
}

void cache::set_tell(QString te)
{
    tell = te.toStdString();
}
string cache::get_tell()
{
    return tell;
}

void cache::set_repair(QString re)
{
    repair = re.toStdString();
}

string cache::get_repair()
{
    return repair;
}

void cache::set_gender(QString ge)
{
    gender = ge.toStdString();
}

string cache::get_gender()
{
    return gender;
}

void cache::set_mark_waxe(QString mw)
{
    mark_waxe = mw.toStdString();
}

string cache::get_mark_waxe()
{
    return mark_waxe;
}

void cache::set_model_waxe(QString mo)
{
    model_waxe = mo.toStdString();
}
string cache::get_model_waxe()
{
    return model_waxe;
}

void cache::print()
{
    inf.shrink_to_fit();
    for (size_t i = 0; i < inf.size(); i++)
    {
        cout << "repair       --->  " << inf[i].get_repair() << endl
             << "gender       --->  " << inf[i].get_gender() << endl;
             //<< "mark_waxe    --->  " << inf[i].get_mark_waxe() << endl;
    }
    cout << "---------------" << endl;
}
