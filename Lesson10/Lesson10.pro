QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_anonim_union.cpp \
    demo_index_to_struct.cpp \
    demo_ref_to_struct.cpp \
    demo_struct.cpp \
    demo_struct_as_arg.cpp \
    demo_struct_assignment.cpp \
    demo_union.cpp \
    demo_union_2.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    demo_anonim_union.h \
    demo_index_to_struct.h \
    demo_ref_to_struct.h \
    demo_struct.h \
    demo_struct_as_arg.h \
    demo_struct_assignment.h \
    demo_union.h \
    demo_union_2.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
