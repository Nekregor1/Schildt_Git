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
#include "demo_const.h"
#include "demo_static.h"
#include "demo_global_static_f1.h"
#include "demo_register.h"
#include "demo_enum.h"
#include "demo_and.h"
#include "demo_binary_NO.h"
#include "demo_shift.h"
#include "demo_question_mark.h"
#include "demo_comma.h"
#include "demo_sizeof.h"
#include "demo_init_din_mem.h"
#include "demo_new_delete_array.h"
#include "demo_malloc_free.h"
//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WIN32
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#endif
#ifdef Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif
//    demo_const();
//    demo_static();
//    demo_global_static_f1();
//    demo_register();
//    demo_enum();
//    demo_and();
//    demo_binary_NO();
//    demo_shift();
//    demo_question_mark();
//    demo_comma();
//    demo_sizeof();
//    demo_init_din_mem();
//    demo_new_delete_array();
    demo_malloc_free();
    return 0;
}
