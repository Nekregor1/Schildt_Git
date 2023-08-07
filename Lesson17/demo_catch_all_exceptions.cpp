// В этой программе перехватываются исключения всех типов
#include <iostream>
#include <QTextCodec>
using namespace std;

void Xhandler3 (int test)
{
    try {
        if(test==0) throw test;     // генерирует int-исключение
        if(test==1) throw 'a';      // генерирует char-исключение
        if(test==2) throw 123.23;   // генерирует double-исключение
    }
    catch (...) {   // перехват всех исключений
        cout << QString::fromUtf8("Перехват!\n").toLocal8Bit().data();
    }
}

void demo_catch_all_exceptions()
{
    cout << QString::fromUtf8("НАЧАЛО\n").toLocal8Bit().data();

    Xhandler3(0);
    Xhandler3(1);
    Xhandler3(2);

    cout << QString::fromUtf8("КОНЕЦ\n").toLocal8Bit().data();
}
