// Использование конструктора копии для определения параметра
#include <iostream>
#include <cstdlib>
#include <QTextCodec>
using namespace std;

class class_constr {
    int *p;
public:
    class_constr(int i);        // обычный конструктор
    class_constr(const class_constr &obj);   // конструктор копии
    ~class_constr();            // деструктор
    int getval(){
        return *p;
    }
};

// Конструктор копии
class_constr::class_constr(const class_constr &obj)
{
    p = new int;
    *p = *obj.p;        // значение копии
    cout << QString::fromUtf8("Вызван конструктор копии. ").toLocal8Bit().data();
    cout << p <<  ' ' << *p << '\n';
}

// Обычный конструктор
class_constr::class_constr(int i)
{
    cout << QString::fromUtf8("Вызван обычный конструктор.\n").toLocal8Bit().data();
    cout << QString::fromUtf8("Выделение памяти, адресуемой указателем р. ").toLocal8Bit().data();
    p = new int;
    *p = i;
    cout << p << ' ' << *p << '\n';
}

class_constr::~class_constr()
{
    cout << QString::fromUtf8("Освобождение памяти, адресуемой указателем р. ").toLocal8Bit().data();
    cout << p <<  ' ' << *p << '\n';
    delete p;
}

// Эта функция принимает один объект-параметр
void display_constr(class_constr ob)
{
    cout << ob.getval() << '\n';
}

void demo_constr_of_copy_and_param_func()
{
    class_constr a(10);

    display_constr(a);
}
