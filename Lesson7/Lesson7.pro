QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_argc_argv.cpp \
    demo_argc_to_num.cpp \
    demo_argv_index.cpp \
    demo_atoi.cpp \
    demo_func_return_index.cpp \
    demo_func_string.cpp \
    demo_func_w_array.cpp \
    demo_func_w_array2.cpp \
    demo_func_with_index.cpp \
    demo_global_var.cpp \
    demo_inner_var.cpp \
    demo_local_var.cpp \
    demo_local_var_block.cpp \
    demo_myfunc_strlen.cpp \
    demo_return.cpp \
    demo_void.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    demo_argc_argv.h \
    demo_argc_to_num.h \
    demo_argv_index.h \
    demo_atoi.h \
    demo_func_return_index.h \
    demo_func_string.h \
    demo_func_w_array.h \
    demo_func_w_array2.h \
    demo_func_with_index.h \
    demo_global_var.h \
    demo_inner_var.h \
    demo_local_var.h \
    demo_local_var_block.h \
    demo_myfunc_strlen.h \
    demo_return.h \
    demo_void.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
