QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clickableqlabel.cpp \
    configdlg.cpp \
    customizedlg.cpp \
    main.cpp \
    about.cpp

HEADERS += \
    about.h \
    clickableqlabel.h \
    configdlg.h \
    customizedlg.h

FORMS += \
    about.ui \
    configdlg.ui \
    customizedlg.ui

# Default rules for deployment.
qnx: target.path = /tmp/usr/bin
else: unix:!android: target.path = /usr/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    basebrd.qrc
