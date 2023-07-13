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
#include "demo_inherit_protected_access.h"
#include "demo_double_inherit.h"
#include "demo_double_inherit_private.h"
#include "demo_protected_inherit.h"
#include "demo_multi_inherit.h"
#include "demo_constr_destr_inherit.h"
#include "demo_param_constr_base_class.h"
#include "demo_optr_scope_resolution.h"
#include "demo_virtual_base_class.h"

//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WINDOWSdemo
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#elseif Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif


//    demo_inherit_1();
//    demo_inherit_public_access();/
//    demo_inherit_private_access();
//    demo_inherit_protected_access();
//    demo_double_inherit();
//    demo_double_inherit_private();
//    demo_protected_inherit();
//    demo_multi_inherit();
//    demo_constr_destr_inherit();
//    demo_param_constr_base_class();
//    demo_optr_scope_resolution();
    demo_virtual_base_class();

    return 0;
}
