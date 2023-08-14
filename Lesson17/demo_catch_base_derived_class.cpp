// Перехват исключений базовых и производных типов
#include <iostream>
#include <QTextCodec>
using namespace std;

class B {
};

class D: public B {
};

void demo_catch_base_derived_class()
{
    D derived;

    try {
        throw derived;
    }
    catch (D b) {
        cout << QString::fromUtf8("Перехват исключения производного класса.\n").toLocal8Bit().data();
    }
    catch (B b) {
        cout << QString::fromUtf8("Перехват исключения базового класса.\n").toLocal8Bit().data();
    }

}
