#include <iostream>
using namespace std;

void f(int& i);

void demo_reference_parameter()
{
    int val = 1;
    cout << "Старое значение переменной val: " << val << '\n';
    f(val);     // Передаем адрес переменной val функции f()
    cout << "Новое значение переменной val: " << val << '\n';

}

void f(int& i)
{
    i = 10;     // Модификация аргумента, заданного при вызове
}
