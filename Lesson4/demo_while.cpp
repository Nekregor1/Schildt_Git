#include <iostream>
//#include <QTextCodec>
using namespace std;

void demo_while()
{
    unsigned char ch;
    ch = 32;
    int num = 32;
    while(ch){
        cout << ch <<"    " << num <<"\n";
        ch++;
        num++;
    }
    cout << '\n';
}
