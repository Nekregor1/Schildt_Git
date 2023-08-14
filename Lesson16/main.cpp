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
#include "demo_template_func.h"
#include "demo_overload_template_func.h"
#include "demo_overload_template_func_2.h"
#include "demo_template_func_with_standart_param.h"
#include "demo_template_class.h"
#include "demo_double_template_class.h"
#include "demo_template_class_safe_array.h"
#include "demo_template_class_notype_args.h"
#include "demo_template_class_default_args.h"
#include "demo_explicitly_set_specialization.h"

//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WINDOWSdemo
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#elseif Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

//    demo_template_func();
//    demo_overload_template_func();
//    demo_overload_template_func_2();
//    demo_template_func_with_standart_param();
//    demo_template_class();
//    demo_double_template_class();
//    demo_template_class_safe_array();
//    demo_template_class_notype_args();
//    demo_template_class_default_args();
    demo_explicitly_set_specialization();

    return 0;
}
