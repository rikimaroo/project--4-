#ifndef CACHE_H
#define CACHE_H
#include"string"
#include"QString"
#include"shoe.h"
#include"vector"

class cache : public shoe
{
private:
    std::string name, familly;
    std::string tell;

    std::string repair;
    std::string gender;
    std::string mark_waxe, model_waxe;
public:
    void set_name(QString);
    std::string get_name();

    void set_familly(QString);
    std::string get_familly();

    void set_tell(QString);
    std::string get_tell();

    void set_repair(QString);
    std::string get_repair();

    void set_gender(QString);
    std::string get_gender();

    void set_mark_waxe(QString);
    std::string get_mark_waxe();

    void set_model_waxe(QString);
    std::string get_model_waxe();

    void print();

    std::vector<cache> inf;
};

#endif // CACHE_H
