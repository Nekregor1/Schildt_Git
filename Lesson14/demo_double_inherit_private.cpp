#include <iostream>
using namespace std;

class base5 {
protected:
    int m_i, m_j;
public:
    void set(int a, int b) {m_i = a; m_j = b;}
    void show() {cout << m_i << ' ' << m_j << '\n';}
};

// Теперь все элементы класса base5 будут закрыты
// в рамках класса derived5_1
class derived5_1: private base5 {
    int m_k;
public:
    // Вызовы этих функций вполне законны, поскольку
    // переменные m_i m_j являются одновременно
    // private-членами класса derived5_1
    void setk() {m_k = m_i * m_j;}
    void showk() {cout << m_k << '\n';}
    // Самодельные функции для доступа к закрытым членам класса
    void setij(int x, int y) {set(x, y);}
    int* getij() {
        int temp[2];
        temp[0] = m_i;
        temp[1] = m_j;
        return temp;
    }
    void showij() {show();}
};

// Доступ к членам m_i, m_j, set(), show() не наследуется
class derived5_2: public derived5_1 {
    int m_m;
public:
    // Неверно, поскольку члены m_i, m_j закрыты в рамках
    // класса derived5_1
//    void setm() {m_m = m_i - m_j;}
    void showm() {cout << m_m << '\n';}
    // Самодельная функция для доступа к закрытым членам
    void setm() {m_m = getij()[0] - getij()[1];}

};

void demo_double_inherit_private()
{
    derived5_1 ob1;
    derived5_2 ob2;

    ob1.setij(1, 2);
    ob1.showij();

    ob2.setij(3, 4);
    ob2.showij();
}
