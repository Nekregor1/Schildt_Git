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
//-------------------------------------------------------------------------------------------------
#include <QTextCodec>
#include "demo_overload_op_cout.h"
#include "demo_friend_func_overload_op_cout.h"
#include "demo_friend_func_overload_op_cin.h"
#include "demo_format.h"

//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WINDOWS
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#elif Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

//    demo_overload_op_cout();
//    demo_friend_func_overload_op_cout();
//    demo_friend_func_overload_op_cin();
    demo_format();

    return 0;
}
