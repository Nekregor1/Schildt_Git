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

//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WINDOWS
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#elseif Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

//    demo_overload_oper_func_class();
//    demo_overload_unar_oper();
    demo_overload_func_friend();

    return 0;
}
