// Перегрузка унарного оператора
#include <iostream>
using namespace std;

class three_d2 {
    int x, y, z;    // 3-мерные координаты
public:
    three_d2() {
        x = y = z = 0;
    }
    three_d2(int i, int j, int k) {
        x = i;
        y = j;
        z = k;
    }
    three_d2 operator+(three_d2 op2);
    three_d2 operator=(three_d2 op2);
    three_d2 operator++();      // префиксная версия оператора ++
    three_d2 operator++(int notusfied);         // постфиксная версия оператора ++
    void show();
};

// Перегрузка оператора "+"
three_d2 three_d2::operator+(three_d2 op2)
{
    three_d2 temp;
    temp.x = x + op2.x;
    temp.y = y + op2.y;
    temp.z = z + op2.z;
    return temp;
}

// Перегрузка оператора "="
three_d2 three_d2::operator=(three_d2 op2)
{
    x = op2.x;
    y = op2.y;
    z = op2.z;
    return *this;
}

// Перегрузка оператора "++"
three_d2 three_d2::operator++()
{
    x++;
    y++;
    z++;
    return *this;
}

three_d2 three_d2::operator++(int notusfied)
{
    three_d2 temp = *this;
    x++;
    y++;
    z++;
    return temp;
}

// Отображение координат X, Y, Z
void three_d2::show()
{
    cout << x << ' ';
    cout << y << ' ';
    cout << z << '\n';
}

void demo_overload_unar_oper()
{
    three_d2 a(1, 2, 3), b(10, 10, 10), c;
    cout << 'a' << ' ';
    a.show();
    cout << 'b' << ' ';
    b.show();

    c = a + b;      // Сложение объектов a и b
    cout << 'c' << ' ';
    c.show();

    c = a + b + c;      // Сложение объектов a b c
    cout << 'c' << ' ';
    c.show();

    c = b = a;          // множественное присваивание
    cout << 'c' << ' ';
    c.show();
    cout << 'b' << ' ';
    b.show();

    ++c;            // префиксное инкрементирование c
    cout << 'c' << ' ';
    c.show();

    c++;
    cout << 'c' << ' ';
    c.show();       // постфиксаная форма инкремента

    a = ++c;        // Объект a получает значение объекта с после его инкрементирования
    // Теперь объекты а и с имеют одинаковое значение
    cout << 'a' << ' ';
    a.show();
    cout << 'c' << ' ';
    c.show();

    a = c++;        // Объект а получает значение объекта с до его инкрементирования
    // Теперь объекты а и с имеют различные значения
    cout << 'a' << ' ';
    a.show();
    cout << 'c' << ' ';
    c.show();

}












