#include <iostream>
#include <typeinfo>
using namespace std;

void cube(int *n, int num);

void demo_func_w_array2()
{
    int i,nums[10];

    for (i=0; i<10; i++)
        nums[i] = i+1;
    cout << "Исходное содержимое массива: ";
    for (i=0; i<10; i++)
        cout << nums[i] << ' ';
    cout << '\n';

    cube(&nums[0], 10);

    cout << "Измененное содержимое массива: ";
    for (i=0; i<10; i++)
        cout << nums[i] << ' ';
    cout << '\n';
}

void cube(int *n, int num)
{
    while (num){
        cout << *n << ' ' << typeid (*n).name() << ' ';
        cout <<  n << ' ' << typeid ( n).name() << '\n';
        *n = *n * *n * *n;
        num--;
        n++;
    }
}
