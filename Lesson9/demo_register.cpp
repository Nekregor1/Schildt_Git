#include <iostream>
#include <QTextCodec>
#include <ctime>
using namespace std;

unsigned int i;     // не register-переменная
unsigned int delay;

void demo_register()
{
    register unsigned int j;
    long start, end;
    start = clock();
    for (delay=0; delay<50; delay++)
        for (i=0; i<64000000; i++);
    end = clock();
    cout << QString::fromUtf8("Количество тиков для не register-цикла: ").toLocal8Bit().data();
    cout << end-start << '\n';

    start = clock();
    for (delay=0; delay<50; delay++)
        for (j=0; j<64000000; j++);
    end = clock();
    cout << QString::fromUtf8("Количество тиков для register-цикла: ").toLocal8Bit().data();
    cout << end - start << '\n';

}
