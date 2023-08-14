// Демонстрация использования обобщенного класса очереди
#include <iostream>
#include <QTextCodec>
using namespace std;

const int SIZE=100;

// Создание обобщенного класса queue
template <class QType> class queue {
    QType m_q[SIZE];
    int m_sloc, m_rloc;
public:
    queue() {m_sloc = m_rloc = 0;}
    void qput(QType i);
    QType qget();
};

// Занесение объекта в очередь
template <class QType> void queue<QType>::qput(QType i)
{
    if(m_sloc==SIZE) {
        cout << QString::fromUtf8("Очередь заполнена.\n").toLocal8Bit().data();
        return;
    }
    m_sloc++;
    m_q[m_sloc] = i;
}

// Извлечение объекта из очереди
template <class QType> QType queue<QType>::qget()
{
    if(m_rloc==m_sloc) {
        cout << QString::fromUtf8("Очередь пуста.\n").toLocal8Bit().data();
        return 0;
    }
    m_rloc++;
    return m_q[m_rloc];
}

void demo_template_class()
{
    queue<int> a, b;        // Создаем две очереди для целых чисел

    a.qput(10);
    b.qput(19);
    a.qput(20);
    b.qput(22);

    cout << a.qget() << " ";
    cout << a.qget() << "\n";
    cout << b.qget() << " ";
    cout << b.qget() << "\n";

    queue<double> c, d;     // Создаем две очереди для дабл-значений

    c.qput(10.12);
    c.qput(12.21);
    d.qput(34.35);
    d.qput(65.23);

    cout << c.qget() << " ";
    cout << c.qget() << "\n";
    cout << d.qget() << " ";
    cout << d.qget() << "\n";
}
