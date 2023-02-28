#include <iostream>
using namespace std;

void demo_do_while()
{
    int num;

    do {
        cout << "Введите число (100 - для выхода): ";
        cin >> num;
    } while(num !=100);
}
