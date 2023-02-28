#include <iostream>
using namespace std;

void demo_break_var2()
{
    int t, count;

    for(t=0; t<20; t++){
        count = 0;
        for(;;){
            cout << count << ' ';
            if(count==t) break;
            count++;
        }
        cout << '\n';
    }
    cout << '\n';
}
