#include <iostream>
using namespace std;

char name[5][80];
char phone[5][20];
float hours[5];
float wage[5];

int menu();
void enter(), report();

void demo_use_str_array(){
    int choice;
    do {
        choice = menu();
        switch(choice){
            case 0: break;
            case 1: enter();
                break;
            case 2: report();
                break;
            default: cout << "Попробуйте ещё раз.\n";
        }
    } while(choice != 0);
}

// Функция возвращает команду, выбранную пользователем
int menu()
{
    int choice;
    cout << "0. Выход из программы\n";
    cout << "1. Ввод информации\n";
    cout << "2. Генерирование отчета\n";
    cout << "\nВыберите команду: ";
    cin >> choice;
    return choice;
}

// Функция ввода информации в базу данных
void enter()
{
    int i;
//    char temp[80];
    for (i=0; i<5; i++){
        cout << "Введите фамилию: ";
        cin >> name[i];
        cout << "Введите номер телефона: ";
        cin >> phone[i];
        cout << "Введите количество отработанных часов: ";
        cin >> hours[i];
        cout << "Введите оклад: ";
        cin >> wage[i];
    }
}

// Отображение отчета
void report()
{
    int i;
    for (i=0; i<5; i++){
        cout << name[i] << ' ' << phone[i] << '\n';
        cout << "Заработная плата за неделю: "
             << wage[i] * hours[i];
        cout << '\n';
    }
}
