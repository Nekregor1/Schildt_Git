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
#include "demo_transfer_args.h"
#include "demo_func_w_index.h"
#include "demo_reference_parameter.h"
#include "swap_w_reference_param.h"
#include "demo_return_reference.h"
#include "demo_return_reference_2.h"
#include "demo_safe_array.h"
#include "demo_independ_reference.h"
//-------------------------------------------------------------------------------------------------

int main()
{
//    demo_transfer_args();
//    demo_func_w_index();
//    demo_reference_parameter();
//    swap_w_reference_param();
//    demo_return_reference();
//    demo_return_reference_2();
//    demo_safe_array();
    demo_independ_reference();
    return 0;
}
