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
#include <iostream>
using namespace std;
#include "demo_func_with_index.h"
#include "demo_global_var.h"
#include "demo_inner_var.h"
#include "demo_local_var.h"
#include "demo_local_var_block.h"
#include "demo_func_w_array.h"
#include "demo_func_w_array2.h"
#include "demo_func_string.h"
#include "demo_myfunc_strlen.h"
#include "demo_argc_argv.h"
#include "demo_argv_index.h"
#include "demo_argc_to_num.h"
#include "demo_atoi.h"
#include "demo_return.h"
#include "demo_void.h"
#include "demo_func_return_index.h"
//-------------------------------------------------------------------------------------------------
int main(int argc, char* argv[])
{
//    demo_func_with_index();
//    demo_global_var();
//    demo_inner_var();
//    demo_local_var();
//    demo_local_var_block();
//    demo_func_w_array();
//    demo_func_w_array2();
//    demo_func_string();
//    demo_myfunc_strlen();
//    demo_argc_argv(argc, &argv[0]);
//    demo_argv_index(argc, &argv[0]);
//    demo_argc_to_num(argc, &argv[0]);
//    demo_atoi();
//    demo_return();
//    demo_void(argc, &argv[0]);
    demo_func_return_index();
    return 0;
}
