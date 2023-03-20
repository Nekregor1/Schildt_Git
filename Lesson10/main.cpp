/*#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
*/
//-------------------------------------------------------------------------------------------------
#include <QTextCodec>
#include <iostream>
#include "demo_struct.h"
#include "demo_struct_as_arg.h"
#include "demo_struct_assignment.h"
#include "demo_index_to_struct.h"
#include "demo_ref_to_struct.h"
#include "demo_union.h"
#include "demo_union_2.h"
#include "demo_anonim_union.h"
using namespace std;
//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WINDOWS
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#endif
#ifdef Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif
    int temp = 0;
//    temp = demo_struct();
//    demo_struct_as_arg();
//    demo_struct_assignment();
//    demo_index_to_struct();
//    demo_ref_to_struct();
//    demo_union();
//    demo_union_2();
    demo_anonim_union();
    return temp;
}
