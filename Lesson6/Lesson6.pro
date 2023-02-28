QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG +=console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo2dim_array_index.cpp \
    demo_adress.cpp \
    demo_arithmetic_operation_with_index.cpp \
    demo_array_index.cpp \
    demo_input_num.cpp \
    demo_wrong_prog.cpp \
    indexing_index.cpp \
    init_value_by_index.cpp \
    main.cpp \
    mainwindow.cpp \
    splitting_by_array.cpp \
    splitting_by_index.cpp \
    test_1.cpp \
    try_gets_1.cpp \

HEADERS += \
    demo2dim_array_index.h \
    demo_adress.h \
    demo_arithmetic_operation_with_index.h \
    demo_array_index.h \
    demo_input_num.h \
    demo_wrong_prog.h \
    indexing_index.h \
    init_value_by_index.h \
    mainwindow.h \
    splitting_by_array.h \
    splitting_by_index.h \
    test_1.h \
    try_gets_1.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
