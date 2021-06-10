QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Veri/VeriSiniflari/alici_bilgileri.cpp \
    Veri/VeriSiniflari/gonderici_bilgileri.cpp \
    Veri/VeriSiniflari/kargo_bilgileri.cpp \
    Veri/VeriSiniflari/sube_bilgileri.cpp \
    Veri/VeriYoneticileri/alici_yonetici.cpp \
    Veri/VeriYoneticileri/gonderici_yonetici.cpp \
    Veri/VeriYoneticileri/sube_yonetici.cpp \
    Veri/kargo_genel_yonetici.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Veri/VeriSiniflari/alici_bilgileri.h \
    Veri/VeriSiniflari/gonderici_bilgileri.h \
    Veri/VeriSiniflari/kargo_bilgileri.h \
    Veri/VeriSiniflari/sube_bilgileri.h \
    Veri/VeriYoneticileri/alici_yonetici.h \
    Veri/VeriYoneticileri/gonderici_yonetici.h \
    Veri/VeriYoneticileri/sube_yonetici.h \
    Veri/VeriYoneticileri/temel_veri_yoneticileri.h \
    Veri/kargo_genel_yonetici.h \
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
