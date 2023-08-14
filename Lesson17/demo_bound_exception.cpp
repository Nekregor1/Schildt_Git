// Ограничение типов исключений, генерируемых функцией
#include <iostream>
#include <QTextCodec>
using namespace std;

// Эта функция может генерировать
// исключения только типа int, char, double
void Xhandler5(int test) throw(int, char, double)
{
    if(test==0) throw test;
    if(test==1) throw 'a';
    if(test==2) throw 123.23;
}

void demo_bound_exception()
{
    cout << QString::fromUtf8("Начало!\n").toLocal8Bit().data();
    try {
        Xhandler5(1);
    }
    catch (int i) {
        cout << QString::fromUtf8("Перехват int-исключения\n").toLocal8Bit().data();
    }
    catch (char c) {
        cout << QString::fromUtf8("Перехват char-исключения\n").toLocal8Bit().data();
    }
    catch (double d) {
        cout << QString::fromUtf8("Перехват double-исключения\n").toLocal8Bit().data();
    }
    cout << QString::fromUtf8("Конец!\n").toLocal8Bit().data();
}
