// Демонстрация использования шаблонных
// аргументов по умолчанию
#include <iostream>
#include <cstdlib>
#include <QTextCodec>
using namespace std;

// Здесь параметр AType по умолчанию принимает тип int
// а параметр size по умолчанию устанавливается равным 10
template <class Atype=int, int size=10> class atype {
    Atype m_a[size];
public:
    atype() {
        for(int i=0; i<size; i++) {m_a[i] = i;}
    }
    Atype &operator[](int i);
    int atypesize() {return size;}
};

// Обеспечение контроля границ для класса atype
template <class Atype, int size>
Atype &atype<Atype, size>::operator[](int i) {
    if(i<0 || i>size) {
        cout << QString::fromUtf8("\nЗначение индекса ").toLocal8Bit().data();
        cout << i;
        cout << QString::fromUtf8(" за пределами границ массива.\n").toLocal8Bit().data();
        exit(1);
    }
    return m_a[i];
}

void demo_template_class_default_args()
{
    atype<int, 20> intarray;
    atype<double> doublearray;
    atype<> defarray;

    int i;
    cout << QString::fromUtf8("Массив int-значений: ").toLocal8Bit().data();
    for(i=0; i<intarray.atypesize(); i++) intarray[i] = i;
    for(i=0; i<intarray.atypesize(); i++) cout << intarray[i] << ' ';
    cout << '\n';

    cout << QString::fromUtf8("Массив double-значений: ").toLocal8Bit().data();
    for(i=0; i<doublearray.atypesize(); i++) doublearray[i] = i;
    for(i=0; i<doublearray.atypesize(); i++) cout << doublearray[i] << ' ';
    cout << '\n';

    cout << QString::fromUtf8("Массив по умолчанию: ").toLocal8Bit().data();
    for(i=0; i<defarray.atypesize(); i++) defarray[i] = i;
    for(i=0; i<defarray.atypesize(); i++) cout << defarray[i] << ' ';
    cout << '\n';
}
