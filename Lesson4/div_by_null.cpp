#include <iostream>
using namespace std;

void div_by_null()
{
    int a, b;

    cout << "Введите два числа: ";
    cin >> a >> b;
    if(b)
        cout << a/b << '\n';
    else
        cout << "На нуль делить нельзя.\n";
}
