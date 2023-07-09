// Возврат ссылки из операторной функции operator[]
#include <iostream>
using namespace std;

const int SIZE = 3;

class atype2 {
    int m_a[SIZE];
public:
    atype2() {
        int i;
        for(i=0; i<SIZE; i++) m_a[i] = i;
    }
    int &operator[](int i) {
        return m_a[i];
    }
};

void demo_overload_return_link()
{
    atype2 ob;
    cout << ob[2] << '\n';      // Отображает число 2

    ob[2] = 25;         // Оператор "[]" стоит слева от оператора "="

    cout << ob[2] << '\n';
}
