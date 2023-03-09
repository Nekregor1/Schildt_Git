#include <iostream>
using namespace std;

void demo_init_din_mem()
{
    int *p;

    p = new int (99);   // Инициализируем память числом 99
    cout << *p << '\n';         // На экран выводится число 99

    delete p;

}
