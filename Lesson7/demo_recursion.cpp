#include <iostream>
using namespace std;

void reverse(char* s);

void demo_recursion()
{
    char str[] = "This is test";
    reverse(&str[0]);
    cout << '\n';
}

// Вывод строки в обратном порядке
void reverse(char* s)
{
    if (*s)
        reverse(s+1);
    else
        return;
    cout << *s;
}
