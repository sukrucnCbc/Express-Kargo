#include "gonderici_bilgileri.h"
#include <QtMath>

KRGGondericiBilgileri::KRGGondericiBilgileri(QObject *parent) : QObject(parent)
{


}

Metin KRGGondericiBilgileri::getGondericiAdi() const
{
    return gondericiAdi;
}

void KRGGondericiBilgileri::setGondericiAdi(const Metin &value)
{
    if (value == gondericiAdi)
        return;
    gondericiAdi = value;
    emit gondericiAdiDegisti(gondericiAdi);

    gondericiAdi = value;

}

Metin KRGGondericiBilgileri::getGondericiSoyadi() const
{
    return gondericiSoyadi;
}

void KRGGondericiBilgileri::setGondericiSoyadi(const Metin &value)
{

    if (value == gondericiSoyadi)
        return;
    gondericiSoyadi = value;
    emit gondericiSoyadiDegisti(gondericiSoyadi);

    gondericiSoyadi = value;
}

Metin KRGGondericiBilgileri::getGondericiAdres() const
{
    return gondericiAdres;
}

void KRGGondericiBilgileri::setGondericiAdres(const Metin &value)
{



    if (value == gondericiAdres)
        return;
    gondericiAdres = value;
    emit gondericiAdresDegisti(gondericiAdres);


    gondericiAdres = value;
}

TcNo KRGGondericiBilgileri::getGondericiTc() const
{
    return gondericiTc;
}

void KRGGondericiBilgileri::setGondericiTc(const TcNo &value)
{


    if (value == gondericiTc)
        return;
    gondericiTc = value;
    emit gondericiTcDegisti(gondericiTc);

    gondericiTc = value;
}

TelNo KRGGondericiBilgileri::getGondericiTelNo() const
{
    return gondericiTelNo;
}

void KRGGondericiBilgileri::setGondericiTelNo(const TelNo &value)
{

    if (value == gondericiTelNo)
        return;
    gondericiTelNo = value;
    emit gondericiTelNoDegisti(gondericiTelNo);

    gondericiTelNo = value;
}

IdTuru KRGGondericiBilgileri::getId() const
{
    return gondericiId;
}

void KRGGondericiBilgileri::setId(const IdTuru &value)
{
    if (value == gondericiId)
        return;
    gondericiId = value;
    emit idDegisti(gondericiId);
    gondericiId = value;
}
QDataStream &operator<<(QDataStream &a, const KRGGondericiBilgileriPtr &b)
{
    a << b->getGondericiAdi() << b->getGondericiSoyadi() << b->getGondericiAdres() << b->getGondericiTc()
      << b->getGondericiTelNo() << b->getId();

    return a;
}

QDataStream &operator>>(QDataStream &a, KRGGondericiBilgileriPtr &b)
{
    Metin gondericiAdi;
    Metin gondericiSoyadi;
    Metin gondericiAdres;
    TcNo gondericiTc;
    TelNo gondericiTelNo;
    IdTuru gondericiId;

    a >> gondericiAdi >> gondericiSoyadi >> gondericiAdres >> gondericiTc >> gondericiTelNo >> gondericiId;

    b = std::make_shared<KRGGondericiBilgileri>();

    b->setGondericiAdi(gondericiAdi);
    b->setGondericiSoyadi(gondericiSoyadi);
    b->setGondericiAdres(gondericiAdres);
    b->setGondericiTc(gondericiTc);
    b->setGondericiTelNo(gondericiTelNo);
    b->setId(gondericiId);


    return a;
}
