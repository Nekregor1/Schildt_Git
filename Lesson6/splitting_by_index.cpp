#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;

void splitting_by_index()
{
    string temp;
//    char str[80];
    char token[80];
    char *p, *q;

    cout << "Введите предложение: ";
//    gets(str);
    getline(cin, temp);
    p = new char [temp.length()+1];
    strcpy (p, temp.c_str());

//    p=str;

    // Считываем лексему из строки
    while(*p) {
        q = token;  // Устанавливаем q для укзания на
                    // начало массива token
        /* Считываем символы до тех пор, пока не встретится
         * либо пробел, либо нулевой символ (признак
         * завершения строки) */
        while (*p !=' ' && *p) {
            *q = *p;
            q++;
            p++;
        }
        if (*p)
            p++;    // Перемещаемся за пробел.
        *q = '\0';  // Завершаем лексему нулевым символом
        cout << token << '\n';
    }
}
