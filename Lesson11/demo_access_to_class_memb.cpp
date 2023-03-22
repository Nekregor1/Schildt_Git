#include <iostream>
#include <QTextCodec>
using namespace std;

class myclass {
    int a;      // закрытые данные
public:
    int b;      // открытые данные
    void setab(int i);  // открытые функции
    int geta();
    void reset();
};

void myclass::setab(int i)
{
    a = i;
    b = i * i;
}

int myclass::geta()
{
    return a;
}

void myclass::reset()
{
    setab(0);   // Прямой вызов функции setab()
                // для уже известного объекта
}

void demo_access_to_class_memb()
{
    myclass ob;
    ob.setab(5);    // Устанавливаем члены данных ob.a и ob.b
    cout << QString::fromUtf8("Объект ob после вызова функции setab(5): ").toLocal8Bit().data();
    cout << ob.geta() << ' ';
    cout << ob.b;       // К члену b можно получить прямой доступ
                    // поскольку он является public-членом
    cout << '\n';

    ob.b = 20;      // Член b можно устанавливать напрямую
                    // поскольку он является public-членом
    cout << QString::fromUtf8("Объект ob после установки члена ob.b=20: ").toLocal8Bit().data();
    cout << ob.geta() << ' ';
    cout << ob.b << '\n';

    ob.reset();
    cout << QString::fromUtf8("Объект ob после вызова функции ob.reset(): ").toLocal8Bit().data();
    cout << ob.geta() << ' ';
    cout << ob.b << '\n';
}
