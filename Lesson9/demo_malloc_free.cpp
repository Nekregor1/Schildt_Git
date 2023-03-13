#include <iostream>
#include <cstdlib>
#include <QTextCodec>
using namespace std;

int demo_malloc_free()
{
    int* i;
    double* j;

    i = (int*) malloc(sizeof(int));
    if (!i) {
        cout << QString::fromUtf8("Выделить память не удалось.\n").toLocal8Bit().data();
        return 1;
    }

    j = (double*) malloc(sizeof(double));
    if (!j) {
        cout << QString::fromUtf8("Выделить память не удалось.\n").toLocal8Bit().data();
        return 1;
    }

    *i = 10;
    *j = 100.123;

    cout << *i << ' ' << *j << '\n';

    // Освобождение памяти
    free(i);
    free(j);

    return 0;

}
