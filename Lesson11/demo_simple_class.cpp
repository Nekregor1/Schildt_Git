#include <iostream>
#include <QTextCodec>
using namespace std;

// Создание класса queue
class queue {
    int q[100];
    int sloc, rloc;
public:
    void init();
    void qput(int i);
    int qget();
};

// Инициализация класса queue
void queue::init()
{
    rloc = sloc = 0;
}

// Занесение в очередь целочисленного значения
void queue::qput(int i)
{
    if (sloc == 100) {
        cout << QString::fromUtf8("Очередь заполнена.\n").toLocal8Bit().data();
        return;
    }
    sloc++;
    q[sloc] = i;
}

// Извлечение из очереди целочисленного значения
int queue::qget()
{
    if (rloc == sloc) {
        cout << QString::fromUtf8("Очередь пуста.\n").toLocal8Bit().data();
        return 0;
    }
    rloc++;
    return q[rloc];
}

void demo_simple_class()
{
    queue a, b;     // Создание двух объектов класса queue

    a.init();
    b.init();

    a.qput(10);
    b.qput(19);

    a.qput(20);
    b.qput(1);

    cout << QString::fromUtf8("Содержимое очереди a: ").toLocal8Bit().data();
    cout << a.qget() << ' ';
    cout << a.qget() << '\n';

    cout << QString::fromUtf8("Содержимое очереди b: ").toLocal8Bit().data();
    cout << b.qget() << ' ';
    cout << b.qget() << ' ';
    cout << b.qget() << '\n';
}
