// Демонстрация наследования
#include <iostream>
#include <QTextCodec>
using namespace std;

// Определяем базовый класс транспортных средств
class road_vehicle {
    int m_wheels;
    int m_passengers;
public:
    void set_wheels(int num) {m_wheels = num;}
    int get_wheels() {return m_wheels;}
    int get_pass() {return m_passengers;}
    void set_pass(int num) {m_passengers = num;}
};

// Определяем класс грузовика
class truck: public road_vehicle {
    int m_cargo;
public:
    void set_cargo(int num) {m_cargo = num;}
    int get_cargo() {return m_cargo;}
    void show();
};

enum type {car, van, wagon};

// Определяем класс автомобилей
class automobile: public road_vehicle {
    enum type m_car_type;
public:
    void set_type(type t) {m_car_type = t;}
    enum type get_type() {return m_car_type;}
    void show();
};


void truck::show()
{
    cout << QString::fromUtf8("колес: ").toLocal8Bit().data();
    cout << get_wheels() << '\n';
    cout << QString::fromUtf8("пассажиров: ").toLocal8Bit().data();
    cout << get_pass() << '\n';
    cout << QString::fromUtf8("грузоподъемность в куб.м: ").toLocal8Bit().data();
    cout << get_cargo() << '\n';
}

void automobile::show() {
    cout << QString::fromUtf8("колес: ").toLocal8Bit().data();
    cout << get_wheels() << '\n';
    cout << QString::fromUtf8("пассажиров: ").toLocal8Bit().data();
    cout << get_pass() << '\n';
    cout << QString::fromUtf8("тип: ").toLocal8Bit().data();
    switch (get_type()) {
        case van: cout << QString::fromUtf8("автофургон\n").toLocal8Bit().data();
            break;
        case car: cout << QString::fromUtf8("легковой\n").toLocal8Bit().data();
            break;
        case wagon: cout << QString::fromUtf8("фура\n").toLocal8Bit().data();
    }
}


void demo_inherit_1()
{
    truck t1, t2;
    automobile c;

    t1.set_wheels(18);
    t1.set_pass(2);
    t1.set_cargo(100);

    t2.set_wheels(6);
    t2.set_pass(3);
    t2.set_cargo(30);

    t1.show();
    cout << '\n';
    t2.show();
    cout << '\n';

    c.set_wheels(4);
    c.set_pass(6);
    c.set_type(van);

    c.show();
    cout << '\n';

}
