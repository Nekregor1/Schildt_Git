#include <iostream>
using namespace std;

void demo_switch()
{
    int choice;

    cout << " Справка по темам:\n\n";
    cout << "1. for\n";
    cout << "2. if\n";
    cout << "3. switch\n\n";

    cout << "Введите номер темы (1-3)";
    cin >> choice;
    cout << '\n';

    switch(choice){
        case 1:
            cout << "for - это самый универсальный цикл в С++.\n";
            break;
        case 2:
            cout << "if - это инструкция условного ветвления.\n";
            break;
        case 3:
            cout << "switch - это инструкция многонаправленного ветвления.\n";
            break;
        default:
            cout << "Вы должны ввести число от 1 до 3.\n";
    }

}
