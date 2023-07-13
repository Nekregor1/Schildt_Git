// Пример организации безопасного массива
#include <iostream>
#include <cstdlib>
#include <QTextCodec>
using namespace std;

const int SIZE = 3;

class atype3 {
    int m_a[SIZE];
public:
    atype3() {
        int i;
        for(i=0; i<SIZE; i++) m_a[i] = i;
    }
    int &operator[](int i);
};

// Обеспечение контроля попадания в допустимый
// интервал для класса atype3
int &atype3::operator[](int i)
{
    if(i<0 || i>SIZE-1) {
        cout << QString::fromUtf8("\nЗначение индекса ").toLocal8Bit().data();
        cout << i;
        cout << QString::fromUtf8(" выходит за границы массива.\n").toLocal8Bit().data();
        exit(1);
    }
    return m_a[i];
}

void demo_overload_safe_array()
{
    atype3 ob;

    cout << ob[2] << '\n';      // Отображает 2

    ob[2] = 25;
    cout << ob[2] << '\n';      // Отображает 25

    ob[3] = 55;     // Генерируется ошибка времени выполнения
}
