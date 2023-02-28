#include <iostream>
using namespace std;

void simple_num()
{
    int i, j;
    for(i=2; i<=1000; i++){
        for(j=2; j<=(i/j); j++)
            if (!(i%j)) break;
        if(j > (i/j)) cout << i << " - простое число \n";
    }
    cout << '\n';
}
