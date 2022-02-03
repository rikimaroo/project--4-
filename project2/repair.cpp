#include "repair.h"

#include"iostream"

using namespace std;

void repair::set_type_repair(QString fix)
{
    if (fix == "sew")
    {
        sew = true;
        glue = false;
    }
    else if (fix == "glue")
    {
        sew = false;
        glue = true;
    }
    else
    {
        throw invalid_argument("invalid type repair");
    }

}

bool repair::get_sew() const
{
    return sew;
}

bool repair::get_glue() const
{
    return glue;
}

void repair::print()
{
    cout << "type of repair  ---> ";
    if (glue)
    {
        cout << "glue" << endl;
    }
    else if (sew)
    {
        cout << "sew" << endl;
    }

}
