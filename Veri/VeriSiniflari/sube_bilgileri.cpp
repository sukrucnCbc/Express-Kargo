#include "sube_bilgileri.h"

KRGSubeBilgileri::KRGSubeBilgileri(QWidget *parent) : QMainWindow(parent)
{

}

Metin KRGSubeBilgileri::getSubeAdi() const
{
    return subeAdi;
}

void KRGSubeBilgileri::setSubeAdi(const Metin &value)
{
    if (value == subeAdi)
        return;
    subeAdi = value;
    emit subeAdiDegisti(subeAdi);
    subeAdi = value;
}

Metin KRGSubeBilgileri::getSubeAdresi() const
{
    return subeAdresi;
}

void KRGSubeBilgileri::setSubeAdresi(const Metin &value)
{
    if (value == subeAdresi)
        return;
    subeAdresi = value;
    emit subeAdresiDegisti(subeAdresi);
    subeAdresi = value;
}

Metin KRGSubeBilgileri::getSubeSorumlusu() const
{
    return subeSorumlusu;
}

void KRGSubeBilgileri::setSubeSorumlusu(const Metin &value)
{
    if (value == subeSorumlusu)
        return;
    subeSorumlusu = value;
    emit subeSorumlusuDegisti(subeSorumlusu);
    subeSorumlusu = value;
}

TelNo KRGSubeBilgileri::getSubeTel() const
{
    return subeTel;
}

void KRGSubeBilgileri::setSubeTel(const TelNo &value)
{
    if (value == subeTel)
        return;
    subeTel = value;
    emit subeTelDegisti(subeTel);
    subeTel = value;
}

AraMesafe KRGSubeBilgileri::getSubelerArasiKm() const
{
    return subelerArasiKm;
}

void KRGSubeBilgileri::setSubelerArasiKm(const AraMesafe &value)
{
    if (value == subelerArasiKm)
        return;
    subelerArasiKm = value;
    emit subelerArasiKmDegisti(subelerArasiKm);
    subelerArasiKm = value;
}
QDataStream &operator<<(QDataStream &a, const KRGSubeBilgileriPtr &b)
{
    a << b->getSubeAdi() << b->getSubeAdresi() << b->getSubeSorumlusu() << b->getSubeTel()
      << b->getSubelerArasiKm() ;

    return a;
}

QDataStream &operator>>(QDataStream &a, KRGSubeBilgileriPtr &b)
{
    Metin subeAdi;
    Metin subeAdresi;
    Metin subeSorumlusu;
    TcNo subeTel;
    TelNo subelerArasiKm;

    a >> subeAdi >> subeAdresi >> subeSorumlusu >> subeTel>> subelerArasiKm;

    b = std::make_shared<KRGSubeBilgileri>();

    b->setSubeAdi(subeAdi);
    b->setSubeAdresi(subeAdresi);
    b->setSubeSorumlusu(subeSorumlusu);
    b->setSubeTel(subeTel);
    b->setSubelerArasiKm(subelerArasiKm);


    return a;
}
