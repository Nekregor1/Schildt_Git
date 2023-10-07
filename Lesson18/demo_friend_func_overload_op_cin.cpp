// Использование перегруженного оператора ввода
#include <iostream>
#include <QTextCodec>
using namespace std;

class three_d3 {
    int x, y, z;
public:

    three_d3(int a, int b, int c) {x=a; y=b; z=c;}
    friend ostream &operator<<(ostream &stream, three_d3 obj);
    friend istream &operator>>(istream &stream, three_d3 &obj);
};

// Отображение координат X, Y, Z
ostream &operator<<(ostream &stream, three_d3 obj)
{
    stream << obj.x << "__";
    stream << obj.y << "__";
    stream << obj.z << '\n';
    return stream;
}

// Прием трехмерных координат
istream &operator>>(istream &stream, three_d3 &obj)
{
    cout << QString::fromUtf8("Введите координат X, Y, Z: ").toLocal8Bit().data();
    stream >> obj.x >> obj.y >> obj.z;
    return stream;
}

void demo_friend_func_overload_op_cin()
{
    three_d3 a(1,2,3);

    cout << a;

    cin >> a;
    cout << a;
}
