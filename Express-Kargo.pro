QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Veri/VeriSiniflari/alici_bilgileri.cpp \
    Veri/VeriSiniflari/sube_bilgileri.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Veri/VeriSiniflari/alici_bilgileri.h \
    Veri/VeriSiniflari/sube_bilgileri.h \
    Veri/tanimlar.h \
    mainwindow.h

FORMS += \
    mainwindow.ui \
    sinif.gorunum/kargo_takip.ui

TRANSLATIONS += \
    Express-Kargo_tr_TR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
