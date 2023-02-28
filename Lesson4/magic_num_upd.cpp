#include <iostream>
#include <cstdlib>
using namespace std;

void magic_num_upd()
{
    int magic;
    int guess;
//    int min, max;
    int min = 0;
    int max = 3;
    magic = min + rand() % (max - min +1);

    cout << "Введите свой вариант магического числа";
    cin >> guess;

    if(guess == magic){
        cout << "**Правильно**\n";
        cout << magic << " и есть то самое магическое число.\n";
    }
    else {
        cout << "...Очень жаль, но вы ошиблись.";
        if(guess>magic)
            cout << "Ваш вариант больше магического числа.\n";
        else
            cout << "Ваш вариант меньше магического числа.\n";
    }
}
