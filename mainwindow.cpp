#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <Veri/kargo_genel_yonetici.h>
#include <QDir>
#include <QStandardPaths>
#include <QFile>
#include <QDataStream>
#include <ui/VeriFormlari/kargo_gonder.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Verileri dosyadan okuma
    QString dosya_yolu = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);
    QDir dosya_klasoru(dosya_yolu);

    if (dosya_klasoru.exists("kargo.db")) {
        QFile dosya(dosya_yolu + "/kargo.db");

        if (dosya.open(QIODevice::ReadOnly)) {
            QDataStream oku(&dosya);

            oku >> KRGGenelYonetici::sec();

            dosya.close();
        }
    }


}

MainWindow::~MainWindow()
{
    delete ui;

    // Verilerimizi dosyadan okuyalım
    QString dosya_yolu = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);

    QFile dosya(dosya_yolu + "/kargo.db");
    if (dosya.open(QIODevice::WriteOnly)) {
        QDataStream yaz(&dosya);

        yaz << KRGGenelYonetici::sec();

        dosya.close();
    }
}



void MainWindow::on_actionKargo_G_nder_triggered()
{

        kargo_gonder form;
        auto veri = KRGGenelYonetici::sec().getKargoBilgileri().yeni();

        form.setKveri(veri);

        if (form.exec() == QDialog::Accepted) {
            form.getKveri();
            KRGGenelYonetici::sec().getKargoBilgileri().ekle(veri);
        }


}
