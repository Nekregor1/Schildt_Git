/* Вычисляем текущее среднее значение от чисел, вводимых
 * пользователем. */

#include <iostream>
using namespace std;

int r_avg1(int i);

void demo_static(){
    int num;

    do {
        cout << "Введите числа (-1 означает выход): ";
        cin >> num;
        if (num != -1)
            cout << "Текущее среднее значение равно: " << r_avg1(num);
        cout << '\n';
    } while (num > -1);

}

// Вычисляем текущее среднее
int r_avg1(int i)
{
    static int sum = 0, count = 0;
    sum = sum + i;
    count++;
    return sum / count;
}
