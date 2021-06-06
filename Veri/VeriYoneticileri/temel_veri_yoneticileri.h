#ifndef TEMEL_VERI_YONETICILERI_H
#define TEMEL_VERI_YONETICILERI_H

#include <Veri/tanimlar.h>
#include <QObject>

template<class V, class P>
class TemelVeriYoneticileri
{
public:
    typedef V Veri;
    typedef P Ptr;
    typedef QList<Ptr> VeriListesi;
    typedef std::function<bool(Ptr)> Sart;

    explicit TemelVeriYoneticileri() { enSonId = 0; }

    // 1. Yeni Gönderici Oluşturur

    Ptr yeni() const
    {
        Ptr yeni = std::make_shared<Veri>();
        return yeni;
    }

    // 2. Listeye Gönderici Ekleme

    void ekle(Ptr gonderici)
    {
        // ilacId = 0, enSonId = 0
        gonderici->setId(enSonId++); // ilacId = 0, enSonId = 1
        veriler.append(gonderici);
    }

    // 3. Listeden Gönderici Silme

    Ptr sil(IdTuru gondericiId)
    {
        for (int i = 0; i < veriler.size(); i++) {
            if (veriler[i]->getId() == gondericiId) {
                Ptr sonuc = veriler.takeAt(i);
                return sonuc;
            }
        }
        throw QObject::tr("Aranılan veri bulunamadı! Silme işlemi iptal edildi!");
    }

    Ptr sil(Ptr gonderici) { return sil(gonderici->getId()); }

    // 5. Gönderici Arama

    Ptr ilkiniBul(Sart f)
    {
        // I. Yol
        for (int i = 0; i < veriler.size(); i++) {
            Ptr veri_i = veriler[i];
            if (f(veri_i)) {
                return veri_i;
            }
        }

        throw QObject::tr("Aranılan veri bulunamadı!");

    }

    Ptr sonuncuyuBul(Sart f)
    {
        // I. Yol
        for (int i = veriler.size() - 1; i >= 0; i--) {
            Ptr veri_i = veriler[i];
            if (f(veri_i)) {
                return veri_i;
            }
        }

        throw QObject::tr("Aranılan veri bulunamadı !");

    }

    VeriListesi tumunuBul(Sart f)
    {
        VeriListesi sonuc;

        for (int i = 0; i < veriler.size(); i++) {
            Ptr veri_i = veriler[i];
            if (f(veri_i)) {
                sonuc.append(veri_i);
            }
        }

        return sonuc;
    }

protected:
    VeriListesi veriler;

    IdTuru enSonId;

    template<class H, class M>
    friend QDataStream &operator<<(QDataStream &stream, TemelVeriYoneticileri<H, M> &veri);

    template<class F, class B>
    friend QDataStream &operator>>(QDataStream &stream, TemelVeriYoneticileri<F, B> &veri);
};

template<class V, class P>
QDataStream &operator<<(QDataStream &stream, TemelVeriYoneticileri<V, P> &veri)
{
    stream << veri.enSonId << veri.veriler;
    return stream;
}

template<class V, class P>
QDataStream &operator>>(QDataStream &stream, TemelVeriYoneticileri<V, P> &veri)
{
    stream >> veri.enSonId >> veri.veriler;
    return stream;
}
#endif // TEMEL_VERI_YONETICILERI_H
