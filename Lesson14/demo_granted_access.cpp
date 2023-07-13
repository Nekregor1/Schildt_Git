#include <iostream>
using namespace std;

class base10 {
    int m_i;        // private-член в классе base10
public:
    int m_j, m_k;
    void seti(int x) {m_i = x;}
    int geti() {return m_i;}
};

// Класс base наследуется как private-класс
class derived10: private base10 {
public:
    /* Следующие три инструкции переопределяют
     * private-наследование класса base10 и
     * восстанавливают public-статус доступа для
     * членов j, seti() geti() */
    base10::m_j;
    base10
};
