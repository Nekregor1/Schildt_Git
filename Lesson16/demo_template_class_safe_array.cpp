// Пример создания и использования обобщенного
// безопасного массива
#include <iostream>
#include <cstdlib>
#include <QTextCodec>
using namespace std;

const int SIZE = 10;

template <class AType> class atype {
    AType m_a[SIZE];
public:
    atype() {
        for(int i=0; i<SIZE; i++) m_a[i] = i;
    }
    AType &operator[](int i);
};

// Обеспечение контроля границ для класса atype
template <class AType> AType &atype<AType>::operator[](int i)
{
    if(i<0 || i>SIZE) {
        cout << QString::fromUtf8("\nЗначение индекса ").toLocal8Bit().data();
        cout << i;
        cout << QString::fromUtf8(" за пределами границ массива.\n").toLocal8Bit().data();
        exit(1);
    }
    return m_a[i];
}

void demo_template_class_safe_array()
{
    atype<int> intob;       // массив int-значений
    atype<double> doubleob; // массив double-значений

    int i;
    cout << QString::fromUtf8("Массив int-значений: ").toLocal8Bit().data();
    for(i=0; i<SIZE; i++) intob[i] = i;
    for(i=0; i<SIZE; i++) cout << intob[i] << ' ';
    cout << '\n';

    cout << QString::fromUtf8("Массив double-значений: ").toLocal8Bit().data();
    for(i=0; i<SIZE; i++) doubleob[i] = i;
    for(i=0; i<SIZE; i++) cout << doubleob[i] << ' ';
    cout << '\n';

    intob[12] = 100;        // Ошибка времени выполнения
}
