#include <iostream>
using namespace std;

double &f();
double val = 100.0;

void demo_return_reference()
{
    double newval;
    cout << f() << '\n';    // Отображаем значение val

    newval = f();       // Присваиваем значение val переменной newval
    cout << newval << '\n';     //Отображаем значение newval
    f() = 99.1;     // Изменяем значение val
    cout << f() << '\n';    // Отображаем новое значение val
}

double &f()
{
    return val;     // Возвращает ссылку на val
}
