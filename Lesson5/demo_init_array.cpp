#include <iostream>
using namespace std;

int sqrs[10][2] = {
    {1, 1},
    {2, 4},
    {3, 9},
    {4, 16},
    {5, 25},
    {6, 36},
    {7, 49},
    {8, 64},
    {9, 81},
    {10, 100}
};

void demo_init_array()
{
    int i, j;
    cout << "Введите число от 1 до 10: ";
    cin >> i;

    // Поиск значения i
    for (j=0; j<10; j++)
        if (sqrs[j][0]==i)
            break;
    cout << "Квадрат числа " << i << " равен ";
    cout << sqrs[j][1] << '\n';
}
