// Демонстрация наследования защищенного базового класса
#include <iostream>
using namespace std;

class base6 {
    int m_i;
protected:
    int m_j;
public:
    int m_k;
    void seti(int a) {m_i = a;}
    int geti() {return m_i;}
};

// Наследуем класс base6 как protected-класс
class devired6: protected base6 {
public:
    void setj(int a) {m_j = a;}     // j - здесь protected член
    void setk(int a) {m_k = a;}     // k - здесь protected член
    int getj() {return m_j;}
    int getk() {return m_k;}
};

void demo_protected_inherit()
{
    devired6 ob;
    /* Следующие строки неправомочны, поскольку функции
     * seti(), geti() и переменная k являются protected-членами
     *  класса derived6, что делает их недоступными за его пределами */
//    ob.seti(10);
//    cout << ob.geti();
//    ob.k = 10;

    // Следующие инструкции правомочны
    ob.setj(12);
    ob.setk(10);
    cout << ob.getj() << '\n';
    cout << ob.getk() << '\n';
}
