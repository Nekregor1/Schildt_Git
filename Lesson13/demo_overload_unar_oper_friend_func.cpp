// В этой программе используются перегруженные
// операторные функции-"друзья" operator++().
#include <iostream>
using namespace std;

class three_d4 {
    int m_x, m_y, m_z;
public:
    three_d4() {
        m_x = m_y = m_z = 0;
    }
    three_d4(int i, int j, int k) {
        m_x = i;
        m_y = j;
        m_z = k;
    }
    friend three_d4 operator+(three_d4 op1, three_d4 op2);
    three_d4 operator=(three_d4 op2);

    // Эти функции для перегрузки оператора "++"
    // используют ссылочные параметры
    friend three_d4 operator++(three_d4 &op1);
    friend three_d4 operator++(three_d4 &op1, int notused);
    void show();
};

three_d4 operator+(three_d4 op1, three_d4 op2)
{
    three_d4 temp;
    temp.m_x = op1.m_x + op2.m_x;
    temp.m_y = op1.m_y + op2.m_y;
    temp.m_z = op1.m_z + op2.m_z;
    return temp;
}

three_d4 three_d4::operator=(three_d4 op2)
{
    m_x = op2.m_x;
    m_y = op2.m_y;
    m_z = op2.m_z;
    return *this;
}

/* Перегрузка префиксной версии оператора "++"
 * с использованием функции-"друга". Для этого необходимо
 * использование ссылочного параметра */
three_d4 operator++(three_d4 &op1)
{
    op1.m_x++;
    op1.m_y++;
    op1.m_z++;
    return op1;
}

/* Перегрузка постфиксной версии оператора "++"
 * с использованием функции-"друга". Для этого неоходимо
 * использование ссылочнго параметра. */
three_d4 operator++(three_d4 &op1, int notused)
{
    three_d4 temp = op1;
    op1.m_x++;
    op1.m_y++;
    op1.m_z++;
    return temp;
}


// Отображение координат X Y Z
void three_d4::show()
{
    cout << m_x << ' ';
    cout << m_y << ' ';
    cout << m_z << '\n';
}


void demo_overload_unar_oper_friend_func()
{
    three_d4 a(1, 2, 3), b(10, 10, 10), c;

    a.show();
    b.show();

    c = a + b;
    c.show();

    c = a + b + c;
    c.show();

    c = b = a;
    c.show();
    b.show();

    ++c;        // префиксная форма инкремента
    c.show();

    c++;        // постфиксная форма инкремента
    c.show();

    a = ++c;    // Объект а получает значение объекта с после инкрементирования
    a.show();   // В этом случае объекты а и с
    c.show();   // имеют одинаковые значения координат

    a = c++;    // Объект а получает значение объекта с до инкрементирования
    a.show();   // В этом случае объекты а и с
    c.show();   // имеют различные значения

}







