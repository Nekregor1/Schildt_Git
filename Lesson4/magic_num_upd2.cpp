#include <iostream>
#include <cstdlib>
using namespace std;

void magic_num_upd2(){
    int magic, guess;
    int min, max;
    min = 0;
    max = 100;
    magic = min + rand() % (max-min+1);
    do {
        cout << "Введите свой вариант магического числа: ";
        cin >> guess;
        if(guess == magic){
            cout << "** Правильно **\n";
            cout << magic << " и есть то самое магическое число!\n";
        }
        else {
            cout << "... Очень жаль, но вы ошиблись.\n";
            if (guess < magic)
                cout << "Ваш вариант меньше магического числа.\n";
            else
                cout << "Ваш вариант больше магического числа.\n";
        }

    }while(guess != magic);
}
