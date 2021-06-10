#ifndef SUBE_YONETICI_H
#define SUBE_YONETICI_H


#include <Veri/VeriYoneticileri/temel_veri_yoneticileri.h>
#include <QObject>

class KRGSubeYoneticisi
        : public QObject,
        public TemelVeriYoneticileri<KRGSubeBilgileri, KRGSubeBilgileriPtr>
{
    Q_OBJECT
public:
    explicit KRGSubeYoneticisi(QObject *parent = nullptr);

    Ptr kopyaOlustur(Ptr kaynak) const;

signals:

};


#endif // SUBE_YONETICI_H
