QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_double_template_class.cpp \
    demo_explicitly_set_specialization.cpp \
    demo_overload_template_func.cpp \
    demo_overload_template_func_2.cpp \
    demo_template_class.cpp \
    demo_template_class_default_args.cpp \
    demo_template_class_notype_args.cpp \
    demo_template_class_safe_array.cpp \
    demo_template_func.cpp \
    demo_template_func_with_standart_param.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    demo_double_template_class.h \
    demo_explicitly_set_specialization.h \
    demo_overload_template_func.h \
    demo_overload_template_func_2.h \
    demo_template_class.h \
    demo_template_class_default_args.h \
    demo_template_class_notype_args.h \
    demo_template_class_safe_array.h \
    demo_template_func.h \
    demo_template_func_with_standart_param.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
