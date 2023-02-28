#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

bool password();

void demo_strcmp()
{
    if (password())
        cout << "Вход разрешен.\n";
    else
        cout << "В доступе отказано.\n";

}

bool password()
{
    char s[80];
    cout << "Введите пароль: ";
    gets(s);

    if (strcmp(s, "123")) {
        cout << "Пароль недействителен.\n";
        return false;
    }
    else
        return true;
}
