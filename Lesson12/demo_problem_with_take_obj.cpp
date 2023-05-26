// Демонстрирация проблемы, возможной при передачи
// объектов функции
#include <iostream>
#include <cstdlib>
#include <QTextCodec>
using namespace std;

class myclass_4 {
    int *p;
public:
    myclass_4(int i);
    ~myclass_4();
    int getval() {
        return *p;
    }
};

myclass_4::myclass_4(int i)
{
    cout << QString::fromUtf8("Выделение памяти, адресуемой указателем р.\n").toLocal8Bit().data();
    p = new int;
    *p = i;
}

myclass_4::~myclass_4()
{
    cout << QString::fromUtf8("Освобождение памяти, адресуемой указателем р.\n").toLocal8Bit().data();
    delete p;
}

// При выполении этой функции возникает проблема
void display(myclass_4 ob)
{
    cout << ob.getval() << '\n';
}

/* Функция, которая НЕ создает проблем
 * Поскольуц объект ob теперь передается по ссылке, копия
 * аргумента не создается, а следовательно, объект не выходит
 * из области видимости по завершении функции good_display()
*/
void good_display(myclass_4 &ob)
{
    cout << ob.getval() << '\n';
}


void demo_problem_with_take_obj()
{
    myclass_4 a(10);
//    display(a);
    good_display(a);
}
