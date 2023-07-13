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
#include "demo_index_to_derived_class.h"
#include "demo_virtual_func.h"
#include "demo_inherit_virtual_func.h"
#include "demo_virtual_func__figure_.h"

//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WINDOWSdemo
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#elseif Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

//    demo_index_to_derived_class();
//    demo_virtual_func();
//    demo_inherit_virtual_func();
    demo_virtual_func__figure_();

    return 0;
}
