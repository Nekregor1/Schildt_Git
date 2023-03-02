#include <iostream>
using namespace std;

void func(int *j);

void demo_func_with_index()
{
    int i = 10;
    int *p;

    p = &i;     // Адрес переменной i
    cout << i << '\n';
    func(p);

    cout << i << '\n';

}

void func(int *j)
{
    *j = 100;       // Переменной, адресуемой указателем j
                    // присваивается число 100
}
