#include <iostream>
#include <QTextCodec>
using namespace std;

enum apple {Jonathan, Golden_Del, Red_Del, Winesap,
            Cortland, McIntosh};

// Массив строк, связанных с перечислением apple
char name[][20] = {
    "Jonathan",
    "Golden Delicious",
    "Red Delicious",
    "Winesap",
    "Cortland",
    "McIntosh"
};

void demo_enum()
{
    apple fruit;

    fruit = Jonathan;
    cout << QString::fromUtf8(name[fruit]).toLocal8Bit().data() << '\n';

    fruit = Winesap;
    cout << QString::fromUtf8(name[fruit]).toLocal8Bit().data() << '\n';

    fruit = McIntosh;
    cout << QString::fromUtf8(name[fruit]).toLocal8Bit().data() << '\n';

}
