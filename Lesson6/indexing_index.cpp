#include <iostream>
#include <cctype>
#include <typeinfo>
using namespace std;

void indexing_index()
{
    char str[20] = "I love you";
    char *p;
    int i;
    double d= 12.33;

    p = str;
    // Идексируем указатель
    for (i=0; p[i]; i++)
        p[i] = toupper(p[i]);
    cout << p << ' ' << typeid (p).name() << '\n';
//    cout << d << ' ' << typeid (d).name() << '\n';
}
