QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_bound_exception.cpp \
    demo_catch_all_exceptions.cpp \
    demo_catch_base_derived_class.cpp \
    demo_catch_some_exceptions.cpp \
    demo_class_exception.cpp \
    demo_exception_in_exception.cpp \
    demo_simple_exception.cpp \
    demo_some_catch.cpp \
    demo_try_catch_in_func.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    demo_bound_exception.h \
    demo_catch_all_exceptions.h \
    demo_catch_base_derived_class.h \
    demo_catch_some_exceptions.h \
    demo_class_exception.h \
    demo_exception_in_exception.h \
    demo_simple_exception.h \
    demo_some_catch.h \
    demo_try_catch_in_func.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
