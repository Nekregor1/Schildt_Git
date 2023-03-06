#include <iostream>
#include <QTextCodec>
using namespace std;

int& put(int i);        // Помещаем значения в массив
int get(int i);         // Считываем значения из массива

int vals2[10];
int error = 1;

void demo_safe_array()
{
#ifdef Q_OS_WIN32
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#endif
#ifdef Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

    put(0) = 10;        // Помещаем значения в массив
    put(1) = 20;
    put(9) = 30;

    cout << get(0) << '\n';
    cout << get(1) << '\n';
    cout << get(9) << '\n';

    // Специально  генерируем ошибку
    put(12) = 1;        // Индекс за пределами границ массива

}

// Функция занесения значения в массив
int& put(int i)
{
    if (i>=0 && i<10)
        return vals2[i];     // Возвращаем ссылку на i-й элемент
    else {
        cout << QString::fromUtf8("Гаф Ошибка нарушения границ!\n").toLocal8Bit().data();
        return error;       // Возвращаеи ссылку на  error
    }
}

// Функция считывания значения из массива
int get(int i)
{
    if (i>=0 && i<10)
        return vals2[i];     // Возвращаем значение i-го элемента
    else {
        cout << QString::fromUtf8("Мяф Ошибка нарушения границ!\n").toLocal8Bit().data();
        return error;       // Возвращаем значение переменной error
    }
}
