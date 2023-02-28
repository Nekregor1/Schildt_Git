#include <iostream>
#include <cstdlib>
using namespace std;

void find_min_max_in_array()
{
    int i, min_value, max_value;
    int N = 10;
    int list[N];
    int min_rand = 0;
    int max_rand = 1000;

    cout << "Исходный массив:\n";
    for (i=0; i<N; i++){
        list[i] = min_rand + rand() % (max_rand - min_rand +1);
        cout << list[i] << ' ';
    }

    // Находим минимальное и максимальное значение
    min_value = list[0];
    max_value = list[0];
    for (i=1; i<N; i++){
        if (min_value > list[i])
            min_value = list[i];
        if (max_value < list[i])
            max_value = list[i];
    }

    cout << "\nМинимальное значение: " << min_value << '\n';
    cout << "Максимальное значение: " << max_value << '\n';

}
