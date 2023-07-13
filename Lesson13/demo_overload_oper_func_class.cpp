// Перегрузка операторов с помощью функций-членов
#include <iostream>
#include <QTextCodec>
using namespace std;

class three_d {
    int x, y, z;        // 3-мерные координаты
public:
    three_d() { x = y = z = 0;}
    three_d(int i, int j, int k) {
        x = i;
        y = j;
        z = k;
    }
    three_d operator+(three_d op2);     // Операнд op1 передается неявно
    three_d operator=(three_d op2);     // Операнд op1 передается неявно

    void show();
};

// Перегрузка оператора "+"
three_d three_d::operator+(three_d op2)
{
    three_d temp;

    temp.x = x + op2.x;     // Операции сложения целочисленных
    temp.y = y + op2.y;     // значений сохраняют оригинальный
    temp.z = z + op2.z;     // смысл.

    return temp;
}

// Перегрузка оператора присваивания.
three_d three_d::operator=(three_d op2)
{
    x = op2.x;          // Операции присваивания целочесленных
    y = op2.y;          // значений сохраняют оригинальный
    z = op2.z;          // смысл.
    return *this;
}

// Отображение координат X, Y, Z
void three_d::show()
{
    cout << x << ' ';
    cout << y << ' ';
    cout << z << '\n';
}

void demo_overload_oper_func_class()
{
    three_d a(1, 2, 3), b(10, 10, 10), c;

    a.show();
    b.show();

    c = a + b;          // сложение объектов a b
    c.show();

    c = a + b + c;      // сложение объектов a b c
    c.show();

    c = b = a;          // демонстрация множественного присваивания
    c.show();
    b.show();

}
