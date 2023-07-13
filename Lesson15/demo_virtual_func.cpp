// Пример использования виртуальных функций
#include <iostream>
#include <QTextCodec>
using namespace std;

class base {
public:
    // Объявление виртуальной функции
    virtual void who() {
        cout << QString::fromUtf8("Базовый класс.\n").toLocal8Bit().data();
    }
};

class first_d: public base {
public:
    // Переопределение функции who() для класса first_d
    void who() {
        cout << QString::fromUtf8("Первый производный класс.\n").toLocal8Bit().data();
    }
};

class second_d: public base {
public:
    // Переопределение функции who() для класса second_d
    void who() {
        cout << QString::fromUtf8("Второй производный класс.\n").toLocal8Bit().data();
    }
};

void demo_virtual_func()
{
    base base_obj;
    base *p;
    first_d first_obj;
    second_d second_obj;

    p = &base_obj;
    p->who();       // Доступ к функции who() класса base

    p = &first_obj;
    p->who();       // Доступ к функции who() класса first_d

    p = &second_obj;
    p->who();       // Доступ к функции who() класса second_d

}
