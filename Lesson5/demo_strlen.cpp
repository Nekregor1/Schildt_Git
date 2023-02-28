#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void demo_strlen()
{
    char str[80];

    cout << "Введите строку: ";
    gets(str);
    cout << "Длина строки равна: " << strlen(str) << '\n';

}
