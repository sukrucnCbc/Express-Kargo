#ifndef GONDERI_BILGILERI_FORM_H
#define GONDERI_BILGILERI_FORM_H

#include <QDialog>

namespace Ui {
class gonderi_bilgileri_form;
}

class gonderi_bilgileri_form : public QDialog
{
    Q_OBJECT

public:
    explicit gonderi_bilgileri_form(QWidget *parent = nullptr);
    ~gonderi_bilgileri_form();

private:
    Ui::gonderi_bilgileri_form *ui;
};

#endif // GONDERI_BILGILERI_FORM_H
