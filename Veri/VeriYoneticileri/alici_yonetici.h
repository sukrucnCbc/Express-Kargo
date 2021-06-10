#ifndef ALICI_YONETICI_H
#define ALICI_YONETICI_H

#include <Veri/VeriYoneticileri/temel_veri_yoneticileri.h>
#include <QObject>

class KRGAliciYoneticisi
        : public QObject,
        public TemelVeriYoneticileri<KRGAliciBilgileri, KRGAliciBilgileriPtr>
{
    Q_OBJECT
public:
    explicit KRGAliciYoneticisi(QObject *parent = nullptr);

    Ptr kopyaOlustur(Ptr kaynak) const;

signals:

};


#endif // ALICI_YONETICI_H
