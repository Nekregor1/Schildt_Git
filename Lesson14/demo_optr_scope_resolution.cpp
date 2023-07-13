// Эта программа использует оператор разрешения
// контекста для выбора нужного члена i
#include <iostream>
using namespace std;

class base10 {
public:
    int m_i;
};

class derived10_1: public base10 {
public:
    int m_j;
};

class derived10_2: public base10 {
public:
    int m_k;
};

/* Класс derived10_3 наследует оба класса derived10_1 и
 * derived10_2. Это означает, что в классе derived10_3
 * существует две копии класса base10 */
class derived10_3: public derived10_1, public derived10_2 {
public:
    int m_sum;
};

void demo_optr_scope_resolution()
{
    derived10_3 ob;

    ob.derived10_1::m_i = 10;   // Контекст разрешен, используется член класса derived10_1
    ob.m_j = 20;
    ob.m_k = 30;

    // Контекст разрешени и здесь
    ob.m_sum = ob.derived10_1::m_i + ob.m_j + ob.m_k;

    // Неоднозначность ликвидированна и здесь
    cout << ob.derived10_1::m_i << ' ';
    cout << ob.m_j << ' ' << ob.m_k << ' ';
    cout << ob.m_sum << '\n';
}



