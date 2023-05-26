// Использование функции, которая возвращает объект
#include <iostream>
#include <cstdlib>
#include <QTextCodec>
using namespace std;

class sample {
    char s[80];
public:
    void show() {
        cout << s << '\n';
    }
    void set(char *str) {
        strcpy(s, str);
    }
};

// Эта функция возвращает объект типа sample
sample input()
{
    char instr[80];
    sample str;
    cout << QString::fromUtf8("Введите строку: ").toLocal8Bit().data();
    cin >> instr;
    str.set(instr);
    return str;
}

void demo_func_get_obj()
{
    sample ob;

    // Присваиваем объект, возвращаемый
    // функцией input(), объекту ob
    ob = input();
    ob.show();
}
