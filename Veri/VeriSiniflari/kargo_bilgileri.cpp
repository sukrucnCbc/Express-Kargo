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

Metin KRGKargoBilgileri::getKargoId() const
{
    return kargoId;
}

void KRGKargoBilgileri::setKargoId(const Metin &value)
{
    if (value == kargoId)
        return;
    kargoId = value;
    emit KargoIdDegisti(kargoId);
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
