#include <iostream>
#include <cstdio>
#include <cstring>
#include <string.h>
using namespace std;

void splitting_by_array()
{
    string temp;
//    char str[80];
    char token[80];
    int i, j;

    cout << "Введите предложение: ";
//    gets(str);
    getline(cin, temp);
    char str[temp.size()+1];
//    strcpy_s(str, temp.size()+1, temp.c_str());
    strcpy(str, temp.c_str());

    // Считываем лексему из строки
    for (i=0; ; i++){
        /* Считываем символы до тех пор, пока не встретится
         * либо пробел, либо нулевой символ (признак
         * завершения строки). */
        for (j=0; str[i]!=' ' && str[i]; j++, i++)
            token[j] = str[i];
        token[j] = '\0';    // Завершаем лексему нулевым символом
        cout << token << '\n';
        if (!str[i])
            break;
    }
}
