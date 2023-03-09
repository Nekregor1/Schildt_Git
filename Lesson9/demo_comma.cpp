#include <iostream>
#include <QTextCodec>
using namespace std;

void demo_comma()
{
    int i, j;
    j = 10;
    i = (j++, j+100, 999+j);
    cout << i << '\n';

}
