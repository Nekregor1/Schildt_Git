#include <iostream>
using namespace std;

void demo_if_else_if()
{
    int x;

    for(x=0; x<8; x++){
        if(x==1)
            cout << "Х равен единице.\n";
        else if(x==2)
            cout << "Х равен двум.\n";
        else if(x==3)
            cout << "Х равен трем.\n";
        else if(x==4)
            cout << "Х равен четырем.\n";
        else
            cout << "Х не попадает в диапазон от 1 до 4.\n";
    }
}
