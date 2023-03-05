#include <iostream>
using namespace std;

void demo_independ_reference()
{
    int j,k;
    int& i = j;     // независимая ссылка

    j = 10;

    cout << j << " " << i << '\n';

    k = 121;
    i = k;          // Копирует в переменную j значение
                    // переменной k, а не адрес переменной k
    cout << j << '\n';      // Выводится 121
}
