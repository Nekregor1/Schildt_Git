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
#include "demo_friend_func.h"
#include "demo_friend_func_2.h"
#include "demo_friend_func_in_class.h"
#include "demo_overload_constr.h"
#include "demo_dinam_init.h"
#include "demo_assignment_obj.h"
#include "demo_put_obj_func.h"
#include "demo_destruct_copies_of_obj.h"
#include "demo_problem_with_take_obj.h"
#include "demo_func_get_obj.h"
#include "demo_problem_with_get_obj.h"
#include "demo_constr_of_copy_and_param_func.h"
//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WINDOWS
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#elseif Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

//    demo_friend_func();
//    demo_friend_func_2();
//    demo_friend_func_in_class();
//    demo_overload_constr();
//    demo_dinam_init();
//    demo_assignment_obj();
//    demo_put_obj_func();
//    demo_destruct_copies_of_obj();
//    demo_problem_with_take_obj();
//    demo_func_get_obj();
//    demo_problem_with_get_obj();
    demo_constr_of_copy_and_param_func();
    return 0;
}
