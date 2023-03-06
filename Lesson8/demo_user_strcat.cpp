#include <iostream>
#include <cstring>
#include <QTextCodec>
using namespace std;

void mystrcat(char* s1, char* s2, int len = -1);

void demo_user_strcat()
{
#ifdef Q_OS_WIN32
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#endif
#ifdef Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

    char str1[80] = "Это тест.";
    char str2[80] = "0123456789";

    mystrcat(str1, str2, 5);        // Присоединим 5 элементов
    cout << str1 << '\n';

    strcpy(str1, "Это тест.");      // Восстанавливаем str1

    mystrcat(str1, str2);           // Присоединяем всю строку
    cout << str1 << '\n';

}

// Пользовательская версия функции strcat()
void mystrcat(char* s1, char* s2, int len)
{
    // Находим конец строки s1 (перемещаем указатель в конец s1)
    while (*s1)
        s1++;
    if (len == -1)
        len = strlen(s2);
    while (*s2 && len) {
        *s1 = *s2;      // Копируем символы
        s1++;
        s2++;
        len--;
    }
    *s1 = '\0';         // Завершаем строку s1 нулевым символом
}
