// Обработка исключений, генерируемых оператором new
#include <iostream>
#include <new>
#include <QTextCodec>
using namespace std;

void demo_exception_by_operator_new()
{
    int* p, i;
    try {
        p = new int[32];        // запрос на выделение памяти для
                                // 32-элементного int-массива
    }
    catch (bad_alloc xa) {
        cout << QString::fromUtf8("Память не выделена.\n").toLocal8Bit().data();
        return;
    }
    for(i=0; i<32; i++) p[i] = i;
    for(i=0; i<32; i++) cout << p[i] << " ";
    cout << '\n';
    delete [] p;        // освобождение памяти
}
