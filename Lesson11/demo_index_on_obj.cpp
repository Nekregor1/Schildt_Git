// Простой пример использования указателя на объект
#include <iostream>
using namespace std;

class P_example {
    int num;
public:
    void set_num(int val) {
        num = val;
    };
    void show_num();
};

void P_example::show_num()
{
    cout << num << '\n';
}

void demo_index_on_obj()
{
    P_example ob, *p;       // Объявляем объект и указатель на него
    P_example ob2[2], *p2;

    ob.set_num(1);          // Получаем прямой доступ к объекту ob
    ob.show_num();

    p = &ob;
    p->show_num();          // Получаем доступ к объекту ob с помощью указателя
    p->set_num(2);
    p->show_num();

    ob2[0].set_num(10);     // Прямой доступ к объекту
    ob2[1].set_num(20);

    p2 = &ob2[0];           // Получаем указатель на первый элемент
    p2->show_num();         // Отображение занчение элемента ob[0] с помощью указателя

    p2++;                    // Переходим к следующему объекту
    p2->show_num();         // Отображаем значение элемента ob[1] с помощью указателя

    p2--;                   // Возвращаемся к предыдущему объекту
    p2->show_num();         // Снова отображаем значение элемента ob[0]
}
