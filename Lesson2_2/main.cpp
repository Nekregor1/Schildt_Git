/*
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
*/

#include <iostream>
#include "factorial_ex.h"
#include "factorial_main.h"
#include "demo_if.h"
#include "demo_for.h"
#include "demo_block_code.h"
using namespace std;

int main()
{
//    factorial_main();     // разбирался как выносить функции в отдельный файл
//    demo_if();            // разбор как работает оператор if
//    demo_for();             // пример работы цикла for
    demo_block_code();
    return 0;
}
