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
    demo_enum();
    return 0;
}
