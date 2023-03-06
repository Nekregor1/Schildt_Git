#include <iostream>
#include <QTextCodec>
using namespace std;

void f(int i);          // один целочисленный параметр
void f(int i, int j);   // два целочисленных папарметра
void f(double k);       // один параметр типа double



void demo_overload_func()
{
#ifdef Q_OS_WIN32
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#endif
#ifdef Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

    f(10);              // вызов функции f(int)
    f(10, 20);          // вызов функции f(int, int)
    f(12.23);           // вызов функции f(double)

}

void f(int i)
{
    cout << "В функции f(int), i равно " << i << '\n';

}

void f(int i, int j)
{
    cout << "В функции f(int, int), i равно " << i;
    cout << " , j равно " << j << '\n';

}

void f(double k)
{
    cout << "В функции f(double), k равно " << k << '\n';
}
