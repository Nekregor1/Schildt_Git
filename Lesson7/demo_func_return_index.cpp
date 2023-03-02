#include <iostream>
using namespace std;

char* find_substr(char* sub, char* str);

void demo_func_return_index()
{
    char* substr;
    substr = find_substr("four", "zero one two three four");
    cout << "Найденная подстрока: " << substr << '\n';
}

// Функция возвращает указатель на искомую подстроку или
// нуль, если таковая не будет найдена

char* find_substr(char* sub, char* str)
{
    int t;
    char* p, *p2, *start;

    for (t=0; str[t]; t++) {
        p = &str[t];    // установка указателей
        start = p;
        p2 = &sub[0];
        while (*p2 && *p2 == *p) {
            p++;
            p2++;
        }
        // Если достигнут конец р2-подстроки, то эта
        // подстрока была найдена
        if (!*p2)
            return start;       // Возвращаем указатель найденной подстроки

    }
    return 0;
}
