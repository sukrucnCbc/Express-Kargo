#include "genel_yonetici.h"
#include <Veri/VeriYoneticileri/alici_yonetici.h>
#include <Veri/VeriYoneticileri/gonderici_yonetici.h>
#include <Veri/VeriYoneticileri/kargo_bilgileri_yoneticisi.h>
#include <Ver

KRGGenelYonetici::KRGGenelYonetici(QObject *parent) : QObject(parent)
{

}

KRGGenelYonetici &KRGGenelYonetici::sec()
{

    static KRGGenelYonetici nesne;

    return nesne;
}

KRGAliciYoneticisi &KRGGenelYonetici::getKRGAliciBilgileri()
{
    return aliciBilgileri;
}

KRGGondericiYoneticisi &KRGGenelYonetici::getKRGGondericiBilgileri()
{
    return gondericiBilgileri;
}

KRGSubeYoneticisi &KRGGenelYonetici::getKRGSubeBilgileri()
{
    return subeBilgileri;
}
Kargo_Bilgileri_Yoneticisi &KRGGenelYonetici::getKRGKargoBilgileri()
{
    return kargoBilgileri;
}


QDataStream &operator<<(QDataStream &a, KRGGenelYonetici &b)
{
    a << b.aliciBilgileri << b.gondericiBilgileri<< b.subeBilgileri << b.kargoBilgileri;

    return a;
}

QDataStream &operator>>(QDataStream &a, KRGGenelYonetici &b)
{
    a >> b.aliciBilgileri >> b.gondericiBilgileri >> b.subeBilgileri >> b.kargoBilgileri;

    return a;
}
