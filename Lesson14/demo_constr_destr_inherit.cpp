#include <iostream>
#include <QTextCodec>
using namespace std;

class base8_1 {
public:
    base8_1() {
        cout << QString::fromUtf8("Создание base8_1-объекта.\n").toLocal8Bit().data();
    }
    ~base8_1() {
        cout << QString::fromUtf8("Разрушение base8_1-объекта.\n").toLocal8Bit().data();
    }
};

class base8_2 {
public:
    base8_2() {
        cout << QString::fromUtf8("Создание base8_2-объекта.\n").toLocal8Bit().data();
    }
    ~base8_2() {
        cout << QString::fromUtf8("Разрушение base8_2-объекта.\n").toLocal8Bit().data();
    }
};

class derived8_1: public base8_1 {
public:
    derived8_1() {
        cout << QString::fromUtf8("Создание derived8_1-объекта.\n").toLocal8Bit().data();
    }
    ~derived8_1() {
        cout << QString::fromUtf8("Разрушение derived8_1-объекта.\n").toLocal8Bit().data();
    }
};

class derived8_2: public derived8_1 {
public:
    derived8_2() {
        cout << QString::fromUtf8("Создание derived8_2-объекта.\n").toLocal8Bit().data();
    }
    ~derived8_2() {
        cout << QString::fromUtf8("Разрушение derived8_2-объекта.\n").toLocal8Bit().data();
    }
};

class derived8_3: public base8_1, public base8_2 {
public:
    derived8_3() {
        cout << QString::fromUtf8("Создание derived8_3-объекта.\n").toLocal8Bit().data();
    }
    ~derived8_3() {
        cout << QString::fromUtf8("Разрушение derived8_3-объекта.\n").toLocal8Bit().data();
    }
};

void demo_constr_destr_inherit()
{
    // Никаких действий кроме создания и разрушения объекта
    derived8_1 ob1;
    cout << '\n';
    derived8_2 ob2;
    cout << '\n';
    derived8_3 ob3;
    cout << '\n';
}
