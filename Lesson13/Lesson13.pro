QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_oper_assignment.cpp \
    demo_overload_binar_oper.cpp \
    demo_overload_bracket.cpp \
    demo_overload_commutation.cpp \
    demo_overload_func_friend.cpp \
    demo_overload_oper_func_class.cpp \
    demo_overload_return_link.cpp \
    demo_overload_safe_array.cpp \
    demo_overload_str.cpp \
    demo_overload_unar_oper.cpp \
    demo_overload_unar_oper_friend_func.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    demo_oper_assignment.h \
    demo_overload_binar_oper.h \
    demo_overload_bracket.h \
    demo_overload_commutation.h \
    demo_overload_func_friend.h \
    demo_overload_oper_func_class.h \
    demo_overload_return_link.h \
    demo_overload_safe_array.h \
    demo_overload_str.h \
    demo_overload_unar_oper.h \
    demo_overload_unar_oper_friend_func.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
