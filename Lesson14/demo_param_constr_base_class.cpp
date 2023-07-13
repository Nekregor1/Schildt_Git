#include <iostream>
#include <QTextCodec>
using namespace std;

class base9_1 {
protected:
    int m_i;
public:
    base9_1(int x) {
        m_i = x;
        cout << QString::fromUtf8("Создание base1-объекта.\n").toLocal8Bit().data();
    }
    ~base9_1() {
        cout << QString::fromUtf8("Разрушение base1-объекта.\n").toLocal8Bit().data();
    }
};

class base9_2 {
protected:
    int m_k;
public:
    base9_2(int x) {
        m_k = x;
        cout << QString::fromUtf8("Создание base2-объекта.\n").toLocal8Bit().data();
    }
    ~base9_2() {
        cout << QString::fromUtf8("Разрушение base2-объекта.\n").toLocal8Bit().data();
    }
};

class derived9: public base9_1, public base9_2 {
    int m_j;
public:
    // Класс derived использукт параметр х, а параметр у
    // передается конструктору класса base
    derived9(int x, int y, int z):base9_1(y), base9_2(z) {
        m_j = x;
        cout << QString::fromUtf8("Создание derived-объекта.\n").toLocal8Bit().data();
    }
    ~derived9() {
        cout << QString::fromUtf8("Разрушение derived-объекта.\n").toLocal8Bit().data();
    }
    void show() {cout << m_i << ' ' << m_k << ' ' << m_j << '\n';}
};

void demo_param_constr_base_class()
{
    derived9 ob(3, 4, 5);
    ob.show();
}
