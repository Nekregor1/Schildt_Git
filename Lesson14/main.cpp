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
#include "demo_inherit_1.h"
#include "demo_inherit_public_access.h"
#include "demo_inherit_private_access.h"

//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WINDOWSdemo
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#elseif Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif


//    demo_inherit_1();
//    demo_inherit_public_access();
    demo_inherit_private_access();


    return 0;
}
