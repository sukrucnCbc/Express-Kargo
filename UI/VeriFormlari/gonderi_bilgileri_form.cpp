#include "gonderi_bilgileri_form.h"
#include "ui_gonderi_bilgileri_form.h"

gonderi_bilgileri_form::gonderi_bilgileri_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gonderi_bilgileri_form)
{
    ui->setupUi(this);
}

gonderi_bilgileri_form::~gonderi_bilgileri_form()
{
    delete ui;
}
