#include <iostream>
#include <QTextCodec>
using namespace std;

double& change_it(int i);       // Функция возвращает ссылку
double vals[] = {1.1, 2.2, 3.3, 4.4, 5.5};

void demo_return_reference_2()
{
#ifdef Q_OS_WIN32
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#endif

#ifdef Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

    int i;
    cout << QString::fromUtf8("Вот исходные значения: ").toLocal8Bit().data();
    for (i=0; i<5; i++)
        cout << vals[i] << ' ';
    cout << '\n';

    change_it(1) = 5298.23;     // Изменяем 2-й элемент
    change_it(3) = -98.8;       // Изменяем 4-й элемент

    cout << QString::fromUtf8("Вот измененные значения: ").toLocal8Bit().data();
    for (i=0; i<5; i++)
        cout << vals[i] << ' ';
    cout << '\n';

}

double& change_it(int i){
    return vals[i];     // Возвращает ссылку на i-й элемент
}
