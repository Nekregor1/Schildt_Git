QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bubble_sort.cpp \
    demo_array.cpp \
    demo_cin_str.cpp \
    demo_gets_str_array.cpp \
    demo_init_array.cpp \
    demo_str_all.cpp \
    demo_strcat.cpp \
    demo_strcmp.cpp \
    demo_strcpy.cpp \
    demo_strlen.cpp \
    demo_toupper.cpp \
    demo_two_dim_array.cpp \
    demo_use_str_array.cpp \
    find_min_max_in_array.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    bubble_sort.h \
    demo_array.h \
    demo_cin_str.h \
    demo_gets_str_array.h \
    demo_init_array.h \
    demo_str_all.h \
    demo_strcat.h \
    demo_strcmp.h \
    demo_strcpy.h \
    demo_strlen.h \
    demo_toupper.h \
    demo_two_dim_array.h \
    demo_use_str_array.h \
    find_min_max_in_array.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
