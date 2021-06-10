#ifndef ALICI_BILGILERI_H
#define ALICI_BILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>


class KRGAliciBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit KRGAliciBilgileri(QObject *parent = nullptr);

    Q_PROPERTY(IdTuru id READ getId WRITE
               setId NOTIFY idDegisti)
    Q_PROPERTY(Metin aliciAdi READ getAliciAdi WRITE
               setAliciAdi NOTIFY aliciAdiDegisti)
    Q_PROPERTY(Metin aliciSoyadi READ getAliciSoyadi WRITE
               setAliciSoyadi NOTIFY aliciSoyadiDegisti)
    Q_PROPERTY(Metin aliciAdres READ getAliciAdres WRITE
               setAliciAdres NOTIFY aliciAdresDegisti)
    Q_PROPERTY(TcNo aliciTc READ getAliciTc WRITE
               setAliciTci NOTIFY aliciTcDegisti)
    Q_PROPERTY(TelNo aliciTelNo READ getAliciTelNo WRITE
               setAliciTelNo NOTIFY aliciTelNoDegisti)


    Metin getAliciAdi() const;
    Metin getAliciSoyadi() const;
    Metin getAliciAdres() const;
    TcNo getAliciTc() const;
    TelNo getAliciTelNo() const;
    IdTuru getId() const;

signals:

    void aliciAdiDegisti(const Metin &value);
    void aliciSoyadiDegisti(const Metin &value);
    void aliciAdresDegisti(const Metin &value);
    void aliciTcDegisti(const TcNo &value);
    void aliciTelNoDegisti(const TelNo &value);
    void idDegisti(const IdTuru &value);

public slots:

    void setAliciAdi(const Metin &value);
    void setAliciSoyadi(const Metin &value);
    void setAliciAdres(const Metin &value);
    void setAliciTc(const TcNo &value);
    void setAliciTelNo(const TelNo &value);
    void setId(const IdTuru &value);

private:

    Metin aliciAdi;
    Metin aliciSoyadi;
    Metin aliciAdres;
    TcNo aliciTc;
    TelNo aliciTelNo;
    IdTuru aliciId;


};

QDataStream &operator<<(QDataStream &stream, const KRGAliciBilgileriPtr &veri);
QDataStream &operator>>(QDataStream &stream, KRGAliciBilgileriPtr &veri);

#endif // ALICI_BILGILERI_H
