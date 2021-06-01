#include "alici_bilgileri.h"

KRGAliciBilgileri::KRGAliciBilgileri(QWidget *parent) : QMainWindow(parent)
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

QDataStream &operator<<(QDataStream &a, const KRGAliciBilgileriPtr &b)
{
    a << b->getAliciAdi() << b->getAliciSoyadi() << b->getAliciAdres() << b->getAliciTc()
      << b->getAliciTelNo() ;

    return a;
}

QDataStream &operator>>(QDataStream &a, KRGAliciBilgileriPtr &b)
{
    Metin aliciAdi;
    Metin aliciSoyadi;
    Metin aliciAdres;
    TcNo aliciTc;
    TelNo aliciTelNo;

    a >> aliciAdi >> aliciSoyadi >> aliciAdres >> aliciTc >> aliciTelNo;

    b = std::make_shared<KRGAliciBilgileri>();

    b->setAliciAdi(aliciAdi);
    b->setAliciSoyadi(aliciSoyadi);
    b->setAliciAdres(aliciAdres);
    b->setAliciTc(aliciTc);
    b->setAliciTelNo(aliciTelNo);


    return a;
}
