#ifndef GONDERICI_YONETICI_H
#define GONDERICI_YONETICI_H

#include <Veri/VeriYoneticileri/temel_veri_yoneticileri.h>
#include <QObject>

class KRGGondericiYoneticisi
        : public QObject,
        public TemelVeriYoneticileri<KRGGondericiBilgileri, KRGGondericiBilgileriPtr>
{
    Q_OBJECT
public:
    explicit KRGGondericiYoneticisi(QObject *parent = nullptr);

    // 4. İlacın Kopyasını Oluşturulsun

    Ptr kopyaOlustur(Ptr kaynak) const;

signals:

};


#endif // GONDERICI_YONETICI_H
