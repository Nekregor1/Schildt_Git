#include <iostream>
using namespace std;

void total(int x);

void total_main()
{
    cout << "Вычисление суммы чисел от 1 до 5.\n";
    total(5);
    cout << "Вычисление суммы чисел от 1 до 6.\n";
    total(6);
}

void total(int x)
{
    int sum = 0;    // иницилизируем переменную sum
    int i, count;

    for(i=1; i<=x; i++) {
        sum = sum + i;
        for(count=0; count<10; count++)
            cout << '.';
        cout << "Промежуточная сумма равна " << sum << '\n';
    }

}
