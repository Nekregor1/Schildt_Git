#include <iostream>
#include <cstdlib>
#include <typeinfo>
using namespace std;

void demo_atoi()
{
    int i;
    long j;
    double k;

    i = atoi("100");
    j = atol("100000");
    k = atof("-0.123");
    cout << i << ' ' << typeid (i).name() << '\n';
    cout << j << ' ' << typeid (j).name() << '\n';
    cout << k << ' ' << typeid (k).name() << '\n';

}
