#ifndef KARGO_BILGILERI_YONETICISI_H
#define KARGO_BILGILERI_YONETICISI_H

#include <QObject>
#include <Veri/VeriYoneticileri/temel_veri_yoneticileri.h>

class Kargo_Bilgileri_Yoneticisi : public QObject,
        public TemelVeriYoneticileri<KRGKargoBilgileri, KRGKargoBilgileriPtr>
{
    Q_OBJECT
public:
    explicit Kargo_Bilgileri_Yoneticisi(QObject *parent = nullptr);

    Ptr kopyaOlustur(Ptr kaynak) const;

signals:

};

#endif // KARGO_BILGILERI_YONETICISI_H
