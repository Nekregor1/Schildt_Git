#include <iostream>
#include "demo_binary_NO.h"
using namespace std;

void disp_binary(unsigned u);

void demo_shift()
{
    int i = 1, t;
    for (t=0; t<8; t++){
        disp_binary(i);
        cout << '\n';
        i = i << 1;
    }

    cout << '\n';

    for (t=0; t<8; t++){
        i = i >> 1;
        disp_binary(i);
        cout << '\n';
    }

}
