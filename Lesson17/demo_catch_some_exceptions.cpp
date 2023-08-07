// Использование формата catch(...) в качесве
// варианта "все остальное"
#include <iostream>
#include <QTextCodec>
using namespace std;

void Xhandler4 (int test)
{
    try {
        if(test==0) throw test;     // генерирует int-исключение
        if(test==1) throw 'a';      // генерирует char-исключение
        if(test==2) throw 123.23;   // генерирует double-исключение
    }
    catch (int i) {
        cout << QString::fromUtf8("Перехват ").toLocal8Bit().data();
        cout << i << '\n';
    }
    catch (...) {   // перехват всех исключений
        cout << QString::fromUtf8("Перехват!\n").toLocal8Bit().data();
    }
}

void demo_catch_some_exceptions()
{
    cout << QString::fromUtf8("НАЧАЛО\n").toLocal8Bit().data();

    Xhandler4(0);
    Xhandler4(1);
    Xhandler4(2);

    cout << QString::fromUtf8("КОНЕЦ\n").toLocal8Bit().data();
}
