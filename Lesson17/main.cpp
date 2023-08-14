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
#include "demo_simple_exception.h"
#include "demo_exception_in_exception.h"
#include "demo_try_catch_in_func.h"
#include "demo_class_exception.h"
#include "demo_some_catch.h"
#include "demo_catch_base_derived_class.h"
#include "demo_catch_all_exceptions.h"
#include "demo_catch_some_exceptions.h"
#include "demo_bound_exception.h"
#include "demo_repeat_exception.h"
#include "demo_exception_by_operator_new.h"
#include "demo_operator_nothrow.h"
#include "demo_overload_new_delete.h"

//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WINDOWSdemo
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#elseif Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

//    demo_simple_exception();
//    demo_exception_in_exception();
//    demo_try_catch_in_func();
//    demo_class_exception();
//    demo_some_catch();
//    demo_catch_base_derived_class();
//    demo_catch_all_exceptions();
//    demo_catch_some_exceptions();
//    demo_bound_exception();
//    demo_repeat_exception();
//    demo_exception_by_operator_new();
//    demo_operator_nothrow();
    demo_overload_new_delete();

    return 0;
}
