#include <iostream>
using namespace std;

int count;

void func1();
void func2();

void global_var()
{
    int i;      // Локальная переменная
    for (i=0; i<10; i++){
        count = i * 2;
        func1();
    }
}

void func1()
{
    cout << "count: " << count;     // Обращение к глобальной переменной
    func2();
    cout << '\n';               // Вывод символа новой строки
}

void func2()
{
    int count;      // Это локальная переменная
    for (count=0; count<3; count++)
        cout << '.';
}
