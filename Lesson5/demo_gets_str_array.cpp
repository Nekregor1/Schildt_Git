#include <iostream>
#include <cstdio>
using namespace std;

void demo_gets_str_array()
{
    int t, i;
    char text[10][80];

    for (t=0; t<10; t++){
        cout << t << ": ";
        gets(text[t]);
        if (!text[t][0])
            break;
    }
    // Отображение строк на экране
    for (i=0; i<t; i++)
        cout << text[i] << '\n';

}
