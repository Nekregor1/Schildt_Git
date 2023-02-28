#include <iostream>
#include <cstdio>
using namespace std;

void demo_cin_str()
{
    char str[80];

    cout << "Введите строку: ";
    cin >> str; // Считываем строку с клавиатуры только до первого пробела, т.е. одно слово
//    gets(str);  // Считываем строку с клавиатуры
//    cout << "Вот ваша строка: " << str << '\n';

}
