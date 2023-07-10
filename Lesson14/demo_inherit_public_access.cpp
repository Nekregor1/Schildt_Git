#include <iostream>
using namespace std;

class base {
    int m_i, m_j;
public:
    void set(int a, int b) { m_i = a; m_j = b;}
    void show() {cout << m_i << ' ' << m_j << '\n';}
};

class derived: public base {
    int m_k;
public:
    derived(int x) {m_k = x;}
    void showk() {cout << m_k << '\n';}
};

void demo_inherit_public_access()
{
    derived ob(3);
    ob.set(1, 2);   // доступ к членам класса base
    ob.show();      // доступ к членам класса base

    ob.showk();     // доступ к члену класса derived
}
