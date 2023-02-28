QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_bool.cpp \
    demo_char.cpp \
    global_var.cpp \
    local_var.cpp \
    main.cpp \
    mainwindow.cpp \
    modificator_type.cpp \
    reduction_types.cpp \
    total_main.cpp

HEADERS += \
    demo_bool.h \
    demo_char.h \
    global_var.h \
    local_var.h \
    mainwindow.h \
    modificator_type.h \
    reduction_types.h \
    total_main.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
