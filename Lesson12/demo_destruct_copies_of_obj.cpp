#include <iostream>
#include <QTextCodec>
using namespace std;

class myclass_3 {
    int val;
public:
    myclass_3 (int i) {
        val = i;
        cout << QString::fromUtf8("Создание\n").toLocal8Bit().data();
    }
    ~myclass_3() {
        cout << QString::fromUtf8("Разрушение\n").toLocal8Bit().data();
    }
    int getval() {
        return val;
    }
};

void display(myclass_3 ob)
{
    cout << ob.getval() << '\n';
}

void demo_destruct_copies_of_obj()
{
    myclass_3 a(10);

    display(a);

}
