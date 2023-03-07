#include <iostream>
#include "demo_global_static_f2.h"
using namespace std;

int r_avg(int i);
void reset();

void demo_global_static_f1()
{
    int num;
    do {
        cout << "Введите числа (-1 для выхода, -2 для сброса): ";
        cin >> num;
        if (num == -2) {
            reset();
            continue;
        }
        if (num != -1)
            cout << "Среднее значение равно: " << r_avg(num);
        cout << '\n';
    } while (num != -1);

}
