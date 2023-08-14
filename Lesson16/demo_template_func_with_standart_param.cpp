// Использование стандартных параметров
// в шаблонной функции
#include <iostream>
#include <QTextCodec>
using namespace std;

// Отображение данных заданное количество раз.
template <class X> void repeat(X datas, int times)
{
    do {
//        cout << QString::fromUtf8(datas).toLocal8Bit().data();
        cout << datas;
        cout << '\n';
        times --;
    } while(times);
}

void demo_template_func_with_standart_param()
{
    repeat("Это тест", 3);
    repeat(100, 5);
    repeat(99.0/2, 4);
}
