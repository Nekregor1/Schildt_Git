#include <iostream>
#include <QTextCodec>
using namespace std;

const int IDLE2 = 0;
const int INUSE2 = 1;

class C2_2;     //  опережающее объявление

class C1_2 {
    int status;     // IDLE, если сообщение неактивно
                    // INUSE, если сообщение выведено на экран
public:
    void set_status(int state) {
        status = state;
    };
    int idle(C2_2 b);
};

class C2_2 {
    int status;
public:
    void set_status(int state) {
        status = state;
    };
    friend int C1_2::idle(C2_2 b);      // функция-"друг"
};

// Функция idle() - член класса С1_2 и "друг" класса С2_2
int C1_2::idle(C2_2 b)
{
    if (status || b.status)
        return 0;
    else
        return 1;
}

void demo_friend_func_in_class()
{
    C1_2 x;
    C2_2 y;

    x.set_status(IDLE2);
    y.set_status(IDLE2);

    if (x.idle(y))
        cout << QString::fromUtf8("Экран свободен.\n").toLocal8Bit().data();
    else
        cout << QString::fromUtf8("Отображается сообщение.\n").toLocal8Bit().data();

    x.set_status(INUSE2);

    if (x.idle(y))
        cout << QString::fromUtf8("Экран свободен.\n").toLocal8Bit().data();
    else
        cout << QString::fromUtf8("Отображается сообщение.\n").toLocal8Bit().data();
}
