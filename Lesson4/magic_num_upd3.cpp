#include <iostream>
#include <cstdlib>
using namespace std;

void play(int m);

void magic_num_upd3()
{
    int option;
    int magic;
    int min = 0;
    int max = 100;
    magic = min + rand() % (max-min+1);

    do {
        cout << "1. Получить новое магическое число\n";
        cout << "2. Сыграть\n";
        cout << "3. Выйти из программы\n";
        do {
            cout << "Введите свой вариант: ";
            cin >> option;
        } while(option<1 || option>3);
        switch(option){
            case 1:
                magic = min + rand() % (max-min+1);
                break;
            case 2:
                play(magic);
                break;
            case 3:
                cout << "До свидания!\n";
                break;
        }
    } while (option !=3);
}

void play(int m)
{
    int t, x;
    for (t=0; t<100; t++){
        cout << "Угадайте магическое число: ";
        cin >> x;
        if(x==m){
            cout << "**Правильно!**\n";
            return;
        }
        else
            if (x<m) cout << "Маловато!\n";
            else cout << "Многовато!\n";
    }
    cout << "Вы использовали все шансы угадать число. "
         << "Попытайтесь снова.\n";
}
