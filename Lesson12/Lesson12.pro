QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_assignment_obj.cpp \
    demo_constr_of_copy_and_param_func.cpp \
    demo_destruct_copies_of_obj.cpp \
    demo_dinam_init.cpp \
    demo_friend_func.cpp \
    demo_friend_func_2.cpp \
    demo_friend_func_in_class.cpp \
    demo_func_get_obj.cpp \
    demo_overload_constr.cpp \
    demo_problem_with_get_obj.cpp \
    demo_problem_with_take_obj.cpp \
    demo_put_obj_func.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    demo_assignment_obj.h \
    demo_constr_of_copy_and_param_func.h \
    demo_destruct_copies_of_obj.h \
    demo_dinam_init.h \
    demo_friend_func.h \
    demo_friend_func_2.h \
    demo_friend_func_in_class.h \
    demo_func_get_obj.h \
    demo_overload_constr.h \
    demo_problem_with_get_obj.h \
    demo_problem_with_take_obj.h \
    demo_put_obj_func.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
