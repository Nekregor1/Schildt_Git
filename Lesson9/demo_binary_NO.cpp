#include <iostream>
#include <QTextCodec>
using namespace std;

void disp_binary(unsigned u);

void demo_binary_NO()
{
    unsigned u;
    cout << QString::fromUtf8("Введите число между 0 и 255: ").toLocal8Bit().data();
    cin >> u;
    cout << '\n';

    cout << QString::fromUtf8("Исходное число в двоичном коде: ").toLocal8Bit().data();
    disp_binary(u);
    cout << '\n';

    cout << QString::fromUtf8("Его дополнение до единицы: ").toLocal8Bit().data();
    disp_binary(~u);
    cout << '\n';

}

void disp_binary(unsigned u)
{
    register int t;
    for (t=128; t>0; t = t/2){
        if (u & t)
            cout << "1 ";
        else
            cout << "0 ";
    }

}
