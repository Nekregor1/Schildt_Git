#include <iostream>
using namespace std;

void display(int num[10]);

void demo_func_w_array()
{
    int t[10], i;

    for(i=0; i<10; i++)
        t[i]=i;
    display(t);     // Передаем функции массив t

}

void display(int num[10])
{
    int i;
    for(i=0; i<10; i++)
        cout << num[i] << ' ';
    cout << '\n';
}
