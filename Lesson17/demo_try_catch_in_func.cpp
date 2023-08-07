#include <iostream>
#include <QTextCodec>
using namespace std;

// Функционирование блоков try/catch возобновляется
// при каждом входе в функцию.
void Xhandler(int test)
{
    try {
        if(test) throw test;
    }  catch (int i) {
        cout << QString::fromUtf8("Перехват! Исключение №: ").toLocal8Bit().data();
        cout << i << '\n';
    }
}

void demo_try_catch_in_func()
{
    cout << QString::fromUtf8("НАЧАЛО\n").toLocal8Bit().data();
    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);
    cout << QString::fromUtf8("КОНЕЦ\n").toLocal8Bit().data();
}
