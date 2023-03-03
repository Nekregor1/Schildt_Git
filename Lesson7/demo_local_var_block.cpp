#include <iostream>
#include <cstring>
using namespace std;

void demo_local_var_block()
{
    int choice;
    cout << "(1) сложить числа или ";
    cout << "(2) конкатенировать строки? ";

    cin >> choice;
    if (choice == 1){
        int a, b;   // Активизируются две int-переменные
        cout << "Введите два числа: ";
        cin >> a >> b;
        cout << "Сумма равна " << a+b << '\n';
    }
    else {
        char s1[80], s2[80];    // Активизируются две строки
        cout << "Введите две строки: ";
        cin >> s1;
        cin >> s2;
        strcat(s1, s2);
        cout << "Конкатенация равна " << s1 << '\n';
    }
}
