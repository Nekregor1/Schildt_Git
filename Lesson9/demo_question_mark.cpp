#include <iostream>
#include <QTextCodec>
using namespace std;

int div_zero();

void demo_question_mark()
{
    int i, j, result;

    cout << "Введите делимое и делитель: ";
    cin >> i >> j;

    // Эта инструкция не допустит возникновения ошибки
    // деления на нуль
    result = j ? i/j : div_zero();

    cout << QString::fromUtf8("Результат: ").toLocal8Bit().data() << result << '\n';

}

int div_zero()
{
    cout << QString::fromUtf8("Нельзя делить на нуль.\n").toLocal8Bit().data();
    return 0;
}
