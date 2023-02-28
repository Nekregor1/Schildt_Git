#include <iostream>
#include <cstring>
using namespace std;

void demo_strcat()
{
    char s1[60], s2[20];
    strcpy(s1, "Привет");
    strcpy(s2, " всем!");
    strcat(s1, s2);
    cout << s1 << '\n';
}
