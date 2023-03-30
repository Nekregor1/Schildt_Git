// Использование структуры для создания класса
#include <iostream>
using namespace std;

struct cl {
    int get_i();                // Эти члены открыты (public)
    void put_i(int j);      // по умолчанию
private:
    int i;
};

int cl::get_i()
{
    return i;
}

void cl::put_i(int j)
{
    i = j;
}

void demo_struct_as_class()
{
    cl s;
    s.put_i(10);
    cout << s.get_i() << '\n';
}
