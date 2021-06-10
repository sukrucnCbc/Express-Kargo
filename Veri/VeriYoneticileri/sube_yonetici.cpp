#include "sube_yonetici.h"
#include <Veri/VeriSiniflari/sube_bilgileri.h>
KRGSubeYoneticisi::KRGSubeYoneticisi(QObject *parent) : QObject(parent)
{

}


KRGSubeYoneticisi::Ptr KRGSubeYoneticisi::kopyaOlustur(TemelVeriYoneticileri::Ptr kaynak) const

{
    Ptr kopya = yeni();

    kopya->setId(kaynak->getId());
    kopya->setSubeAdi(kaynak->getSubeAdi());
    kopya->setSubeAdresi(kaynak->getSubeAdresi());
    kopya->setSubeSorumlusu(kaynak->getSubeSorumlusu());
    kopya->setSubeTel(kaynak->getSubeTel());
    kopya->setSubelerArasiKm(kaynak->getSubelerArasiKm());

    return kopya;
}



