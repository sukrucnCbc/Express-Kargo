#include "gonderici_yonetici.h"
#include <Veri/VeriSiniflari/gonderici_bilgileri.h>
KRGGondericiYoneticisi::KRGGondericiYoneticisi(QObject *parent) : QObject(parent)
{

}



KRGGondericiYoneticisi::Ptr KRGGondericiYoneticisi::kopyaOlustur(TemelVeriYoneticileri::Ptr kaynak) const

{
    Ptr kopya = yeni();

    kopya->setId(kaynak->getId());
    kopya->setGondericiAdi(kaynak->getGondericiAdi());
    kopya->setGondericiSoyadi(kaynak->getGondericiSoyadi());
    kopya->setGondericiTc(kaynak->getGondericiTc());
    kopya->setGondericiTelNo(kaynak->getGondericiTelNo());
    kopya->setGondericiAdres(kaynak->getGondericiAdres());

    return kopya;
}
