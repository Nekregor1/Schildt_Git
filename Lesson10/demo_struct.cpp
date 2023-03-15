#include <iostream>
#include <QTextCodec>
using namespace std;

const int SIZE = 100;

struct inv_type
{
    char item[40];      // наименование товара
    double cost;        // стоимость
    double retail;      // розничная цена
    int on_hand;        // имеющееся в наличии количество
    int lead_time;      // число дней до пополнения запасов
} inv_try[SIZE];

void enter(), init_list(), display();
void update(), input(int i);
int menu();

int demo_struct()
{
    char choice;
    cout << QString::fromUtf8("Тест1\n").toLocal8Bit().data();
    init_list();


    for (;;) {
        choice = menu();
        return 0;
//        switch (choice) {
//        case 'e': enter();
//            break;
//        case 'd': display();
//            break;
//        case 'u': update();
//            break;
//        case 'q': return 0;
//        }
    }

}

// Инициализация массива структур
void init_list()
{
    int t;

    // Имя нулевой длины означает пустое имя
    for (t=0; t<SIZE; t++)
        *inv_try[t].item = '\0';
    cout << QString::fromUtf8("Тест2\n").toLocal8Bit().data();
}

// Получение команды меню, выбранной пользователем
int menu()
{
    char ch;

    cout << '\n';
    do {
        cout << QString::fromUtf8("(E)nter\n").toLocal8Bit().data();
        cout << QString::fromUtf8("(D)isplay\n").toLocal8Bit().data();
        cout << QString::fromUtf8("(U)pdate\n").toLocal8Bit().data();
        cout << QString::fromUtf8("(Q)uit\n\n").toLocal8Bit().data();
        cout << QString::fromUtf8("Выберите команду: ").toLocal8Bit().data();
        cin >> ch;

    } while(!strchr("eduq", tolower(ch)));
    return tolower(ch);
}
