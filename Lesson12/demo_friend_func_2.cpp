#include <iostream>
#include <QTextCodec>
using namespace std;

const int IDLE = 0;
const int INUSE = 1;

class C2;       // опережающее объявление
class C1 {
    int status;     // IDLE, если сообщение неактивно,
                    // INUSE, если сообщение выведено на экран
public:
    void set_status(int state);
    friend int idle(C1 a, C2 b);
};

class C2 {
    int status;     // IDLE, если сообщение неактивно,
                    // INSUE, если сообщение выведено на экран
public:
    void set_status(int state);
    friend int idle(C1 a, C2 b);
};

void C1::set_status(int state)
{
    status = state;
}

void C2::set_status(int state)
{
    status = state;
}

// Функция idle() - "друг" для классов С1 и С2
int idle(C1 a, C2 b)
{
    if (a.status || b.status)
        return 0;
    else
        return 1;
}

void demo_friend_func_2()
{
    C1 x;
    C2 y;

    x.set_status(IDLE);
    y.set_status(IDLE);

    if(idle(x,y))
        cout << QString::fromUtf8("Экран свободен.\n").toLocal8Bit().data();
    else
        cout << QString::fromUtf8("Отображается сообщение.\n").toLocal8Bit().data();

    x.set_status(INUSE);

    if(idle(x,y))
        cout << QString::fromUtf8("Экран свободен.\n").toLocal8Bit().data();
    else
        cout << QString::fromUtf8("Отображается сообщение.\n").toLocal8Bit().data();
}
