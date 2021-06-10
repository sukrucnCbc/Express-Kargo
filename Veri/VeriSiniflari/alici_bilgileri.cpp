#include "alici_bilgileri.h"

KRGAliciBilgileri::KRGAliciBilgileri(QObject *parent) : QObject(parent)
{

}

Metin KRGAliciBilgileri::getAliciAdi() const
{
    return aliciAdi;
}

void KRGAliciBilgileri::setAliciAdi(const Metin &value)
{
    if (value == aliciAdi)
        return;
    aliciAdi = value;
    emit aliciAdiDegisti(aliciAdi);
    aliciAdi = value;
}

Metin KRGAliciBilgileri::getAliciSoyadi() const
{
    return aliciSoyadi;
}

void KRGAliciBilgileri::setAliciSoyadi(const Metin &value)
{
    if (value == aliciSoyadi)
        return;
    aliciSoyadi = value;
    emit aliciSoyadiDegisti(aliciSoyadi);
    aliciSoyadi = value;

}

Metin KRGAliciBilgileri::getAliciAdres() const
{
    return aliciAdres;
}

void KRGAliciBilgileri::setAliciAdres(const Metin &value)
{
    if (value == aliciAdres)
        return;
    aliciAdres= value;
    emit aliciAdresDegisti(aliciAdres);
    aliciAdres = value;
}

TcNo KRGAliciBilgileri::getAliciTc() const
{
    return aliciTc;
}

void KRGAliciBilgileri::setAliciTc(const TcNo &value)
{
    if (value == aliciTc)
        return;
    aliciTc= value;
    emit aliciTcDegisti(aliciTc);
    aliciTc = value;
}

TelNo KRGAliciBilgileri::getAliciTelNo() const
{
    return aliciTelNo;
}

void KRGAliciBilgileri::setAliciTelNo(const TelNo &value)
{
    if (value == aliciTelNo)
        return;
    aliciTelNo= value;
    emit aliciTelNoDegisti(aliciTelNo);
    aliciTelNo = value;
}

IdTuru KRGAliciBilgileri::getId() const
{
    return aliciId;
}

void KRGAliciBilgileri::setId(const IdTuru &value)
{
    if (value == aliciId)
        return;
    aliciId = value;
    emit idDegisti(aliciId);
    aliciId = value;
}

QDataStream &operator<<(QDataStream &a, const KRGAliciBilgileriPtr &b)
{
    a << b->getAliciAdi() << b->getAliciSoyadi() << b->getAliciAdres() << b->getAliciTc()
      << b->getAliciTelNo() << b->getId() ;

    return a;
}

QDataStream &operator>>(QDataStream &a, KRGAliciBilgileriPtr &b)
{
    Metin aliciAdi;
    Metin aliciSoyadi;
    Metin aliciAdres;
    TcNo aliciTc;
    TelNo aliciTelNo;
    IdTuru aliciId;

    a >> aliciAdi >> aliciSoyadi >> aliciAdres >> aliciTc >> aliciTelNo >> aliciId;

    b = std::make_shared<KRGAliciBilgileri>();

    b->setAliciAdi(aliciAdi);
    b->setAliciSoyadi(aliciSoyadi);
    b->setAliciAdres(aliciAdres);
    b->setAliciTc(aliciTc);
    b->setAliciTelNo(aliciTelNo);
    b->setId(aliciId);

    return a;
}
