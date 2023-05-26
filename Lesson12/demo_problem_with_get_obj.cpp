// Ошибка, генерируемая при возвращении объекта функцией
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <QTextCodec>
using namespace std;

class sample_2 {
    char *s;
public:
    sample_2() {
        s = 0;
    }
    ~sample_2() {
        if(s) delete [] s;
        cout << QString::fromUtf8("Освобождение s-памяти.\n").toLocal8Bit().data();
    }
    void show() {
        cout << s << '\n';
    }
    void set(char *str);
};

// Загрузка строки
void sample_2::set(char *str)
{
    s = new char[strlen(str)+1];
    strcpy(s, str);
}

// Эта функция возвращает объект типа sample_2
sample_2 input_2()
{
    char instr[80];
    sample_2 str;

    cout << QString::fromUtf8("Введите строку: ").toLocal8Bit().data();
    cin >> instr;

    str.set(instr);
    return str;
}

void demo_problem_with_get_obj()
{
    sample_2 ob;
    // Присваиваем объект, возвращаемый
    // функцией input(), объекту ob
    ob = input_2();   // Эта инструкция генерирует ошибку!!!
    ob.show();      // Отображение "мусора" :-)

}
