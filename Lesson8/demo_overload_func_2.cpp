// Создание функции myabs() -- перегруженно
// версис функции abs().

#include <iostream>
#include <QTextCodec>
using namespace std;

// Функция myabs() перегружается тремя способами.
int myabs(int i);
double myabs(double d);
long myabs(long l);

void demo_overload_func_2()
{
#ifdef Q_OS_WIN32
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#endif
#ifdef Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

    cout << myabs(-10) << '\n';
    cout << myabs(-11.0) << '\n';
    cout << myabs(-9L) << '\n';

}

int myabs(int i)
{
    cout << "Использование int-функции myabs(): ";
    if (i<0)
        return -i;
    else
        return i;
}

double myabs(double d)
{
    cout << "Использование double-функции myabs(): ";
    if (d<0)
        return -d;
    else
        return d;
}

long myabs(long l)
{
    cout << "Использование long-функции myabs(): ";
    if (l<0)
        return -l;
    else
        return l;
}

