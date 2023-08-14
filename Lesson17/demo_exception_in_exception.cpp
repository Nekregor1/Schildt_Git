// Генерирование исключения из функции, вызываемой
// из try-блока

#include <iostream>
#include <QTextCodec>
using namespace std;

void Xtest(int test)
{
    cout << QString::fromUtf8("В функции Xtest(), значение test равно: ").toLocal8Bit().data();
    cout << test << '\n';
    if(test==0)
        throw test;
}

void demo_exception_in_exception()
{
    cout << QString::fromUtf8("НАЧАЛО\n").toLocal8Bit().data();

    try {   // начало try-блока
        cout << QString::fromUtf8("В try-блоке\n").toLocal8Bit().data();
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }  catch (int i) {  // Перехват ошибки
        cout << QString::fromUtf8("Перехват исключения. Его значение равно: ").toLocal8Bit().data();
        cout << i << '\n';
    }

    cout << QString::fromUtf8("КОНЕЦ\n").toLocal8Bit().data();
}
