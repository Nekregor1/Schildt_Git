#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class timer {
    int seconds;
public:
    // секунды, задаваемые в виде строки
    timer(char *t) {
        seconds = atoi(t);
    };
    // секунды, задаваемые в виде целого числа
    timer(int t) {
        seconds = t;
    };
    // время, задаваемое в минутах и секундах
    timer(int min, int sec) {
        seconds = min*60 + sec;
    };
    void run();
};

void timer::run()
{
    clock_t t1;
    t1 = clock();
    while ((clock()/CLOCKS_PER_SEC - t1/CLOCKS_PER_SEC) < seconds);     // ничего не делаем - нужно количество секунд
    cout << "\a" << seconds << '\n';
}

void demo_overload_constr()
{
    timer a(10), b("20"), c(1,2);

    a.run();        // отсчет 10 секунд
    b.run();        // отсчет 20 секунд
    c.run();        // отсчет 61 секунды

}
