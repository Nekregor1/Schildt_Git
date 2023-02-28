#include <iostream>
#include <cstdlib>
using namespace std;

void bubble_sort()
{
    int size = 10;
    int nums[size];
    int a, b, t;
    int min = -100;
    int max = 100;
    // Формируем массив из случайных чисел и сразу выведем его
    cout << "Исходный массив\n";
    for (t=0; t<size; t++){
        nums[t] = min + rand() % (max - min +1);
        cout << nums[t] << ' ';
    }

    // Реализация метода пузырьковой сортировки
    for (a=1; a<size; a++)
        for (b=size-1; b>=a; b--){
            if (nums[b-1] > nums[b]) {// Элементы не упорядочены , след. нужно поменять местами
                t = nums[b-1];
                nums[b-1] = nums[b];
                nums[b] = t;
            }
        }
    // Отображение отсортированного массива
    cout << "\nОтсортированный массив\n";
    for (t=0; t<size; t++)
        cout << nums[t] << ' ';
    cout << '\n';
}
