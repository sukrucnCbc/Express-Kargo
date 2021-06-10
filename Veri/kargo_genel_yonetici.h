#ifndef KARGO_GENEL_YONETICI_H
#define KARGO_GENEL_YONETICI_H

#include <QObject>

#include <Veri/VeriYoneticileri/alici_yonetici.h>
#include <Veri/VeriYoneticileri/gonderici_yonetici.h>
#include <Veri/VeriYoneticileri/sube_yonetici.h>

class KRGGenelYonetici: public QObject
{
    Q_OBJECT
private:
    explicit KRGGenelYonetici(QObject *parent = nullptr);

public:
    static KRGGenelYonetici &sec();

    KRGAliciYoneticisi &getAliciBilgileri();

    KRGGondericiYoneticisi &getGondericiBilgileri();

    KRGSubeYoneticisi &getSubeBilgileri();



signals:

private:
    KRGAliciYoneticisi aliciBilgileri;
    KRGGondericiYoneticisi gondericiBilgileri;
    KRGSubeYoneticisi subeBilgileri;


    friend QDataStream &operator<<(QDataStream &a,KRGGenelYonetici &b) ;
    friend QDataStream &operator>>(QDataStream &a,KRGGenelYonetici &b);
};
QDataStream &operator<<(QDataStream &a, KRGGenelYonetici &b);
QDataStream &operator>>(QDataStream &a, KRGGenelYonetici &b);

#endif // KARGO_GENEL_YONETICI_H
