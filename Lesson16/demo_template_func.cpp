// Пример шаблонной функции
#include <iostream>
#include <QTextCodec>
#include <tuple>
using namespace std;

// Определение шалонной функции
template <class X> void swapargs(X &a, X &b)
{
    X temp;

    temp = a;
    a = b;
    b = temp;
}

void demo_template_func()
{
    int i=10, j=20;
    double x = 10.1, y=23.3;
    char a='x', b='y';
    cout << QString::fromUtf8("Исходные значение i, j: ").toLocal8Bit().data();
    cout << i << " " << j << "\n";
    cout << QString::fromUtf8("Исходные значение x, y: ").toLocal8Bit().data();
    cout << x << " " << y << "\n";
    cout << QString::fromUtf8("Исходные значение a, b: ").toLocal8Bit().data();
    cout << a << " " << b << "\n";

    swapargs(i, j);     // перестановка целых чисел
    swapargs(x, y);     // перестановка значений с плав.точк
    swapargs(a, b);     // перестановка символов

    cout << QString::fromUtf8("После перестановки i, j: ").toLocal8Bit().data();
    cout << i << " " << j << "\n";
    cout << QString::fromUtf8("После перестановки x, y: ").toLocal8Bit().data();
    cout << x << " " << y << "\n";
    cout << QString::fromUtf8("После перестановки a, b: ").toLocal8Bit().data();
    cout << a << " " << b << "\n";


}
