// Перегрузка оператора индексации массивов "[]"
#include <iostream>
using namespace std;

const int SIZE = 3;

class atype {
    int m_a[SIZE];
public:
    atype() {
        int i;
        for(i=0; i<SIZE; i++) m_a[i] = i;
    }
    int operator[](int i) {
        return m_a[i];
    }
};

void demo_overload_binar_oper()
{
    atype ob;
    cout << ob[2] << '\n';      // Отображает число 2
}
