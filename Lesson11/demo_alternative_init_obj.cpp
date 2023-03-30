#include <iostream>
#include <QTextCodec>
using namespace std;

class myclass {
    int a;
public:
    myclass(int x);
    int get_a();
};

myclass::myclass(int x)
{
    a = x;
}

int myclass::get_a()
{
    return a;
}

void demo_alternative_init_obj()
{
    myclass ob = 4;     // вызов функции myclass(4)

    cout << ob.get_a() << '\n';

}
