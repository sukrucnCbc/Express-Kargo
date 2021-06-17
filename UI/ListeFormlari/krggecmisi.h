#ifndef KRGGECMISI_H
#define KRGGECMISI_H

#include <QDialog>
#include <Veri/VeriYoneticileri/alici_yonetici.h>
#include <Veri/VeriYoneticileri/gonderici_yonetici.h>
#include <Veri/VeriYoneticileri/kargo_bilgileri_yoneticisi.h>


namespace Ui {
class KRGGecmisi;
}

class KRGGecmisi : public QDialog
{
    Q_OBJECT

public:
    explicit KRGGecmisi(QWidget *parent = nullptr);
    ~KRGGecmisi();

private:
    void listeGuncelle();
    void Ara();

    Ui::KRGGecmisi *ui;

    KRGAliciYoneticisi::VeriListesi liste;
    KRGGondericiYoneticisi::VeriListesi liste2;
    KRGBilgileriYoneticisi::VeriListesi liste3;

};

#endif // KRGGECMISI_H
