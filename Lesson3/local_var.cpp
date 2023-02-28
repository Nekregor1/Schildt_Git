#include <iostream>
using namespace std;

void func();

void local_var()
{
    int x;      // Локальная переменная
    x = 10;
    func();
    cout << "\n";
    cout << x << "\n";          // Выводится число 10
}

void func()
{
    int x;      // Локальная переменная для функции func()
    x = -199;
    cout << x;  // Выводится число -199
}
