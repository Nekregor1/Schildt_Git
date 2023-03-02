#include <iostream>
#include <cstdlib>
using namespace std;

void drill();

int count, num_right;

void demo_global_var()
{
    cout << "Сколько практических упражнений: ";
    cin >> count;

    num_right = 0;
    do {
        drill();
        count--;
    } while (count);

    cout << "Вы дали " << num_right << " правильных ответов.\n";

}

void drill()
{
    int count;      // Эта переменная локальная, и не связана с одноименной глобальной
    int a, b, ans;

    // Генерируем два числа между 0 и 99
    a = rand() % 100;
    b = rand() % 100;

    // Пользователь получает три попытки дать правильный ответ
    for(count=0; count<3; count++) {
        cout << "Сколько будет " << a << " + " << b << "? ";
        cin >> ans;
        if (ans == a+b) {
            cout << "Правильно\n";
            num_right ++;
            return;
        }
    }
    cout << "Вы использовали все свои попытки.\n";
    cout << "Ответ равен " << a+b << '\n';
}
