#include <iostream>
using namespace std;

bool my_xor(bool a, bool b);

void demo_bool()
{
    bool p, q;
    cout << "Введите Р (0 или 1): ";
    cin >> p;
    cout << "Введите Q (0 или 1): ";
    cin >> q;

    cout << "P И Q: " << (p && q) << '\n';
    cout << "P ИЛИ Q: " << (p || q) << '\n';
    cout << "P XOR Q: " << my_xor(p, q) << '\n';
}

bool my_xor(bool a, bool b)
{
    return (a || b) && !(a && b);
}
