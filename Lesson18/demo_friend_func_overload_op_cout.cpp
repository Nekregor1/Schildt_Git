// Использование "функции-друга" для перегрузки оператора "<<"
#include <iostream>
using namespace std;

class three_d2 {
    int x, y, z;        // 3-мерные координаты (теперь это private члены)
public:
    three_d2(int a, int b, int c) { x=a; y=b; z=c;}
    friend ostream &operator<<(ostream &stream, three_d2 obj);
};

// Отображение координат X, Y, Z (оператор вывод для класса three_d2)
ostream &operator<<(ostream &stream, three_d2 obj)
{
    stream << obj.x << "__";
    stream << obj.y << "__";
    stream << obj.z << "\n";
    return stream;      // возвращает поток
}

void demo_friend_func_overload_op_cout()
{
    three_d2 a(1,2,3), b(4,5,6), c(5,6,7);
    cout << a << b << c;
}
