// Использование указателей на базовый класс для
// доступа к объектам производных классов
#include <iostream>
#include <cstring>
#include <QTextCodec>
using namespace std;

class B_class {
    char m_author[80];
public:
    void put_author(char* s) {strcpy(m_author, s);}
    void show_author() {
        cout << QString::fromUtf8(m_author).toLocal8Bit().data();
        cout << "\n";
    }
};

class D_class: public B_class {
    char m_title[80];
public:
    void put_title(char* s) {strcpy(m_title, s);}
    void show_title() {
        cout << QString::fromUtf8("Название: ").toLocal8Bit().data();
        cout << QString::fromUtf8(m_title).toLocal8Bit().data();
        cout << "\n";
    }

};

void demo_index_to_derived_class()
{
    B_class *p;
    B_class B_ob;

    D_class *dp;
    D_class D_ob;

    p = &B_ob;      // адрес объекта базового класса

    // Доступ к классу B_class через указатель
    p->put_author("Эмиль Золя");

    // Доступ к классу D_class через "базовый" указатель
    p = &D_ob;
    p->put_author("Уильям Шекспир");

    // Покажем, что каждй автор относится к соответствующему объекту

    B_ob.show_author();
    D_ob.show_author();
    cout << "\n";

    /* Поскольку функции put_title() и show_title()
     * не являются частью базового класса, они недоступны
     * через "базовый" указатель p, и поэтому к ним нужно
     * обращаться либо непосредственно, либо, как показано
     * здесь, через указатель на производный тип. */

    dp = &D_ob;
    dp->put_title("Буря");
    p->show_author();   // Здесь можно использовать либо указатель р, либо указатель dp

    dp->show_author();
    dp->show_title();
}
