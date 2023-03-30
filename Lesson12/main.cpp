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
//-------------------------------------------------------------------------------------------------

int main()
{
#ifdef Q_OS_WINDOWS
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("IBM 866"));
#else
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

    demo_friend_func();
    return 0;
}
