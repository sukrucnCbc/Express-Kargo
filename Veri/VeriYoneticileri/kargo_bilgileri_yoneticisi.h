#ifndef KARGO_BILGILERI_YONETICISI_H
#define KARGO_BILGILERI_YONETICISI_H

#include <QObject>
#include <Veri/VeriYoneticileri/temel_veri_yoneticileri.h>

class KRGBilgileriYoneticisi : public QObject,
        public TemelVeriYoneticileri<KRGKargoBilgileri, KRGKargoBilgileriPtr>
{
    Q_OBJECT
public:
    explicit KRGBilgileriYoneticisi(QObject *parent = nullptr);

    Ptr kopyaOlustur(Ptr kaynak) const;

signals:

};

#endif // KARGO_BILGILERI_YONETICISI_H
