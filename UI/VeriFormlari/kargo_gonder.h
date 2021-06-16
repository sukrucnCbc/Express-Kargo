#ifndef KARGO_GONDER_H
#define KARGO_GONDER_H

#include <Veri/tanimlar.h>
#include <QDialog>

namespace Ui {
class kargo_gonder;
}

class kargo_gonder : public QDialog
{
    Q_OBJECT

public:
    explicit kargo_gonder(QWidget *parent = nullptr);
    ~kargo_gonder();

    KRGGondericiBilgileriPtr getGveri() const;
    void setGveri(const KRGGondericiBilgileriPtr &value);

    KRGAliciBilgileriPtr getAveri() const;
    void setAveri(const KRGAliciBilgileriPtr &value);

    KRGKargoBilgileriPtr getKveri() const;
    void setKveri(const KRGKargoBilgileriPtr &value);

private:
    Ui::kargo_gonder *ui;
    KRGGondericiBilgileriPtr gveri ;
    KRGAliciBilgileriPtr averi;
    KRGKargoBilgileriPtr kveri;
};

#endif // KARGO_GONDER_H
QDataStream &operator<<(QDataStream &a, const kargo_gonder &b);
QDataStream &operator>>(QDataStream &a, kargo_gonder &b);
