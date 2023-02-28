#include<iostream>
using namespace std;
void demo_if()
{
    int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    if (a < b)
        cout << "Первое число меньше второго\n";
    else if (a > b)
        cout << "Второе число меньше первого\n";
    else
        cout << "Первое и второе число равны\n";
}
