#include <iostream>
using namespace std;

void demo_inner_var()
{
    int i, j;

    i = 10;
    j = 100;

    if (j > 0) {
        int i;  // Эта переменная i отделена от внешней переменной i

        i = j/2;
        cout << "Внутреняя переменная i: " << i << '\n';
    }
    cout << "Внешняя переменная i: " << i << '\n';
}
