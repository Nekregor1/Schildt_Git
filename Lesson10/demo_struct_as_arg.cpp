#include <iostream>
#include <QTextCodec>
using namespace std;

// Определим тип структуры
struct sampl {
    int a;
    char ch;
};


void f1(sampl parm);

void demo_struct_as_arg()
{
    struct sampl arg;
    arg.a = 1000;
    arg.ch = 'X';

    f1(arg);
}

void f1(sampl parm)
{
    cout << parm.a << " " << parm.ch << '\n';
}
