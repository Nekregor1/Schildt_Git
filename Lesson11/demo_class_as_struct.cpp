#include <iostream>
using namespace std;

class cl2 {
    int i;
public:
    int get_i();
    void put_i(int j);
};

int cl2::get_i()
{
    return i;
}

void cl2::put_i(int j)
{
    i = j;
}

void demo_class_as_struct()
{
    cl2 s;
    s.put_i(10);
    cout << s.get_i() << '\n';
}
