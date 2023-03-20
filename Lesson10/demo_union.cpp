#include <iostream>
#include <QTextCodec>
using namespace std;

void disp_binary(unsigned u);

union swap_bytes {
    short int num;
    char ch[2];
};

void demo_union()
{
    swap_bytes sb;
    char temp;

    sb.num = 15;    // двоичный код: 0000 0000 0000 1111

    cout << sb.num << ' ';
    cout << QString::fromUtf8("Исходные байты:\n").toLocal8Bit().data();
    disp_binary(sb.ch[1]);
    cout << " ";
    disp_binary(sb.ch[0]);
    cout << "\n\n";

    // Обмен байтов
    temp = sb.ch[0];
    sb.ch[0] = sb.ch[1];
    sb.ch[1] = temp;

    cout << sb.num << ' ';
    cout << QString::fromUtf8("Байты после перестановки:\n").toLocal8Bit().data();
    disp_binary(sb.ch[1]);
    cout << ' ';
    disp_binary(sb.ch[0]);
    cout << "\n\n";
}

// Отображение битов, составляющих байт
void disp_binary(unsigned u)
{
    int t;
    for (t=128; t>0; t=t/2)
        if (u & t)
            cout << "1 ";
        else
            cout << "0 ";
}
