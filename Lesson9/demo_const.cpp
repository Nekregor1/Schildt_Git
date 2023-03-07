#include <iostream>
using namespace std;

void code(const char* str);

void demo_const()
{
    cout << "This is test\n";
    code("This is test");
    cout << '\n';

}

/* Использование спецификатора const гарантирует, что str
 * не может изменить аргумент, на который он указывает */
void code(const char* str)
{
    while (*str) {
        cout << (char) (*str+1);
        str++;
    }
}
