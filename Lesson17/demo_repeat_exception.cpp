// Пример повторного генерирования исключения
#include <iostream>
#include <QTextCodec>
using namespace std;

void Xhandler6()
{
    try {
        throw "Привет";     // генерирует исключение типа *char
    }
    catch (const char *) {    // Перехватывает исключение типа char *
        cout << QString::fromUtf8("Перехват исключения в функции Xhandler.\n").toLocal8Bit().data();
        throw ;         // Повторное генерирование исключения
                        // типа char*, которое будет перехвачено
                        // вне функции Xhandler

    }
}

void demo_repeat_exception()
{
    cout << QString::fromUtf8("НАЧАЛО.\n").toLocal8Bit().data();
    try {
        Xhandler6();
    }
    catch (const char *) {
        cout << QString::fromUtf8("Перехват исключения в функции main().\n").toLocal8Bit().data();
    }
    cout << QString::fromUtf8("КОНЕЦ.\n").toLocal8Bit().data();
}
