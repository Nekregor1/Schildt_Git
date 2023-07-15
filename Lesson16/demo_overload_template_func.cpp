// Перегрузка шаблонной функции
#include <iostream>
#include <QTextCodec>
using namespace std;

template <class X>
void swaparg(X &a, X &b)
{
    X temp;
    temp = a;
    a = b;
    b = temp;
    cout << QString::fromUtf8("Выполняется шаблонная функция swaparg.\n").toLocal8Bit().data();
}

// Эта функция переопределяет обобщенную версию функции
// swaparg() для int-параметров
void swaparg(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
    cout << QString::fromUtf8("Это int-специализация функции swaparg().\n").toLocal8Bit().data();
}

void demo_overload_template_func()
{
    int i=10, j=20;
    double x=10.1, y=23.3;
    char a='a', b='b';

    cout << QString::fromUtf8("Исходные значение i, j: ").toLocal8Bit().data();
    cout << i << " " << j << "\n";
    cout << QString::fromUtf8("Исходные значение x, y: ").toLocal8Bit().data();
    cout << x << " " << y << "\n";
    cout << QString::fromUtf8("Исходные значение a, b: ").toLocal8Bit().data();
    cout << a << " " << b << "\n";

    swaparg(i, j);     // перестановка целых чисел
    swaparg(x, y);     // перестановка значений с плав.точк
    swaparg(a, b);     // перестановка символов

    cout << QString::fromUtf8("После перестановки i, j: ").toLocal8Bit().data();
    cout << i << " " << j << "\n";
    cout << QString::fromUtf8("После перестановки x, y: ").toLocal8Bit().data();
    cout << x << " " << y << "\n";
    cout << QString::fromUtf8("После перестановки a, b: ").toLocal8Bit().data();
    cout << a << " " << b << "\n";
}
