#include <iostream>
#include <cstring>
using namespace std;

char *keyword[][2] = {
    "for", "for(инициализация; условие; инкремент)",
    "if", "if(условие)... else ...",
    "switch", "switch(значение) {case-список}",
    "while", "while(условие) ...",
    "", ""
};
void demo2dim_array_index()
{
    char str[80];
    int i;

    cout << "Введите ключевое слово: ";
    cin >> str;

    // Отображаем синтаксис
    for (i=0; *keyword[i][0]; i++)
        if(!strcmp(keyword[i][0], str))
            cout << keyword[i][1] <<'\n';
}
