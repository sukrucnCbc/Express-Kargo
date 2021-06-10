#include "alici_yonetici.h"
#include <Veri/VeriSiniflari/alici_bilgileri.h>
KRGAliciYoneticisi::KRGAliciYoneticisi(QObject *parent) : QObject(parent)
{

}



KRGAliciYoneticisi::Ptr KRGAliciYoneticisi::kopyaOlustur(TemelVeriYoneticileri::Ptr kaynak) const

{
    Ptr kopya = yeni();

    kopya->setId(kaynak->getId());
    kopya->setAliciAdi(kaynak->getAliciAdi());
    kopya->setAliciSoyadi(kaynak->getAliciSoyadi());
    kopya->setAliciTc(kaynak->getAliciTc());
    kopya->setAliciTelNo(kaynak->getAliciTelNo());
    kopya->setAliciAdres(kaynak->getAliciAdres());

    return kopya;
}



