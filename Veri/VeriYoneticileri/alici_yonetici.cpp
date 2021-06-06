#include "alici_yonetici.h"
#include <Veri/VeriSiniflari/alici_bilgileri.h>
#include <QtMath>

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



