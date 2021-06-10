#include "kargo_genel_yonetici.h"

KRGGenelYonetici::KRGGenelYonetici(QObject *parent) : QObject(parent)
{

}

KRGGenelYonetici &KRGGenelYonetici::sec()
{
    static KRGGenelYonetici nesne;
    return nesne;
}


KRGAliciYoneticisi &KRGGenelYonetici::getAliciBilgileri()
{
    return aliciBilgileri;
}

KRGGondericiYoneticisi &KRGGenelYonetici::getGondericiBilgileri()
{
    return gondericiBilgileri;
}

KRGSubeYoneticisi &KRGGenelYonetici::getSubeBilgileri()
{
    return subeBilgileri;
}

KRGBilgileriYoneticisi &KRGGenelYonetici::getKargoBilgileri()
{
    return kargoBilgileri;
}

QDataStream &operator<<(QDataStream &a, KRGGenelYonetici &b)
{
    a << b.aliciBilgileri<< b.gondericiBilgileri << b.subeBilgileri <<b.kargoBilgileri ;

    return a;
}

QDataStream &operator>>(QDataStream &a, KRGGenelYonetici &b)
{
    a >> b.aliciBilgileri >> b.gondericiBilgileri >> b.subeBilgileri >> b.kargoBilgileri ;

    return a;
}

