// Использование в шаблоне аргументов, которые
// не являются типами.
#include <iostream>
#include <cstdlib>
#include <QTextCodec>;
using namespace std;

// Здесь элемент int size - это аргумент,
// не являющийся типом

template <class AType, int size> class atype {
    AType m_a[size];      // В аргументе size передается длина массива
public:
    atype() {
        for(int i=0; i<size; i++) {m_a[i]=i;}
    }
    AType &operator[](int i);
    int atypesize() {return size;}
};

// Обеспечение контроля границ для класса atype
template <class AType, int size>
AType &atype<AType, size>::operator[](int i)
{
    if (i<0 || i>size) {
        cout << QString::fromUtf8("\nЗначение индекса ").toLocal8Bit().data();
        cout << i;
        cout << QString::fromUtf8(" за пределами границ массива.\n").toLocal8Bit().data();
        exit(1);
    }
    return m_a[i];
}

void demo_template_class_notype_args()
{
    atype<int, 10> intob;       // 10-элементный массив целых чисел
    atype<double, 15> doubleob;     // 15-элементный массив дабл-значений

    int i;
    cout << QString::fromUtf8("Массив int-значений: ").toLocal8Bit().data();
    for(i=0; i<intob.atypesize(); i++) intob[i] = i;
    for(i=0; i<intob.atypesize(); i++) cout << intob[i] << ' ';
    cout << '\n';

    cout << QString::fromUtf8("Массив double-значений: ").toLocal8Bit().data();
    for(i=0; i<doubleob.atypesize(); i++) doubleob[i] = i;
    for(i=0; i<doubleob.atypesize(); i++) cout << doubleob[i] << ' ';
    cout << '\n';
}
