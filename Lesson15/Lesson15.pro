QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_index_to_derived_class.cpp \
    demo_inherit_virtual_func.cpp \
    demo_virtual_func.cpp \
    demo_virtual_func__figure_.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    demo_index_to_derived_class.h \
    demo_inherit_virtual_func.h \
    demo_virtual_func.h \
    demo_virtual_func__figure_.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
