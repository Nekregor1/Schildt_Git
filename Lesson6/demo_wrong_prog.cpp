#include <iostream>
using namespace std;

void demo_wrong_prog()
{
    double x, y;
    int *p;

    x = 123.23;
    p = (int *) &x; // Используем операцию приведения типов
                    // для присваивания double-указателя
                    // int-указателю.
    y = *p;         // Должно было быть значение 123.23 если были
                    // корректные типы
    cout << "x: " << x << '\n';
    cout << "p: " << p << '\n';
    cout << "y: " << y << '\n';
}
