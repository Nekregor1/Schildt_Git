#include <iostream>
#include <typeinfo>
using namespace std;

void demo_input_num()
{
    int num[10];
    int *start, *end;

    start = num;
    end = &num[9];

    while (start <= end){
        cout << "Введите число: ";
        cin >> *start;
        start++;
    }

    start = num;
    while (start <= end){
        cout << *start << ' ' << typeid (*start).name() << ' ';
        cout << start << ' ' << typeid (start).name() << '\n';
        start++;
    }
}
