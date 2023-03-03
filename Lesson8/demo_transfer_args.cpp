#include <iostream>
using namespace std;

int sqr_it(int  x);

void demo_transfer_args()
{
    int t=10;
    cout << sqr_it(t) << ' ' << t << '\n';
}

int sqr_it(int x)
{
    x = x * x;
    return x;
}
