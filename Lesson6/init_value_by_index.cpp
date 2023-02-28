#include <iostream>
using namespace std;

void init_value_by_index()
{
    int *p, num;

    p = &num;
    *p = 100;
    cout << "num: " << num << " p: " << p << '\n';
    (*p)++;
    cout << "num: " << num << " p: " << p << '\n';
    (*p)--;
    cout << "num: " << num << " p: " << p << '\n';
}
