#include <iostream>
#include <typeinfo>
using namespace std;

void test_1()
{
    int num[10];
    int i;

    for (i=0; i<10; i++){
        *(num +i) = i;
        cout << *(num+i) << ' ' << typeid (*(num+i)).name() << ' ';
        cout << num[i] << ' ' << typeid (*(num+i)).name() << '\n';
    }
    *(num) = 100;
    cout << *(num) << ' ' << typeid (*num).name() << '\n';
    cout << &(num) << ' ' << typeid (&num).name() << '\n';
}
