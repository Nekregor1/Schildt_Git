#include <iostream>
using namespace std;

void swap_ref(int& x, int& y);

void swap_w_reference_param()
{
    int i, j;
    i = 10;
    j = 20;
    cout << "Исходное значение переменных i и j: ";
    cout << i << ' ' << j << '\n';
    swap_ref(i, j);
    cout << "Новое значение переменных i и j после обмена: ";
    cout << i << ' ' << j << '\n';

}

void swap_ref(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
