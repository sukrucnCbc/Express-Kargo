#ifndef ALICI_BILGILERI_H
#define ALICI_BILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>
#include <QMainWindow>

class KRGAliciBilgileri : public QMainWindow
{
    Q_OBJECT
public:
    explicit KRGAliciBilgileri(QWidget *parent = nullptr);

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

signals:
    void aliciAdiDegisti(const Metin &value);
    void aliciSoyadiDegisti(const Metin &value);
    void aliciAdresDegisti(const Metin &value);
    void aliciTcDegisti(const TcNo &value);
    void aliciTelNoDegisti(const TelNo &value);

public slots:
    void setAliciAdi(const Metin &value);
    void setAliciSoyadi(const Metin &value);
    void setAliciAdres(const Metin &value);
    void setAliciTc(const TcNo &value);
    void setAliciTelNo(const TelNo &value);

private:
    Metin aliciAdi;
    Metin aliciSoyadi;
    Metin aliciAdres;
    TcNo aliciTc;
    TelNo aliciTelNo;


};

#endif // ALICI_BILGILERI_H
