#include <iostream>
using namespace std;

class cl2 {
    int i;
public:
    // автоматически встраиваемые функции
    int get_i() {
        return i;
    }
    void put_i(int j) {
        i = j;
    };
};

void demo_inline_func_def_in_class()
{
    cl2 s;
    s.put_i(10);
    cout << s.get_i() << '\n';
}
