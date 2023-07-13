QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo_constr_destr_inherit.cpp \
    demo_double_inherit.cpp \
    demo_double_inherit_private.cpp \
    demo_inherit_1.cpp \
    demo_inherit_private_access.cpp \
    demo_inherit_protected_access.cpp \
    demo_inherit_public_access.cpp \
    demo_multi_inherit.cpp \
    demo_optr_scope_resolution.cpp \
    demo_param_constr_base_class.cpp \
    demo_protected_inherit.cpp \
    demo_virtual_base_class.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    demo_constr_destr_inherit.h \
    demo_double_inherit.h \
    demo_double_inherit_private.h \
    demo_inherit_1.h \
    demo_inherit_private_access.h \
    demo_inherit_protected_access.h \
    demo_inherit_public_access.h \
    demo_multi_inherit.h \
    demo_optr_scope_resolution.h \
    demo_param_constr_base_class.h \
    demo_protected_inherit.h \
    demo_virtual_base_class.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
