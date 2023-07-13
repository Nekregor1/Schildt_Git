// Демонстрация использования функции-"друга"
#include <iostream>
using namespace std;

class myclass {
    int a, b;
public:
    myclass (int i, int j) {
        a = i;
        b = j;
    };
    friend int sum(myclass x);      // Функция sum() - "друг" класса myclass
};

// Функция sum() нне является членом ни одного класса
int sum(myclass x)
{
    /* Поскольку функция sum() - "друг" класса myclass, то
     * она имеет право на прямой доступ к его членам данных а и b */
    return x.a + x.b;
}

void demo_friend_func()
{
    myclass n(3,4);
    cout << sum(n)<< '\n';
}
