QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG+=console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_block_code.cpp \
    demo_for.cpp \
    demo_if.cpp \
    factorial_ex.cpp \
    factorial_main.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    demo_block_code.h \
    demo_for.h \
    demo_if.h \
    factorial_ex.h \
    factorial_main.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
