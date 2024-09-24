#include "signin_doc.h"
#include "ui_signin_doc.h"

signin_doc::signin_doc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signin_doc)
{
    ui->setupUi(this);
}

signin_doc::~signin_doc()
{
    delete ui;
}
