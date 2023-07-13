#include <iostream>
using namespace std;

class base4 {
protected:
    int m_i, m_j;
public:
    void set(int a, int b) {m_i = a; m_j = b;}
    void show() {cout << m_i << ' ' << m_j << '\n';};
};

// Члены m_i m_j наследуются как protected-члены
class derived4_1: public base4 {
    int m_k;
public:
    void setk() {m_k = m_i*m_j;}    // правомерный доступ
    void showk() {cout << m_k << '\n';}
};

// Члены m_i m_j наследуются косвенно через класс derived4_1
class derived4_2: public derived4_1 {
    int m_m;
public:
    void setm() {m_m = m_i - m_j;}
    void showm() {cout << m_m << '\n';}
};

void demo_double_inherit()
{
    derived4_1 ob1;
    derived4_2 ob2;

    ob1.set(2, 3);
    ob1.show();
    ob1.setk();
    ob1.showk();

    ob2.set(3, 4);
    ob2.show();
    ob2.setk();
    ob2.showk();
    ob2.setm();
    ob2.showm();
}
