#include "kargo_gonder.h"
#include "ui_kargo_gonder.h"
#include <Veri/VeriSiniflari/kargo_bilgileri.h>
#include <Veri/VeriSiniflari/alici_bilgileri.h>
#include <Veri/VeriSiniflari/gonderici_bilgileri.h>

kargo_gonder::kargo_gonder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kargo_gonder)
{
    ui->setupUi(this);
}

kargo_gonder::~kargo_gonder()
{
    delete ui;
}

KRGGondericiBilgileriPtr kargo_gonder::getGveri() const
{
    gveri->setGondericiAdi(ui->le_gonAD->text());
    gveri->setGondericiSoyadi(ui->le_gonSad->text());
    gveri->setGondericiTelNo(ui->le_gonTel->text().toInt());
    gveri->setGondericiAdres(ui->pte_gonAdres->toPlainText());
    return gveri;
}

void kargo_gonder::setGveri(const KRGGondericiBilgileriPtr &value)
{
    gveri = value;
    ui->le_gonAD->setText(gveri->getGondericiAdi());
    ui->le_gonSad->setText(gveri->getGondericiSoyadi());
    ui->pte_gonAdres->document()->setPlainText(gveri->getGondericiAdres());
    ui->le_gonTel->Int
}

KRGAliciBilgileriPtr kargo_gonder::getAveri() const
{
    averi->setAliciAdi(ui->le_alAd->text());
    averi->setAliciSoyadi(ui->le_alSoyad->text());
    averi->setAliciTelNo(ui->le_alTel->text().toInt());
    averi->setAliciAdres(ui->pte_alAdres->toPlainText());
    return averi;
}

void kargo_gonder::setAveri(const KRGAliciBilgileriPtr &value)
{
    averi = value;
}

KRGKargoBilgileriPtr kargo_gonder::getKveri() const
{
    if(ui->rb_nakit->isChecked()) {
        kveri->setOdeme(KRGNakit);
    } else if (ui->rb_kapida->isChecked()){
        kveri->setOdeme(KRGKapidaOde);
    } else if (ui->rb_aliciOde->isChecked()) {
        kveri->setOdeme(KRGAliciOde);
    }
    {

    }
    return kveri;
}

void kargo_gonder::setKveri(const KRGKargoBilgileriPtr &value)
{
    kveri = value;
    ui->rb
}
