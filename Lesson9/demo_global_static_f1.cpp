#include <iostream>
#include <QTextCodec>
#include "demo_global_static_f2.h"
using namespace std;

int r_avg(int i);
void reset();

void demo_global_static_f1()
{
    int num;
    do {
        cout << QString::fromUtf8("Введите числа (-1 для выхода, -2 для сброса): ").toLocal8Bit().data();
        cin >> num;
        if (num == -2) {
            reset();
            continue;
        }
        if (num != -1)
            cout << QString::fromUtf8("Среднее значение равно: ").toLocal8Bit().data() << r_avg(num);
        cout << '\n';
    } while (num != -1);

}
