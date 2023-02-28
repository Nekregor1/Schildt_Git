QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_break.cpp \
    demo_break_var2.cpp \
    demo_continue.cpp \
    demo_do_while.cpp \
    demo_for.cpp \
    demo_for_var.cpp \
    demo_for_var2.cpp \
    demo_if_else_if.cpp \
    demo_switch.cpp \
    demo_while.cpp \
    demo_while_var.cpp \
    div_by_null.cpp \
    magic_num.cpp \
    magic_num_upd.cpp \
    magic_num_upd2.cpp \
    magic_num_upd3.cpp \
    main.cpp \
    mainwindow.cpp \
    simple_num.cpp

HEADERS += \
    demo_break.h \
    demo_break_var2.h \
    demo_continue.h \
    demo_do_while.h \
    demo_for.h \
    demo_for_var.h \
    demo_for_var2.h \
    demo_if_else_if.h \
    demo_switch.h \
    demo_while.h \
    demo_while_var2.h \
    div_by_null.h \
    magic_num.h \
    magic_num_upd.h \
    magic_num_upd2.h \
    magic_num_upd3.h \
    mainwindow.h \
    simple_num.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
