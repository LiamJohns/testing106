QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adddefect.cpp \
    defecttracker.cpp \
    devmenu.cpp \
    devwindow.cpp \
    main.cpp \
    menu1.cpp

HEADERS += \
    adddefect.h \
    defecttracker.h \
    devmenu.h \
    devwindow.h \
    menu1.h

FORMS += \
    adddefect.ui \
    defecttracker.ui \
    devmenu.ui \
    devwindow.ui \
    menu1.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
