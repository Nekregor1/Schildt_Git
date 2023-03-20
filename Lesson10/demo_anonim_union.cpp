#include <iostream>
#include <QTextCodec>
using namespace std;

void demo_anonim_union()
{
    union {
        short int count;
        char ch[2];
    };
    // Обращение к членам анонимного объединения
    ch[0] = 'X';
    ch[1] = 'Y';
    cout << QString::fromUtf8("Объединение в виде символов: ").toLocal8Bit().data();
    cout << ch[0] << ch[1] << '\n';
    cout << QString::fromUtf8("Объединение в виде целого значения: ").toLocal8Bit().data();
    cout << count << '\n';
}
