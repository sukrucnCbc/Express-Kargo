#include "kargo_bilgileri_yoneticisi.h"
#include <Veri/VeriSiniflari/kargo_bilgileri.h>

KRGBilgileriYoneticisi::KRGBilgileriYoneticisi(QObject *parent) : QObject(parent), TemelVeriYoneticileri<KRGKargoBilgileri, KRGKargoBilgileriPtr>()
{

}
KRGBilgileriYoneticisi::Ptr KRGBilgileriYoneticisi::kopyaOlustur(
    KRGBilgileriYoneticisi::Ptr kaynak) const
{
    Ptr kopya = yeni();

    kopya->setGidenAdres(kaynak->getGidenAdres());
    kopya->setTeslimatSaatAraligi(kaynak->getTeslimatSaatAraligi());
    kopya->setId(kaynak->getId());
    kopya->setKargoDurumu(kaynak->getKargoDurumu());
    kopya->setOdeme(kaynak->getOdeme());
    kopya->setGonderiFiyat(kaynak->getGonderiFiyat());
    kopya->setGonderiDesiBoyut(kaynak->getGonderiDesiBoyut());
    kopya->setMesafeyeDayaliTahminAlgoritmasi(kaynak->getMesafeyeDayaliTahminAlgoritmasi());

    return kopya;
}
