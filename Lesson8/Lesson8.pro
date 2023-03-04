QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_func_w_index.cpp \
    demo_reference_parameter.cpp \
    demo_return_reference.cpp \
    demo_return_reference_2.cpp \
    demo_safe_array.cpp \
    demo_transfer_args.cpp \
    main.cpp \
    mainwindow.cpp \
    swap_w_reference_param.cpp

HEADERS += \
    demo_func_w_index.h \
    demo_reference_parameter.h \
    demo_return_reference.h \
    demo_return_reference_2.h \
    demo_safe_array.h \
    demo_transfer_args.h \
    mainwindow.h \
    swap_w_reference_param.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
