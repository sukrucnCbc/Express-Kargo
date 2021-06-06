#ifndef SUBE_BILGILERI_H
#define SUBE_BILGILERI_H

#include <QMainWindow>
#include <QObject>
#include <Veri/tanimlar.h>

class KRGSubeBilgileri : public QMainWindow
{
    Q_OBJECT

public:
    explicit KRGSubeBilgileri(QWidget *parent = nullptr);
    Q_PROPERTY(Metin subeAdi READ getSubeAdi WRITE
               setSubeAdi NOTIFY subeAdiDegisti)
    Q_PROPERTY(Metin subeAdresi READ getSubeAdresi WRITE
               setSubeAdresi NOTIFY subeAdresiDegisti)
    Q_PROPERTY(Metin subeSorumlusu READ getSubeSorumlusu WRITE
               setSubeSorumlusu NOTIFY subeSorumlusuDegisti)
    Q_PROPERTY(TelNo subeTel READ getSubeTel WRITE
               setSubeTel NOTIFY subeTelDegisti)
    Q_PROPERTY(AraMesafe subeArasiKm READ getSubelerArasiKm WRITE
               setSubelerArasiKm NOTIFY subelerArasiKmDegisti)
    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY idDegisti)


    Metin getSubeAdi() const;
    Metin getSubeAdresi() const;
    Metin getSubeSorumlusu() const;
    TelNo getSubeTel() const;
    AraMesafe getSubelerArasiKm() const;
    IdTuru getId() const;


signals:
    void subeAdiDegisti(const Metin &value);
    void subeAdresiDegisti(const Metin &value);
    void subeSorumlusuDegisti(const Metin &value);
    void subeTelDegisti(const TelNo &value);
    void subelerArasiKmDegisti(const AraMesafe &value);
    void idDegisti(const IdTuru &value);


public slots:
    void setSubeAdi(const Metin &value);
    void setSubeAdresi(const Metin &value);
    void setSubeSorumlusu(const Metin &value);
    void setSubeTel(const TelNo &value);
    void setSubelerArasiKm(const AraMesafe &value);
    void setId(const IdTuru &value);


private:
    Metin subeAdi;
    Metin subeAdresi;
    Metin subeSorumlusu;
    TelNo subeTel;
    AraMesafe subelerArasiKm;
    IdTuru subeId;
};

#endif // SUBE_BILGILERI_H
