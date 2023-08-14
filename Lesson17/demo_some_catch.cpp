#include <iostream>
#include <QTextCodec>
using namespace std;

// Здесь возможен перехват исключений различных типов
void Xhandler2(int test)
{
    try {
        if(test)
            throw test;
        else
            throw "Значение равно нулю.";
    }
    catch (int i) {
        cout << QString::fromUtf8("Перехват исключения №: ").toLocal8Bit().data();
        cout << i << '\n';
    }
    catch (char const *str) {
        cout << QString::fromUtf8("Перехват строки: ").toLocal8Bit().data();
        cout << str << '\n';
    }
}

void demo_some_catch()
{
    cout << QString::fromUtf8("НАЧАЛО\n").toLocal8Bit().data();

    Xhandler2(1);
    Xhandler2(2);
    Xhandler2(0);
    Xhandler2(3);

    cout << QString::fromUtf8("КОНЕЦ\n").toLocal8Bit().data();
}
