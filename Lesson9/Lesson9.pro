QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_and.cpp \
    demo_binary_NO.cpp \
    demo_comma.cpp \
    demo_const.cpp \
    demo_enum.cpp \
    demo_global_static_f1.cpp \
    demo_global_static_f2.cpp \
    demo_init_din_mem.cpp \
    demo_malloc_free.cpp \
    demo_new_delete_array.cpp \
    demo_question_mark.cpp \
    demo_register.cpp \
    demo_shift.cpp \
    demo_sizeof.cpp \
    demo_static.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    demo_and.h \
    demo_binary_NO.h \
    demo_comma.h \
    demo_const.h \
    demo_enum.h \
    demo_global_static_f1.h \
    demo_global_static_f2.h \
    demo_init_din_mem.h \
    demo_malloc_free.h \
    demo_new_delete_array.h \
    demo_question_mark.h \
    demo_register.h \
    demo_shift.h \
    demo_sizeof.h \
    demo_static.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
