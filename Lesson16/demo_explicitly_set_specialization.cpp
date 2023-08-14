// Демонстрация специализации класса
#include <iostream>
#include <QTextCodec>
using namespace std;

template <class Tclass> class myclass {
    Tclass m_x;
public:
    myclass(Tclass a) {
        cout << QString::fromUtf8("В теле обобщенного класса myclass.\n").toLocal8Bit().data();
        m_x = a;
    }
    Tclass getx() {return m_x;}
};

// Явная специализация для типа int
template <> class myclass<int> {
    int m_x;
public:
    myclass(int a) {
        cout << QString::fromUtf8("В теле специализации myclass<int>.\n").toLocal8Bit().data();
        m_x = a;
    }
    int getx() {return m_x;}
};


void demo_explicitly_set_specialization()
{
    myclass<double> d(10.1);
    cout << QString::fromUtf8("double: ").toLocal8Bit().data();
    cout << d.getx() << "\n";

    myclass<int> i(5);
    cout << QString::fromUtf8("int: ").toLocal8Bit().data();
    cout << i.getx() << "\n";
}
