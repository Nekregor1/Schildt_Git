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
#include "demo_func_with_index.h"
#include "demo_global_var.h"
#include "demo_inner_var.h"
#include "demo_local_var.h"
#include "demo_local_var_block.h"

//-------------------------------------------------------------------------------------------------
int main()
{
//    demo_func_with_index();
//    demo_global_var();
//    demo_inner_var();
//    demo_local_var();
    demo_local_var_block();
    return 0;
}
