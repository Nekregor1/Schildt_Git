#include <iostream>
#include <QTextCodec>
using namespace std;

// Определение класса queue3
class queue3 {
    int q[100];
    int sloc, rloc;
    int who;        // содержит идентификационный номер очереди
public:
    queue3(int id); // параметризированный конструктор
    ~queue3();      // деструктор
    void qput(int i);
    int qget();
};

// Определение конструктора
queue3::queue3(int id)
{
    sloc = rloc = 0;
    who = id;
    cout << QString::fromUtf8("Очередь ").toLocal8Bit().data();
    cout << who;
    cout << QString::fromUtf8(" инициализированна.\n").toLocal8Bit().data();
}

// Определение деструктора
queue3::~queue3()
{
    cout << QString::fromUtf8("Очередь ").toLocal8Bit().data();
    cout << who;
    cout << QString::fromUtf8(" разрушена.\n").toLocal8Bit().data();
}

// Занесение в очередь целочисленного значения
void queue3::qput(int i)
{
    if (sloc==100) {
        cout << QString::fromUtf8("Очередь заполнена.\n").toLocal8Bit().data();
        return;
    }
    sloc++;
    q[sloc] = i;
}

// Извлеение из очереди целочисленного значения
int queue3::qget()
{
    if (rloc==sloc){
        cout << QString::fromUtf8("Очередь пуста.\n").toLocal8Bit().data();
        return 0;
    }
    rloc++;
    return q[rloc];
}

void demo_param_constr()
{
    queue3 a(1), b(2);      // Создание двух объектов класса queue3

    a.qput(10);
    b.qput(19);

    a.qput(20);
    b.qput(1);

    cout << a.qget() << ' ';
    cout << a.qget() << ' ';
    cout << b.qget() << ' ';
    cout << b.qget() << '\n';
}
