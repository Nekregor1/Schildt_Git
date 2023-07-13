// Вызов конструктора копии для инициализации объекта
#include <iostream>
#include <cstdlib>
#include <QTextCodec>
using namespace std;

class myclass {
    int *p;
public:
    myclass(int i);     // обычный конструктор
    myclass(const myclass &obj);        // конструктор копии
    ~myclass();
    int getval() {
        return *p;
    }
};

// Конструктор копии
myclass::myclass(const myclass &ob)
{
    p = new int;
    *p = *ob.p;     // значение копии
    cout << QString::fromUtf8("Выделение р-памяти конструктором копии. ").toLocal8Bit().data();
    cout << p << ' ' << *p << '\n';
}

// Обычный конструктор
myclass::myclass(int i)
{
    cout << QString::fromUtf8("Выделение р-памяти обычным конструктором. ").toLocal8Bit().data();
    p = new int;
    *p = i;
    cout << p << ' ' << *p << '\n';
}

// Деструктор
myclass::~myclass()
{
    cout << QString::fromUtf8("Освобождение р-памяти. ").toLocal8Bit().data();
    cout << p << ' ' << *p << '\n';
    delete p;
}

void demo_constr_of_copy_by_init_obj()
{
    myclass a(10);      // Вызывается обычный конструктор

    myclass b = a;      // Вызывается конструктор копии
}
