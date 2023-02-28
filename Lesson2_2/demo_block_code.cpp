#include <iostream>
using namespace std;

void demo_block_code()
{
    int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число ";
    cin >> b;

    if (a < b) {
        cout << "Первое число меньше второго.\n";
        cout << "Их разность равна: " << b-a << "\n";
    }
}
