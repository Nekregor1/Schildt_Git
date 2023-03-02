#include <iostream>
#include <cstring>
#include <cctype>
#include <typeinfo>
using namespace std;

void stringupper(char *str);

void demo_func_string()
{
    char str[80];

    strcpy(str, "test");
//    for (int i=0; str[i]; i++)
//        str[i] = toupper(str[i]);

    stringupper(&str[0]);
    cout << str <<'\n';


}

void stringupper(char *str)
{
    while (*str){
        *str = toupper(*str);   // содержимое по указателю str переводим в верхний регистр
        str++;      // сдвигаем указатель на следующий
    }
}
