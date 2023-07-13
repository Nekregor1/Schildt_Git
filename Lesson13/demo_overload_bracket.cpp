// Демонстрация перегрузки оператора "()"
#include <iostream>
using namespace std;

class three_d5 {
    int m_x, m_y, m_z;
public:
    three_d5() {
        m_x = m_y = m_z = 0;
    }
    three_d5(int i, int j, int k) {
        m_x = i;
        m_y = j;
        m_z = k;
    }
    three_d5 operator()(int a, int b, int c);
    void show();
};

// Перегрузка оператора "()"
three_d5 three_d5::operator()(int a, int b, int c)
{
    three_d5 temp;
    temp.m_x = m_x + a;
    temp.m_y = m_y + b;
    temp.m_z = m_z + c;
    return temp;
}

void three_d5::show()
{
    cout << m_x << ' ';
    cout << m_y << ' ';
    cout << m_z << '\n';
}

void demo_overload_bracket()
{
    three_d5 ob1(1, 2, 3), ob2;

    cout << "ob1: ";
    ob1.show();

    cout << "ob2: ";
    ob2.show();

    ob2 = ob1(10, 11, 12);      // вызов функции operator()
    cout << "ob2: ";
    ob2.show();
}
