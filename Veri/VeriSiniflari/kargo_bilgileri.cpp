#include "kargo_bilgileri.h"

KRGKargoBilgileri::KRGKargoBilgileri(QWidget *parent) : QMainWindow(parent)
{

}

Metin KRGKargoBilgileri::getGidenAdres() const
{
    return gidenAdres;
}

void KRGKargoBilgileri::setGidenAdres(const Metin &value)
{
    if (value == gidenAdres)
        return;
    gidenAdres = value;
    emit GidenAdresDegisti(gidenAdres);
    gidenAdres = value;
}

Metin KRGKargoBilgileri::getTeslimatSaatAraligi() const
{
    return teslimatSaatAraligi;
}

void KRGKargoBilgileri::setTeslimatSaatAraligi(const Metin &value)
{
    if (value == teslimatSaatAraligi)
        return;
    teslimatSaatAraligi = value;
    emit TeslimatSaatAraligiDegisti(teslimatSaatAraligi);
    teslimatSaatAraligi = value;
}

IdTuru KRGKargoBilgileri::getId() const
{
    return kargoId;
}

void KRGKargoBilgileri::setId(const IdTuru &value)
{
    if (value == kargoId)
        return;
    kargoId = value;
    emit idDegisti(kargoId);
    kargoId = value;
}

Metin KRGKargoBilgileri::getKargoDurumu() const
{
    return kargoDurumu;
}

void KRGKargoBilgileri::setKargoDurumu(const Metin &value)
{
    if (value == kargoDurumu)
        return;
    kargoDurumu = value;
    emit KargoDurumuDegisti(kargoDurumu);
    kargoDurumu = value;
}

ParaBirimi KRGKargoBilgileri::getOdeme() const
{
    return odeme;
}

void KRGKargoBilgileri::setOdeme(const ParaBirimi &value)
{
    if (value == odeme)
        return;
    odeme = value;
    emit OdemeDegisti(odeme);
    odeme = value;
}

ParaBirimi KRGKargoBilgileri::getGonderiFiyat() const
{
    return gonderiFiyat;
}

void KRGKargoBilgileri::setGonderiFiyat(const ParaBirimi &value)
{
    if (value == gonderiFiyat)
        return;
    gonderiFiyat = value;
    emit GonderiFiyatDegisti(gonderiFiyat);
    gonderiFiyat = value;
}

DesiHesabi KRGKargoBilgileri::getGonderiDesiBoyut() const
{
    return gonderiDesiBoyut;
}

void KRGKargoBilgileri::setGonderiDesiBoyut(const DesiHesabi &value)
{
    if (value == gonderiDesiBoyut)
        return;
    gonderiDesiBoyut = value;
    emit GonderiDesiBoyutDegisti(gonderiDesiBoyut);
    gonderiDesiBoyut = value;
}

ReelSayi KRGKargoBilgileri::getMesafeyeDayaliTahminAlgoritmasi() const
{
    return MesafeyeDayaliTahminAlgoritmasi;
}

void KRGKargoBilgileri::setMesafeyeDayaliTahminAlgoritmasi(const ReelSayi &value)
{
    if (value == MesafeyeDayaliTahminAlgoritmasi)
        return;
    MesafeyeDayaliTahminAlgoritmasi = value;
    emit MesafeyeDayaliTahminAlgoritmasiDegisti(MesafeyeDayaliTahminAlgoritmasi);
    MesafeyeDayaliTahminAlgoritmasi = value;
}
QDataStream &operator<<(QDataStream &a, const KRGKargoBilgileriPtr &b)
{
    a << b->getGidenAdres() << b->getTeslimatSaatAraligi() << b->getId() << b->getKargoDurumu()
      << b->getOdeme() << b->getGonderiFiyat()<< b->getGonderiDesiBoyut()<< b->getMesafeyeDayaliTahminAlgoritmasi() ;

    return a;
}

QDataStream &operator>>(QDataStream &a, KRGKargoBilgileriPtr &b)
{
    Metin gidenAdres;
    Metin teslimatSaatAraligi;
    IdTuru kargoId;
    Metin kargoDurumu;
    ParaBirimi odeme;
    ParaBirimi gonderiFiyat;
    DesiHesabi gonderiDesiBoyut;
    ReelSayi MesafeyeDayaliTahminAlgoritmasi;

    a >> gidenAdres >> teslimatSaatAraligi>> kargoId >> kargoDurumu>> odeme >> gonderiFiyat >>gonderiDesiBoyut >>MesafeyeDayaliTahminAlgoritmasi ;

    b = std::make_shared<KRGKargoBilgileri>();

    b->setGidenAdres(gidenAdres);
    b->setTeslimatSaatAraligi(teslimatSaatAraligi);
    b->setId(kargoId);
    b->setKargoDurumu(kargoDurumu);
    b->setOdeme(odeme);
    b->setMesafeyeDayaliTahminAlgoritmasi(kargoId);
    b->setGonderiDesiBoyut(gonderiDesiBoyut);
    b->setGonderiFiyat(gonderiFiyat);
    return a;
}
