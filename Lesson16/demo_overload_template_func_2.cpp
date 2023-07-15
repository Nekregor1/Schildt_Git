// Объявление перегруженного шаблона функции
#include <iostream>
#include <QTextCodec>
using namespace std;

// Первая версия шаблона f()
template <class X> void f(X a)
{
    cout << QString::fromUtf8("Выполняется функция f(X a)\n").toLocal8Bit().data();
}

template  <class X, class Y> void f(X a, Y b)
{
    cout << QString::fromUtf8("Выполняется функция f(X a, Y b)\n").toLocal8Bit().data();
}

void demo_overload_template_func_2()
{
    f(10);
    f(10, 20);
}
