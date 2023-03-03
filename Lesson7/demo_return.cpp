#include <iostream>
using namespace std;

int find_substr2(char* sub, char* str);

void demo_return()
{
    int index;
//    index = find_substr("two", "zero one two three");
    index = find_substr2(" два", "один два три четыре");
    cout << "Индекс равен " << index << '\n';
}

// Функция возвращает индекс искомой подстроки или -1
// если она не была найдена
int find_substr2(char* sub, char* str)
{
    int t;
    char* p;
    char* p2;
    for (t=0; str[t]; t=t+2){
        p = &str[t];    // установка указателей
        p2 = &sub[0];
        while (*p2 && *p2 == *p) {
            p++;
            p2++;
        }
        // Если достигнут конец р2-строки (т.е. подстроки)
        // то подстрока была найдена
        if (!*p2)
            return t/2+1;       // Возвращаем индекс подстроки
    }
    return -1;      // Подстрока не была обнаружена
}
