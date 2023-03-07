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
//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WIN32
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM-866"));
#endif
#ifdef Q_OS_LINUX
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UNT-8"));
#endif
//    demo_const();
//    demo_static();
    demo_global_static_f1();
    return 0;
}
