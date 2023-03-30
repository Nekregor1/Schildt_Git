#include <iostream>
using namespace std;

class sampL {
    int a, b;
public:
    sampL(int n, int m) {
        a = n;
        b = m;
    };
    int get_a() {
        return a;
    };
    int get_b() {
        return b;
    };
};

void demo_long_init_array_obj()
{
    sampL sampArray[4][2] = {
        {sampL(1,2), sampL(3,4)},
        {sampL(5,6), sampL(7,8)},
        {sampL(9,10), sampL(11,12)},
        {sampL(13,14), sampL(15,16)}
    };
    sampL temp(17,18);
    int i;
    for (i=0; i<4; i++) {
        cout << sampArray[i][0].get_a() << ' ';
        cout << sampArray[i][0].get_b() << '\n';
        cout << sampArray[i][1].get_a() << ' ';
        cout << sampArray[i][1].get_b() << '\n';
    }
    cout << '\n';
}
