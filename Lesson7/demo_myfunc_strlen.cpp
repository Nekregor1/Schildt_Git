#include <iostream>
using namespace std;

int mystrlen(char* str);

void demo_myfunc_strlen()
{
    cout << "Длина строки HELLOW YOU равна: ";          // Нужно обязательно на англ. иначе не корректно
    cout << mystrlen("Hello you") << '\n';

}

int mystrlen(char* str)
{
    int i;
    for (i=0; str[i]; i++);
//        cout << '+' << '\n';     // Находим конец строки
    return i;
}
