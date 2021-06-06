#include "kargo_bilgileri_yoneticisi.h"
#include <Veri/VeriSiniflari/kargo_bilgileri.h>

Kargo_Bilgileri_Yoneticisi::Kargo_Bilgileri_Yoneticisi(QObject *parent) : QObject(parent), TemelVeriYoneticileri<KRGKargoBilgileri, KRGKargoBilgileriPtr>()
{

}
Kargo_Bilgileri_Yoneticisi::Ptr Kargo_Bilgileri_Yoneticisi::kopyaOlustur(
    Kargo_Bilgileri_Yoneticisi::Ptr kaynak) const
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
