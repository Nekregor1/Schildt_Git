#include<iostream>
#include<cstdlib>
using namespace std;

int factorial_ex(int n)
{
    if (n > 1)
        return n * factorial_ex(n - 1);
    return 1;
    cout << n;
}
