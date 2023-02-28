#include <iostream>
#include <cstdlib>
using namespace std;

void magic_num()
{
    int magic;      // магическое число
    int guess;      // вариант пользователя
    int min, max;   // границы случайного числа
    min = 0;
    max = 3;

    magic = min + rand() % (max - min +1);     // получаем случайное число в заданных пределах
    cout << "Введите свой вариант магического числа: ";
    cin >> guess;

    if(guess == magic)
        cout << "**Правильно**\n";
    else
        cout << "**Неправильно. Загадано: " << magic << "**" << '\n';
}
