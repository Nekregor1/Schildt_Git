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
#include "demo_overload_binar_oper.h"
#include "demo_overload_return_link.h"
#include "demo_overload_safe_array.h"
#include "demo_overload_bracket.h"
#include "demo_overload_str.h"

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
//    demo_oper_assignment();
//    demo_overload_binar_oper();
//    demo_overload_return_link();
//    demo_overload_safe_array();
//    demo_overload_bracket();
    demo_overload_str();

    return 0;
}
