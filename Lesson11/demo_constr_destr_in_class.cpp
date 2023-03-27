#include <iostream>
#include <QTextCodec>
using namespace std;

// Определение класса queue
class queue {
    int q[100];
    int sloc, rloc;
public:
    queue();    // конструктор
    ~queue();   // деструктор
    void qput(int i);
    int qget();
};

// Определение конструктора
queue::queue()
{
    sloc = rloc = 0;
    cout << QString::fromUtf8("Очередь инициализированна.\n").toLocal8Bit().data();
}

// Определение деструктора
queue::~queue()
{
    cout << QString::fromUtf8("Очередь разрушена.\n").toLocal8Bit().data();
}

// Занесение в очередь целочисленного значения
void queue::qput(int i)
{
    if (sloc==100) {
        cout << QString::fromUtf8("Очередь заполнена.\n").toLocal8Bit().data();
        return;
    }
    sloc++;
    q[sloc] = i;
}

// Извлечение из очереди целочисленного значения.
int queue::qget()
{
    if (rloc==sloc) {
        cout << QString::fromUtf8("Очередь пуста.\n").toLocal8Bit().data();
        return 0;
    }
    rloc++;
    return q[rloc];
}

void demo_constr_destr_in_class()
{
    queue a, b;     // Создание двух объектов класса queue

    a.qput(10);
    b.qput(19);

    a.qput(20);
    b.qput(1);
    cout << a.qget() << ' ';
    cout << a.qget() << '\n';
    cout << b.qget() << ' ';
    cout << b.qget() << '\n';

}
