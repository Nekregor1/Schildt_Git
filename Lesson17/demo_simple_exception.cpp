// Простой пример обработки исключений
#include <iostream>
#include <QTextCodec>
using namespace std;

void demo_simple_exception()
{
    cout << QString::fromUtf8("НАЧАЛО\n").toLocal8Bit().data();

    try {
        cout << QString::fromUtf8("В try-блоке\n").toLocal8Bit().data();
        throw 99;       // Генерирование ошибки
        cout << QString::fromUtf8("Эта инструкция не будет выполнена\n").toLocal8Bit().data();
    }  catch (int i) {  // Перехват ошибки
        cout << QString::fromUtf8("Перехват исключения. Его значение равно: ").toLocal8Bit().data();
        cout << i << '\n';
    }

    cout << QString::fromUtf8("Конец\n").toLocal8Bit().data();
}
