#include <iostream>
using namespace std;

void demo_break(){
    int t;
    for(t=0; t<100; t++){
        if(t==10) break;
        cout << t << ' ';
    }
    cout << '\n';
}
