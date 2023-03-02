#include <iostream>
using namespace std;

void f1();

void demo_local_var()
{
    char str[] = "Это - массив str в функции main(demo_local_var).";

    cout << str << '\n';
    f1();
    cout << str << '\n';

}

void f1()
{
    char str[80];
    cout << "Введите какую-нибудь строку: ";
    cin >> str;
    cout << str << '\n';
}
