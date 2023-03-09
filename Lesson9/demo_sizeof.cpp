#include <iostream>
#include <QTextCodec>
using namespace std;

void demo_sizeof()
{
    char ch;
    int i;
    cout << QString::fromUtf8("Размер типа char: ").toLocal8Bit().data();
    cout << sizeof ch << '\n';
    cout << QString::fromUtf8("Размер типа int: ").toLocal8Bit().data();
    cout << sizeof i << '\n';
    cout << QString::fromUtf8("Размер типа float: ").toLocal8Bit().data();
    cout << sizeof (float) << '\n';
    cout << QString::fromUtf8("Размер типа double: ").toLocal8Bit().data();
    cout << sizeof (double) << '\n';

}
