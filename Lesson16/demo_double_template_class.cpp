/* Здесь используется два обобщенных типа данных
 * в определении класса */
#include <iostream>
using namespace std;

template <class Type1, class Type2> class myclass {
    Type1 m_i;
    Type2 m_j;
public:
    myclass(Type1 a, Type2 b) {m_i = a; m_j = b;}
    void show() {cout << m_i << ' ' << m_j << '\n';}
};

void demo_double_template_class()
{
    myclass<int, double> ob1(10, 0.23);
    myclass<char, char*> ob2('x', "Это тест");

    ob1.show();
    ob2.show();
}
