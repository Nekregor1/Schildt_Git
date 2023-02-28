#include <iostream>
using namespace std;

void demo_array()
{
    int sample[10];
    int t;

    for (t=0; t<10; ++t)
        sample[t] = t;

    for (t=0; t<10; ++t)
        cout << sample[t] << ' ';
    cout << '\n';
}
