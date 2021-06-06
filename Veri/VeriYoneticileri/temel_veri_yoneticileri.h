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

    // 1. Yeni Kargo Oluşturur

    Ptr yeni() const
    {
        Ptr yeni = std::make_shared<Veri>();
        return yeni;
    }

    // 2. Listeye Kargo Ekleme

    void ekle(Ptr kargo)
    {
        // ilacId = 0, enSonId = 0
        kargo->setId(enSonId++); // kargoId = 0, enSonId = 1
        veriler.append(kargo);
    }

    // 3. Listeden Kargo Silme

    Ptr sil(IdTuru kargoId)
    {
        for (int i = 0; i < veriler.size(); i++) {
            if (veriler[i]->getId() == kargoId) {
                Ptr sonuc = veriler.takeAt(i);
                return sonuc;
            }
        }
        throw QObject::tr("Aranılan veri bulunamadı ! Silme işlemi iptal edildi!");
    }

    Ptr sil(Ptr kargo) { return sil(kargo->getId()); }

    // 5. Kargo Arama

    Ptr ilkiniBul(Sart f)
    {       
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

    template<class E, class K>
    friend QDataStream &operator<<(QDataStream &stream, TemelVeriYoneticileri<E, K> &veri);

    template<class C, class B>
    friend QDataStream &operator>>(QDataStream &stream, TemelVeriYoneticileri<C, B> &veri);
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
