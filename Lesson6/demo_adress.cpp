#include <iostream>
using namespace std;

void demo_adress()
{
    int balance;
    int *balptr;
    int value;

    balance = 3200;
    balptr = &balance;
    value = *balptr;
    cout << "Исходное значение баланса: " << balance << '\n';
    cout << "Адрес, по которому находится значение баланса: " << balptr << '\n';
    cout << "Баланс, который находится по адресу выше " << value << '\n';
    balance++;
    cout << "Исходное значение баланса: " << balance << '\n';
    cout << "Адрес, по которому находится значение баланса: " << balptr << '\n';
    cout << "Баланс, который находится по адресу выше " << value << '\n';

}
