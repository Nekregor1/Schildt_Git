/* Конструктор копии вызывается в результате создания
 * временного объекта в качестве значения, возвращаемого функцией
 */

#include <iostream>
#include <QTextCodec>
using namespace std;

class myclass {
public:
    myclass() {
        cout << QString::fromUtf8("Обычный конструктор.\n").toLocal8Bit().data();
    }
    myclass(const myclass &obj) {
        cout << QString::fromUtf8("Конструктор копии.\n").toLocal8Bit().data();
    }
};

myclass f()
{
    myclass ob;     // Вызывается обычный конструктор
    return ob;      // Неявно вызывается конструктор копии
}

void demo_constr_of_copy_by_get_func_obj()
{
    myclass a;          // Вызывается обычный конструктор

    a = f();            // Вызывается конструктор копии

}
