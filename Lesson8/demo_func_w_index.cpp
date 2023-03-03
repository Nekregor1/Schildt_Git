#include <iostream>
using namespace std;

void swap(int* x, int* y);

void demo_func_w_index()
{
    int i, j;
    i = 10;
    j = 20;

    cout << "Исходные значения переменных i и j: ";
    cout << i << ' ' << j << '\n';
    swap(&i, &j);
    cout << "Значения переменных i и j после обмена: ";
    cout << i << ' ' << j << '\n';

}

void swap(int* x, int* y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
