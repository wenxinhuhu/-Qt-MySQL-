#include "addrec.h"
#include "ui_addrec.h"
#include"record.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
addrec::addrec(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addrec)
{
    ui->setupUi(this);
}

addrec::~addrec()
{
    delete ui;
}

void addrec::on_pushButton_2_clicked()
{
    this->~addrec();
    record *w = new record();
    w->show();
}

void addrec::on_pushButton_clicked()
{
    // 获取用户输入的值
    int userId = ui->userIdLineEdit->text().toInt();
    QString doctorNotes = ui->doctorNotesLineEdit->text();
    QString treatment = ui->treatmentLineEdit->text();
    QString diagnosisResult = ui->diagnosisResultLineEdit->text();
    QString visitDate = ui->visitDateLineEdit->text();

    QSqlQuery query;
    query.prepare("INSERT INTO medicalrecords (DoctorNotes, Treatment, DiagnosisResult, VisitDate, UserID) "
                  "VALUES (:doctorNotes, :treatment, :diagnosisResult, :visitDate, :userId)");
    query.bindValue(":doctorNotes", doctorNotes);
    query.bindValue(":treatment", treatment);
    query.bindValue(":diagnosisResult", diagnosisResult);
    query.bindValue(":visitDate", visitDate);
    query.bindValue(":userId", userId);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Record added successfully");
    } else {
        QMessageBox::critical(this, "Error", query.lastError().text());

    }
}
