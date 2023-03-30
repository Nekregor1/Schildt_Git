#include <iostream>
using namespace std;

union u_type {
    u_type(short int a);        // открытые члены по умолчанию
    void showchars();
    short int i;
    char ch[2];
};

// конструктор
u_type::u_type(short int a)
{
    i = a;
}

// Отображение символов, составляющих значение типа short int
void u_type::showchars()
{
    cout << ch[0] << ' ';
    cout << ch[1] << '\n';
}

void demo_union_as_class()
{
    u_type u(10110);
    u.showchars();
}
