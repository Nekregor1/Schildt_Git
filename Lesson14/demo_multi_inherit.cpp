// Пример использования нескольких базовых классов
#include <iostream>
using namespace std;

class base7_1 {
protected:
    int m_x;
public:
    void showx() {cout << m_x << '\n';}
};

class base7_2 {
protected:
    int m_y;
public:
    void showy() {cout << m_y << '\n';}
};

// Наследование двух базовых классов
class derived7: public base7_1, public base7_2 {
public:
    void set(int i, int j) {m_x = i; m_y = j;}
};

void demo_multi_inherit()
{
    derived7 ob;

    ob.set(10, 20);     // член класса derived7
    ob.showx();         // член класса base7_1
    ob.showy();         // член класса base7_2
}
