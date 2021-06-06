#ifndef KARGO_BILGILERI_H
#define KARGO_BILGILERI_H

#include <QMainWindow>
#include <Veri/tanimlar.h>
#include <QObject>

class KRGKargoBilgileri : public QMainWindow
{
    Q_OBJECT
public:
    explicit KRGKargoBilgileri(QWidget *parent = nullptr);

    Q_PROPERTY(Metin gidenAdres READ getGidenAdres
               WRITE setGidenAdres
               NOTIFY GidenAdresDegisti)
    Q_PROPERTY(Metin teslimatSaatAraligi READ getTeslimatSaatAraligi
               WRITE setTeslimatSaatAraligi
               NOTIFY TeslimatSaatAraligiDegisti)
    Q_PROPERTY(IdTuru id READ getId
               WRITE setId
               NOTIFY idDegisti)
    Q_PROPERTY(Metin KargoDurumu READ getKargoDurumu
               WRITE setKargoDurumu
               NOTIFY KargoDurumuDegisti)
    Q_PROPERTY(ParaBirimi odeme READ getOdeme
               WRITE setOdeme
               NOTIFY OdemeDegisti)
    Q_PROPERTY(ParaBirimi GonderiFiyat READ getGonderiFiyat
               WRITE setGonderiFiyat
               NOTIFY GonderiFiyatDegisti)
    Q_PROPERTY(DesiHesabi GonderiDesiBoyut READ getGonderiDesiBoyut
               WRITE setGonderiDesiBoyut
               NOTIFY GonderiDesiBoyutDegisti)
    Q_PROPERTY(ReelSayi MesafeyeDayaliTahminAlgoritmasi READ getMesafeyeDayaliTahminAlgoritmasi
               WRITE setMesafeyeDayaliTahminAlgoritmasi
               NOTIFY MesafeyeDayaliTahminAlgoritmasiDegisti)

    Metin getGidenAdres() const;
    Metin getTeslimatSaatAraligi() const;
    IdTuru getId() const;
    Metin getKargoDurumu() const;
    ParaBirimi getOdeme() const;
    ParaBirimi getGonderiFiyat() const;
    DesiHesabi getGonderiDesiBoyut() const;
    ReelSayi getMesafeyeDayaliTahminAlgoritmasi() const;

signals:
    void GonderiFiyatDegisti(const ParaBirimi &value);
    void GonderiDesiBoyutDegisti(const DesiHesabi &value);
    void MesafeyeDayaliTahminAlgoritmasiDegisti(const ReelSayi &value);
    void OdemeDegisti(const ParaBirimi &value);
    void KargoDurumuDegisti(const Metin &value);
    void idDegisti(const IdTuru &value);
    void TeslimatSaatAraligiDegisti(const Metin &value);
    void GidenAdresDegisti(const Metin &value);

public slots:

    void setGonderiFiyat(const ParaBirimi &value);
    void setGonderiDesiBoyut(const DesiHesabi &value);
    void setMesafeyeDayaliTahminAlgoritmasi(const ReelSayi &value);
    void setOdeme(const ParaBirimi &value);
    void setKargoDurumu(const Metin &value);
    void setId(const IdTuru &value);
    void setTeslimatSaatAraligi(const Metin &value);
    void setGidenAdres(const Metin &value);

private:
    Metin gidenAdres;
    Metin teslimatSaatAraligi;
    IdTuru kargoId;
    Metin kargoDurumu;
    ParaBirimi odeme;
    ParaBirimi gonderiFiyat;
    DesiHesabi gonderiDesiBoyut;
    ReelSayi MesafeyeDayaliTahminAlgoritmasi;

};

#endif // KARGO_BILGILERI_H
