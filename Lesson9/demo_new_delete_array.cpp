#include <iostream>
using namespace std;

void demo_new_delete_array()
{
    double* p;
    int i;

    p = new double [10];        // Выделяем память для
                                // 10-элементного массива
    // Заполняем массив значениями от 100 до 109
    for (i=0; i<10; i++)
        p[i] = 100.0 + i;
    // Отображаем содержимое массива
    for (i=0; i<10; i++)
        cout << p[i]<< ' ';
    cout << '\n';

    delete [] p;    // Удаляем массив.

}
