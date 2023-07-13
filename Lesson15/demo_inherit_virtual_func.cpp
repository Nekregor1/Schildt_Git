#include <iostream>
#include <QTextCodec>
using namespace std;

class base2 {
public:
    virtual void who() {
        cout << QString::fromUtf8("Базовый класс.\n").toLocal8Bit().data();
    }
};

class first_d2: public base2 {
public:
    void who() {
        cout << QString::fromUtf8("Первый производный класс.\n").toLocal8Bit().data();
    }
};

class second_d2: public base2 {
    // Функция who() вообще не определена
};

void demo_inherit_virtual_func()
{
    base2 base_obj;
    base2 *p;
    first_d2 first_obj;
    second_d2 second_obj;

    p = &base_obj;
    p->who();

    p = &first_obj;
    p->who();

    p = &second_obj;
    p->who();
}
