// Программа использует виртуальные базовые классы
#include <iostream>
using namespace std;

class base11 {
public:
    int m_i;
};

// Класса derived11_1 наследует класс base11 как виртуальный
class derived11_1: virtual public base11 {
public:
    int m_j;
};

// Класса derived11_2 наследует класс base11 как виртуальный
class derived11_2: virtual public base11 {
public:
    int m_k;
};

/* Класс derived11_3 наследует оба класса derived11_1 и
 * derived11_2. На этот раз он содержит только одну копию
 * класса base11 */
class derived11_3: public derived11_1, public derived11_2 {
public:
    int m_sum;
};

void demo_virtual_base_class()
{
    derived11_3 ob;

    ob.m_i = 10;
    ob.m_j = 20;
    ob.m_k = 30;

    // Теперь неоднозначности нет
    ob.m_sum = ob.m_i + ob.m_j + ob.m_k;

    cout << ob.m_i << ' ' << ob.m_j << ' ';
    cout << ob.m_k << ' ' << ob.m_sum << '\n';
}
