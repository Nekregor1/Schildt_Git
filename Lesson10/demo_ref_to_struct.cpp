#include <iostream>
#include <QTextCodec>
using namespace std;

struct mystruct {
    int a;
    int b;
};

mystruct& f(mystruct& var);

void demo_ref_to_struct()
{
    mystruct x, y;
    x.a = 10;
    x.b = 20;

    cout << QString::fromUtf8("Исходные значения полей х.а и x.b: ").toLocal8Bit().data();
    cout << x.a << ' ' << x.b << '\n';

    y = f(x);

    cout << QString::fromUtf8("Модифицированные значения полей х.а и x.b: ").toLocal8Bit().data();
    cout << x.a << ' ' << x.b << '\n';
    cout << QString::fromUtf8("Модифицированные значения полей y.а и y.b: ").toLocal8Bit().data();
    cout << y.a << ' ' << y.b << '\n';


}

// Функция, которая получает и возвращает ссылку на структуру
mystruct& f(mystruct& var)
{
    var.a = var.a * var.a;
    var.b = var.b / var.b;
    return var;
}
