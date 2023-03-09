#include <iostream>
#include <QTextCodec>
using namespace std;

void demo_and()
{
    char ch;
    do {
        cin >> ch;
        // Эта инструкция обнуляет 6-й бит.
        ch = ch & 223;      // 223 = 11011111 В переменной ch
                            // теперь прописная буква
//        cout << QString::fromUtf8(ch).toLocal8Bit().data();
        cout << ch << '\n';
    }   while (ch != 'Q');

}
