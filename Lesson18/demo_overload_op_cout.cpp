// Использование перегруженного оператора вывода
#include <iostream>
using namespace std;

class three_d {
public:
    int x, y, z;    // 3-мерные координаты
    three_d(int a, int b, int c) { x=a; y=b; z=c;}
};

// Отображение координат X, Y, Z (оператор для класса three_d
ostream &operator<<(ostream &stream, three_d obj)
{
    stream << obj.x << "_";
    stream << obj.y << "_";
    stream << obj.z << "\n";
    return stream;      // возвращает параметр stream
}

void demo_overload_op_cout()
{
    three_d a(1, 2, 3), b(3, 4, 5), c(5, 6, 7);
    cout << a << b << c;

}
