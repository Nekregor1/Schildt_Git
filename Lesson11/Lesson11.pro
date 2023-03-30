QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_access_to_class_memb.cpp \
    demo_alternative_init_obj.cpp \
    demo_array_of_obj.cpp \
    demo_class_as_struct.cpp \
    demo_constr_destr_in_class.cpp \
    demo_index_on_obj.cpp \
    demo_init_array_obj.cpp \
    demo_inline_func.cpp \
    demo_inline_func_def_in_class.cpp \
    demo_long_init_array_obj.cpp \
    demo_param_constr.cpp \
    demo_simple_class.cpp \
    demo_struct_as_class.cpp \
    demo_union_as_class.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    demo_access_to_class_memb.h \
    demo_alternative_init_obj.h \
    demo_array_of_obj.h \
    demo_class_as_struct.h \
    demo_constr_destr_in_class.h \
    demo_index_on_obj.h \
    demo_init_array_obj.h \
    demo_inline_func.h \
    demo_inline_func_def_in_class.h \
    demo_long_init_array_obj.h \
    demo_param_constr.h \
    demo_simple_class.h \
    demo_struct_as_class.h \
    demo_union_as_class.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
