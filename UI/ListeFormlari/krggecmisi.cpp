#include "krggecmisi.h"
#include "ui_krggecmisi.h"

#include <Veri/kargo_genel_yonetici.h>
#include <Veri/VeriSiniflari/kargo_bilgileri.h>
#include <Veri/VeriSiniflari/alici_bilgileri.h>
#include <Veri/VeriSiniflari/gonderici_bilgileri.h>

#include <QStringList>
#include <QTableWidgetItem>

KRGGecmisi::KRGGecmisi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KRGGecmisi)
{
    ui->setupUi(this);
}

KRGGecmisi::~KRGGecmisi()
{
    delete ui;
}

void KRGGecmisi::listeGuncelle()
{
    ui->tbl_Liste->clear();
    ui->tbl_Liste->setRowCount(liste.length() +1);
    ui->tbl_Liste->setColumnCount(6);

    QStringList basliklar;
    basliklar<<tr("Kargo ID")<<tr("Alıcı Adı")<<tr("Alıcı Tel No")<<tr("Gönderici Adı")<<tr("Gönderici Tel No");
    ui->tbl_Liste->setVerticalHeaderLabels(basliklar);

    for(int i=0;i<liste.length(); i++) {

        QTableWidgetItem *hucre = new QTableWidgetItem();
        hucre->setText(liste[i]->getAliciAdi());
        ui->tbl_Liste->setItem(i,1,hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(tr("%1").arg(liste[i]->getAliciTelNo()));
        ui->tbl_Liste->setItem(i,2,hucre);
    }

    for(int i=0;i<liste3.length(); i++) {

        QTableWidgetItem *hucre=new QTableWidgetItem();
        hucre->setText(tr("%1").arg(liste3[i]->getId()));
        ui->tbl_Liste->setItem(i,0,hucre);
    }

    for(int i=0;i<liste2.length(); i++){

        QTableWidgetItem *hucre = new QTableWidgetItem();
        hucre->setText(liste2[i]->getGondericiAdi());
        ui->tbl_Liste->setItem(i,0,hucre);

        hucre = new QTableWidgetItem();
        hucre->setText(tr("%1").arg(liste2[i]->getGondericiTelNo()));
        ui->tbl_Liste->setItem(i,1,hucre);
    }
}

void KRGGecmisi::Ara()
{
    liste = KRGGenelYonetici::sec().getAliciBilgileri().tumunuBul([](KRGAliciYoneticisi::Ptr p){return true;});
    liste2 = KRGGenelYonetici::sec().getGondericiBilgileri().tumunuBul([](KRGGondericiYoneticisi::Ptr p){return true;});
    liste3 = KRGGenelYonetici::sec().getKargoBilgileri().tumunuBul([](KRGBilgileriYoneticisi::Ptr p){return true;});

}
