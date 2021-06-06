#ifndef TANIMLAR_H
#define TANIMLAR_H

#include <QByteArray>
#include <QDate>
#include <QDateTime>
#include <QString>
#include <QTime>
#include <QtCore>

typedef quint64 IdTuru;
typedef qint32 TcNo;
typedef qint16 AraMesafe;

typedef double TelNo;

typedef double ReelSayi ;

typedef float DesiHesabi;

typedef float ParaBirimi;

typedef QString Metin;

typedef QDate Tarih;
typedef QTime Saat;
typedef QDateTime TarihSaat;

typedef enum {
    KRGGonderici = 1,
    KRGAlici = 2,
    KRGSube = 4,
    KRGAdres = 8,
    KRGDesi = 16,
    KRGTeslimat = 32

} KRGDetay;

typedef QByteArray Resim;

// Pointer Tanımları

class KRGGondericiBilgileri;
class KRGAliciBilgileri;
class KRGSubeBilgileri;
class KRGKargoBilgileri;
class KRGFaturaBilgileri;
class KRGKargoHizmetleri;

#include <memory>

typedef std::shared_ptr<KRGGondericiBilgileri> KRGGondericiBilgileriPtr;
typedef std::shared_ptr<KRGAliciBilgileri> KRGAliciBilgileriPtr;
typedef std::shared_ptr<KRGSubeBilgileri> KRGSubeBilgileriPtr;
typedef std::shared_ptr<KRGKargoBilgileri> KRGKargoBilgileriPtr;
typedef std::shared_ptr<KRGFaturaBilgileri> KRGFaturaBilgileriPtr;
typedef std::shared_ptr<KRGKargoHizmetleri> KRGKargoHizmetleriPtr;

QDataStream &operator<<(QDataStream &stream, const KRGGondericiBilgileriPtr &veri);
QDataStream &operator>>(QDataStream &stream, KRGGondericiBilgileriPtr &veri);

QDataStream &operator<<(QDataStream &stream, const KRGAliciBilgileriPtr &veri);
QDataStream &operator>>(QDataStream &stream, KRGAliciBilgileriPtr &veri);

QDataStream &operator<<(QDataStream &a, const KRGSubeBilgileriPtr &b);
QDataStream &operator>>(QDataStream &a, KRGSubeBilgileriPtr &b);

QDataStream &operator<<(QDataStream &stream, const KRGKargoBilgileriPtr &veri);
QDataStream &operator>>(QDataStream &stream, KRGKargoBilgileriPtr &veri);

QDataStream &operator<<(QDataStream &stream, const KRGFaturaBilgileriPtr &veri);
QDataStream &operator>>(QDataStream &stream, KRGFaturaBilgileriPtr &veri);

QDataStream &operator<<(QDataStream &stream, const KRGKargoHizmetleriPtr &veri);
QDataStream &operator>>(QDataStream &stream, KRGKargoHizmetleriPtr &veri);
#endif // TANIMLAR_H
