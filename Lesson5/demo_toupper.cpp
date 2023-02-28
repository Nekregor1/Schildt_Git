#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void demo_toupper()
{
    char str[80];
    int i;

    strcpy(str, "test");
    for (i=0; str[i]; i++)
        str[i] = toupper(str[i]);
    cout << str <<'\n';
}
