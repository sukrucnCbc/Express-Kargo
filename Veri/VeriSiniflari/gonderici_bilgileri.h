#ifndef GONDERICI_BILGILERI_H
#define GONDERICI_BILGILERI_H

#include <QObject>
#include <Veri/tanimlar.h>
#include <QMainWindow>


class KRGGondericiBilgileri : public QMainWindow
{
    Q_OBJECT
public:
    explicit KRGGondericiBilgileri(QWidget *parent = nullptr);
    Q_PROPERTY(Metin gondericiAdi READ getGondericiAdi WRITE setGondericiAdi NOTIFY gondericiAdiDegisti)
    Q_PROPERTY(Metin gondericiSoyadi READ getGondericiSoyadi WRITE setGondericiSoyadi NOTIFY gondericiSoyadiDegisti)
    Q_PROPERTY(Metin gondericiAdres READ getGondericiAdres WRITE setGondericiAdres NOTIFY gondericiAdresDegisti)
    Q_PROPERTY(TcNo gondericiTc READ getGondericiTc WRITE setGondericiTc NOTIFY gondericiTcDegisti)
    Q_PROPERTY(TelNo gondericiTelNo READ getGondericiTelNo WRITE setGondericiTelNo NOTIFY gondericiTelNoDegisti)
    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY idDegisti)




    Metin getGondericiAdi() const;
    Metin getGondericiSoyadi() const;
    Metin getGondericiAdres() const;
    TcNo getGondericiTc() const;
    TelNo getGondericiTelNo() const;
    IdTuru getId() const;


signals:
    void gondericiAdiDegisti(const Metin &value);
    void gondericiSoyadiDegisti(const Metin &value);
    void gondericiAdresDegisti(const Metin &value);
    void gondericiTcDegisti(const TcNo &value);
    void gondericiTelNoDegisti(const TelNo &value);
    void idDegisti(const IdTuru &value);

public slots:

    void setGondericiAdi(const Metin &value);
    void setGondericiSoyadi(const Metin &value);
    void setGondericiAdres(const Metin &value);
    void setGondericiTc(const TcNo &value);
    void setGondericiTelNo(const TelNo &value);
    void setId(const IdTuru &value);
private:

    Metin gondericiAdi;
    Metin gondericiSoyadi;
    Metin gondericiAdres;
    TcNo gondericiTc;
    TelNo gondericiTelNo;
    IdTuru gondericiId;
};







#endif // GONDERICI_BILGILERI_H
