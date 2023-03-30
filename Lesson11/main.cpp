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
#include "demo_simple_class.h"
#include "demo_access_to_class_memb.h"
#include "demo_constr_destr_in_class.h"
#include "demo_param_constr.h"
#include "demo_alternative_init_obj.h"
#include "demo_struct_as_class.h"
#include "demo_class_as_struct.h"
#include "demo_union_as_class.h"
#include "demo_inline_func.h"
#include "demo_inline_func_def_in_class.h"
#include "demo_array_of_obj.h"
#include "demo_init_array_obj.h"
#include "demo_long_init_array_obj.h"
#include "demo_index_on_obj.h"
//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WINDOWS
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#else
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

//    demo_simple_class();
//    demo_access_to_class_memb();
//    demo_constr_destr_in_class();
//    demo_param_constr();
//    demo_alternative_init_obj();
//    demo_struct_as_class();
//    demo_class_as_struct();
//    demo_union_as_class();
//    demo_inline_func();
//    demo_inline_func_def_in_class();
//    demo_array_of_obj();
//    demo_init_array_obj();
//    demo_long_init_array_obj();
    demo_index_on_obj();
    return 0;
}

