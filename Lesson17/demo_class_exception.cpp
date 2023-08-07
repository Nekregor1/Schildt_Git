// Использование класса исключений
#include <iostream>
#include <cstring>
#include <qtextcodec.h>
using namespace std;

class MyException {
public:
    char str_what[80];

    MyException() {*str_what = 0;}
    MyException(char *s) {
        strcpy(str_what, s);
    }
};

void demo_class_exception()
{
    int a, b;
    try {
        cout << QString::fromUtf8("Введите числитель и знаменатель: ").toLocal8Bit().data();
        cin >> a >> b;
        if(!b)
            throw MyException("Делить на нуль нельзя!\n");
        else {
            cout << QString::fromUtf8("Частное равно ").toLocal8Bit().data();
            cout << a/b << '\n';
        }
    }  catch (MyException e) {      // перехват ошибки
        cout << e.str_what << '\n';
    }
}
