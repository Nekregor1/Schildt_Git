#include <iostream>
using namespace std;

class base2 {
    int m_i, m_j;
public:
    base2() { m_i = m_j = 0;}
    void set(int a, int b) {m_i = a; m_j = b;}
    void show() {cout << m_i << ' ' << m_j << '\n';}
};

// Открытые члены класса base2 теперь становятся
// закрытыми членами класс derived2

class derived2: private base2 {
    int m_k;
public:
    derived2(int x) {m_k = x;}
    void showk() {cout << m_k << '\n';}
    void set_all(int a, int b){set(a,b);}       // Обеспечение доступа к закрытым члена base2
    void show_all() {show(); showk();}          // --//--
};

void demo_inherit_private_access()
{
    derived2 ob(3);
    ob.set_all(1,2);
    ob.show_all();
//    ob.set(1, 2);       // Ошибка, доступа к функции set() нет
//    ob.show();          // Ошибка, доступа к функции show() нет

}
