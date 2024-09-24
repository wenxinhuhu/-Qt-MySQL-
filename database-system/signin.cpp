#include "signin.h"
#include "ui_signin.h"
#include"appoint.h"
#include"pay.h"
#include"record.h"
#include"mainwindow.h"
#include <QMessageBox>
//signin::signin(QWidget *parent) :
signin::signin(QWidget *parent, const QString &username) :
    QDialog(parent),
    ui(new Ui::signin),
    username(username)
{
    ui->setupUi(this);

    connect(ui->appointButton, &QPushButton::clicked, this, &signin::on_appointButton_clicked);
    connect(ui->recordButton, &QPushButton::clicked, this, &signin::on_recordButton_clicked);
    connect(ui->payButton, &QPushButton::clicked, this, &signin::on_payButton_clicked);
}

signin::~signin()
{
    delete ui;
}
/*
void signin::on_radioButton_clicked()
{
    appoint *appointWindow = new appoint();
    appointWindow->show();
    this->close();
}

void signin::on_radioButton_2_clicked()
{
    record *recordWindow = new record(nullptr, username);//username 是登录时传递过来的
    recordWindow->show();
    this->close();
}

void signin::on_radioButton_3_clicked()
{
    pay *payWindow = new pay();
    payWindow->show();
    this->close();
}
*/
void signin::on_pushButton_2_clicked()
{
    MainWindow *w = new MainWindow();
    w->show();
    this->close();
}

void signin::on_appointButton_clicked()
{
    //appoint *appointWindow = new appoint();
    appoint *appointWindow = new appoint(nullptr, username);
    appointWindow->show();
    this->close();
}


void signin::on_recordButton_clicked()
{
    record *recordWindow = new record(nullptr, username);
    recordWindow->show();
    this->close();
}


void signin::on_payButton_clicked()
{
    pay *payWindow = new pay();
    payWindow->show();
    this->close();
}
