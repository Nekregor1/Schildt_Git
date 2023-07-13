#include <iostream>
using namespace std;

class base3 {
protected:
    int m_i, m_j;       // Эти члены закрыты в классе base3 но доступны для класса derived3
public:
    void set(int a, int b) {m_i = a; m_j = b;}
    void show() {cout << m_i << ' ' << m_j << '\n';}
};

class derived3: public base3 {
    int m_k;
public:
    // Класс derived3 имеет доступ к членам класса base3 m_i m_j
    void setk() {m_k = m_i*m_j;}
    void showk() {cout << m_k << '\n';}
};

void demo_inherit_protected_access()
{
    derived3 ob;

    ob.set(2, 3);
    ob.show();

    ob.setk();
    ob.showk();
}
