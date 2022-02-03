#ifndef SHOE_H
#define SHOE_H

#include"string"
#include"QString"
#include"waxe.h"

class shoe : public waxe
{
private:
    std::string gender;
    //std::string color;
public:
    void set_gender(QString);
    std::string get_gender() const;

    //void set_color(QString);
    //std::string get_color() const;
};

#endif // SHOE_H
