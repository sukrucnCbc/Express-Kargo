#ifndef KARGO_GENEL_YONETICI_H
#define KARGO_GENEL_YONETICI_H

#include <QObject>

#include <Veri/VeriYoneticileri/alici_yonetici.h>
#include <Veri/VeriYoneticileri/gonderici_yonetici.h>
#include <Veri/VeriYoneticileri/sube_yonetici.h>
#include <Veri/VeriYoneticileri/kargo_bilgileri_yoneticisi.h>

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

    KRGBilgileriYoneticisi &getKargoBilgileri();



signals:

private:
    KRGAliciYoneticisi aliciBilgileri;
    KRGGondericiYoneticisi gondericiBilgileri;
    KRGSubeYoneticisi subeBilgileri;
    KRGBilgileriYoneticisi kargoBilgileri;



    friend QDataStream &operator<<(QDataStream &a,KRGGenelYonetici &b) ;
    friend QDataStream &operator>>(QDataStream &a,KRGGenelYonetici &b);
};
QDataStream &operator<<(QDataStream &a, KRGGenelYonetici &b);
QDataStream &operator>>(QDataStream &a, KRGGenelYonetici &b);

#endif // KARGO_GENEL_YONETICI_H
