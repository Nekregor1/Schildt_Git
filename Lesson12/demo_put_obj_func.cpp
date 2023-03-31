#include <iostream>
using namespace std;

class OBJ {
    int i;
public:
    void set_i(int x) {
        i = x;
    };
    void out_i() {
        cout << i << ' ';
    };
};

void f(OBJ x)
{
    x.out_i();      // Выводит число
    x.set_i(100);   // Устанавливает только локальную копию
    x.out_i();      // Выводит число 100
}

void demo_put_obj_func()
{
    OBJ o;
    o.set_i(10);
    f(o);
    o.out_i();      // По-прежнему выводит число 10 - значение переменной i не изменилось
    cout << '\n';

}
