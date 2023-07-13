#include <iostream>
#include <cstdlib>
#include <ctime>
#include <QTextCodec>
using namespace std;

class timerUpd {
    int seconds;
public:
    // секунды задаваемые в виде строки
    timerUpd(char* t) {
        seconds = atoi(t);
    };
    timerUpd(int t) {
        seconds = t;
    };
    timerUpd(int min, int sec) {
        seconds = min*60 + sec;
    };
    void run();
};

void timerUpd::run()
{
    clock_t t1;
    t1 = clock();
    cout << QString::fromUtf8("Запуск таймера длительностью ").toLocal8Bit().data();
    cout << seconds;
    cout << QString::fromUtf8(" секунд.\n").toLocal8Bit().data();

    while ((clock()/CLOCKS_PER_SEC - t1/CLOCKS_PER_SEC) < seconds);     // ничего не делаем в течении seconds
    cout << '\a';
    cout << QString::fromUtf8("Прошло секунд: ").toLocal8Bit().data();
    cout << seconds << '\n';
}

void demo_dinam_init()
{
    timerUpd a(10);

    a.run();

    cout << QString::fromUtf8("Введите количество секунд: ").toLocal8Bit().data();
    char str[80];
    cin >> str;

    timerUpd b(str);        // инициализация в динамике
    b.run();

    cout << QString::fromUtf8("Введите минуты и секунды: ").toLocal8Bit().data();
    int min, sec;
    cin >> min >> sec;
    timerUpd c(min, sec);
    c.run();

}
