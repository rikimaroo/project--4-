#include "shoe.h"

using namespace std;

void shoe::set_gender(QString ge)
{
    gender = ge.toStdString();
}
string shoe::get_gender() const
{
    return gender;
}

/*void shoe::set_color(QString co)
{
    color = co.toStdString();
}
string shoe::get_color() const
{
    return color;
}*/
