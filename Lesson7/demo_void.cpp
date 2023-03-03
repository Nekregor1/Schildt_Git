#include <iostream>
using namespace std;

void print_vertical(char* str);

void demo_void(int argc, char* argv[])
{
    if (argc==2)
        print_vertical(&argv[1][0]);
}

void print_vertical(char* str)
{
    while (*str)
        cout << *(str++) << '\n';
}
