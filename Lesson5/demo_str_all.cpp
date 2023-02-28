#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void demo_str_all()
{
    char s1[80], s2[80];
    cout << "Введите две строки: ";
    gets(s1);
    gets(s2);

    cout << "Их длины равны: " << strlen(s1);
    cout << " " << strlen(s2) << '\n';

    if (!strcmp(s1, s2))
        cout << "Строки равны\n";
    else
        cout << "Строки не равны\n";

    strcat(s1, s2);
    cout << s1 << '\n';

    strcpy(s1, s2);
    cout << s1 << " и " << s2 << ' ';
    cout << "теперь равны\n";
}
