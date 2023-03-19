#include <iostream>
#include <QTextCodec>
using namespace std;

const int SIZE = 2;

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
void clean();
int menu();

int demo_struct()
{
    char choice;
    init_list();


    for (;;) {
        choice = menu();
        switch (choice) {
        case 'e': enter();
            break;
        case 'd': display();
            break;
        case 'u': update();
            break;
        case 'c': clean();
            break;
        case 'q': return 0;
        }
    }

}

// Инициализация массива структур
void init_list()
{
    int t;

    // Имя нулевой длины означает пустое имя
    for (t=0; t<SIZE; t++)
        *inv_try[t].item = '\0';
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
        cout << QString::fromUtf8("(C)lean\n").toLocal8Bit().data();
        cout << QString::fromUtf8("(Q)uit\n\n").toLocal8Bit().data();
        cout << QString::fromUtf8("Выберите команду: ").toLocal8Bit().data();
        cin >> ch;

    } while(!strchr("educq", tolower(ch)));
    return tolower(ch);
}


// Ввод элементов в инвентарную ведомость
void enter()
{
    int t;
    // Находим первую свободную структуру
    for (t=0; t<SIZE; t++)
        if (!*inv_try[t].item)
            break;
    // Если массив полон, то выводи предупреждение
    if (t==SIZE) {
        cout << QString::fromUtf8("Список полон.").toLocal8Bit().data();
        return;
    }
    input(t);
}


// Ввод информации
void input(int i)
{
    cout << QString::fromUtf8("Товар: ").toLocal8Bit().data();
    cin >> inv_try[i].item;
    cout << QString::fromUtf8("Стоимость: ").toLocal8Bit().data();
    cin >> inv_try[i].cost;
    cout << QString::fromUtf8("Розничная цена: ").toLocal8Bit().data();
    cin >> inv_try[i].retail;
    cout << QString::fromUtf8("В наличии: ").toLocal8Bit().data();
    cin >> inv_try[i].on_hand;
    cout << QString::fromUtf8("Время до пополнения запасов: ").toLocal8Bit().data();
    cin >> inv_try[i].lead_time;

}

// Модификация существующего элемента
void update()
{
    int i;
    char name[80];
    cout << QString::fromUtf8("Введите наименование товара, который нужно изменить: ").toLocal8Bit().data();
    cin >> name;

    for (i=0; i<SIZE; i++)
        if (!strcmp(name, inv_try[i].item))
            break;
    if (i==SIZE) {
        cout << QString::fromUtf8("Товар не найден.\n").toLocal8Bit().data();
        return;
    }
    cout << QString::fromUtf8("Введите новую информацию.\n").toLocal8Bit().data();
    input(i);
}

// Отображение на экране инвентарной ведомости
void display()
{
    int i;

    if (!*inv_try[0].item)
        cout << QString::fromUtf8("Список товар пуст.\n").toLocal8Bit().data();
    for (i=0; i<SIZE; i++) {
        if (*inv_try[i].item) {
            cout << QString::fromUtf8("Товар ").toLocal8Bit().data();
            cout << (i+1) << QString::fromUtf8(" из ").toLocal8Bit().data();
            cout << SIZE << '\n';
            cout << QString::fromUtf8("Наименование: ").toLocal8Bit().data();
            cout << inv_try[i].item << '\n';
            cout << QString::fromUtf8("Стоимость: $ ").toLocal8Bit().data();
            cout << inv_try[i].cost << '\n';
            cout << QString::fromUtf8("Розничная цена: $ ").toLocal8Bit().data();
            cout << inv_try[i].retail << '\n';
            cout << QString::fromUtf8("В наличии: ").toLocal8Bit().data();
            cout << inv_try[i].on_hand << '\n';
            cout << QString::fromUtf8("До пополнения осталось: ").toLocal8Bit().data();
            cout << inv_try[i].lead_time;
            cout << QString::fromUtf8(" дней.\n\n").toLocal8Bit().data();
        }
    }
}

void clean()
{
    init_list();
    return;
}
