QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addvector.cpp \
    delvector.cpp \
    main.cpp \
    mainwindow.cpp \
    showvector.cpp \
    teacher.cpp

HEADERS += \
    addvector.h \
    delvector.h \
    mainwindow.h \
    showvector.h \
    teacher.h

FORMS += \
    addvector.ui \
    delvector.ui \
    mainwindow.ui \
    showvector.ui \
    teacher.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
