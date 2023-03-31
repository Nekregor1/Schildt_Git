#include <iostream>
#include <QTextCodec>
using namespace std;

class myclass {
    int a, b;
public:
    void setab(int i, int j) {
        a = i;
        b = j;
    };
    void showab();
};

void myclass::showab()
{
    cout << QString::fromUtf8("a равно ").toLocal8Bit().data();
    cout << a << '\n';
    cout << QString::fromUtf8("b равно ").toLocal8Bit().data();
    cout << b << '\n';
}

void demo_assignment_obj()
{
    myclass ob1, ob2;

    ob1.setab(10, 20);
    ob2.setab(0, 0);
    cout << QString::fromUtf8("Объект ob1 до присваивания: \n").toLocal8Bit().data();
    ob1.showab();
    cout << QString::fromUtf8("Объект ob2 до присваивания: \n").toLocal8Bit().data();
    ob2.showab();
    cout << '\n';
    ob2 = ob1;          // Присваиваем объект ob1 объекту ob2

    cout << QString::fromUtf8("Объект ob1 после присваивания: \n").toLocal8Bit().data();
    ob1.showab();
    cout << QString::fromUtf8("Объект ob2 до присваивания: \n").toLocal8Bit().data();
    ob2.showab();

}
