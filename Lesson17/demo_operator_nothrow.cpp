// Использование nothrow-версии оператора new
#include <iostream>
#include <new>
#include <QTextCodec>
using namespace std;

void demo_operator_nothrow()
{
    int *p, i;
    p = new(nothrow) int[32];       // использование nothrow-версии
    if(!p) {
        cout << QString::fromUtf8("Память не выделена.\n").toLocal8Bit().data();
        return;
    }
    for(i=0; i<32; i++) p[i] = i;
    for(i=0; i<32; i++) cout << p[i] << ' ';
    cout << '\n';
    delete [] p;        // освобождение памятиву
}
