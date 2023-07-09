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
#include "demo_overload_oper_func_class.h"
#include "demo_overload_unar_oper.h"
#include "demo_overload_func_friend.h"
#include "demo_overload_commutation.h"
#include "demo_overload_unar_oper_friend_func.h"
#include "demo_oper_assignment.h"

//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WINDOWSdemo
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#elseif Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

//    demo_overload_oper_func_class();
//    demo_overload_unar_oper();
//    demo_overload_func_friend();
//    demo_overload_commutation();
//    demo_overload_unar_oper_friend_func();
    demo_oper_assignment();

    return 0;
}
