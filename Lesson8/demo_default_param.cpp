#include <iostream>
#include <QTextCodec>
using namespace std;

void clrscr(int size = 25);

void demo_default_param()
{
#ifdef Q_OS_WIN32
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#endif
#ifdef Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

    int i;
    for (i=0; i<30; i++)
        cout << i << '\n';
    clrscr();       // Очищаем 25 строк
    for (i=0; i<30; i++)
        cout << i << '\n';
    clrscr(10);     // Очищаем 10 строк

}

void clrscr(int size)
{
    for (; size; size--)
        cout << '\n';
}
