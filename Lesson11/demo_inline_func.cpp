#include <iostream>
using namespace std;

class cl {
    int i;
public:
    int get_i();
    void put_i(int j);
};

inline int cl::get_i()
{
    return i;
}

inline void cl::put_i(int j)
{
    i = j;
}

void demo_inline_func()
{
    cl s;
    s.put_i(10);
    cout << s.get_i() << '\n';
}
