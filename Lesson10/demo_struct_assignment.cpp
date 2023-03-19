#include <iostream>
#include <QTextCodec>
using namespace std;

struct stype {
    int a, b;
};

void demo_struct_assignment()
{
    stype svar1, svar2;
    svar1.a = svar1.b = 10;
    svar2.a = svar2.b = 20;

    cout << QString::fromUtf8("Структуры до присваивания.\n").toLocal8Bit().data();
    cout << "svar1: " << svar1.a << ' ' << svar1.b << '\n';
    cout << "svar2: " << svar2.a << ' ' << svar2.b << '\n';

    svar2 = svar1;      // присваивание структур

    cout << QString::fromUtf8("Структуры после присваивания.\n").toLocal8Bit().data();
    cout << "svar1: " << svar1.a << ' ' << svar1.b << '\n';
    cout << "svar2: " << svar2.a << ' ' << svar2.b << '\n';
}
