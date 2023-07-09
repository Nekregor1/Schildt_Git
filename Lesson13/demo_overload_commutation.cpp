// Перегрузка оператора сложения объекта и встроенного типа
#include <iostream>
using namespace std;

class CL {
public:
    int m_count;
    CL operator=(CL obj);
    friend CL operator+(CL obj, int i);
    friend CL operator+(int i, CL obj);
};

CL CL::operator=(CL obj)
{
    m_count = obj.m_count;
    return *this;
}

// Эта версия орабатывает аргументы объект + int-значение
CL operator+(CL obj, int i)
{
    CL temp;
    temp.m_count = obj.m_count + i;
    return temp;
}

// Эта версия обрабатывает аргументы int-значение + объект
CL operator+(int i, CL obj)
{
    CL temp;
    temp.m_count = i + obj.m_count;
    return temp;
}

void demo_overload_commutation()
{
    CL O;
    O.m_count = 10;
    cout << O.m_count << " ";       // Выводится "10"

    O = 10 + O;                     // сложение числа с объктом
    cout << O.m_count << " ";       // Выводится "20"

    O = O + 12;                     // сложение объекта с числом
    cout << O.m_count << '\n';      // Выводится "32"

}
