#include <iostream>
using namespace std;

class samp {
    int a;
public:
    samp(int n) {
        a = n;
    };
    int get_a() {
        return a;
    };
};

void demo_init_array_obj()
{
    samp sampArray[4] = {-1, -2, -3, -4};
    samp temp = -5;
    int i;
    for (i=0; i<4; i++)
        cout << sampArray[i].get_a() << ' ';
    cout << temp.get_a() << ' ';
    cout << '\n';
}
