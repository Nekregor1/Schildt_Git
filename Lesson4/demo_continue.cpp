#include <iostream>
using namespace std;

void demo_continue()
{
    int x;
    for(x=0; x<=100; x++){
        if(x%2) continue;
        cout << x << ' ';
    }
    cout << '\n';
}
