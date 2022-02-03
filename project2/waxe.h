#ifndef WAXE_H
#define WAXE_H

#include"string"
#include"QString"

class waxe
{
private:
    std::string model;
    std::string mark;
public:
    void set_model(QString);
    std::string get_model() const;

    virtual void set_mark(QString);
    std::string get_mark() const;

    virtual void print();
};

#endif // WAXE_H
