// Перегрузка оператора "+" с помощью функции-"друга"
#include <iostream>
using namespace std;

class three_d3 {
    int m_x, m_y, m_z;      // 3-мерные координаты
public:
    three_d3()
    {
        m_x = m_y = m_z = 0;
    };
    three_d3(int i, int j, int k)
    {
        m_x = i;
        m_y = j;
        m_z = k;
    }
    friend three_d3 operator+(three_d3 op1, three_d3 op2);
    three_d3 operator=(three_d3 op2);

    void show();
};

three_d3 operator+(three_d3 op1, three_d3 op2)
{
    three_d3 temp;
    temp.m_x = op1.m_x + op2.m_x;
    temp.m_y = op1.m_y + op2.m_y;
    temp.m_z = op1.m_z + op2.m_z;
    return temp;
}

three_d3 three_d3::operator=(three_d3 op2)
{
    m_x = op2.m_x;
    m_y = op2.m_y;
    m_z = op2.m_z;
    return *this;
}

void three_d3::show()
{
    cout << m_x << ' ';
    cout << m_y << ' ';
    cout << m_z << '\n';
}


void demo_overload_func_friend()
{
    three_d3 a(1, 2, 3), b(10, 10, 10), c;
    a.show();
    b.show();

    c = a + b;
    c.show();

    c = a + b + c;
    c.show();

    c = b = a;
    c.show();

}
