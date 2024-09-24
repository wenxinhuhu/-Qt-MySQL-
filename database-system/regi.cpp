#include "regi.h"
#include "ui_regi.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
regi::regi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regi)
{
    ui->setupUi(this);
}

regi::~regi()
{
    delete ui;
}

void regi::on_pushButton_2_clicked()
{
    this->~regi();
    MainWindow *w = new MainWindow();
    w->show();

}

void regi::on_pushButton_clicked()
{
    QString username = this->ui->usernameLineEdit->text();
    QString password = this->ui->passwordLineEdit->text();
    QString confirmPassword = this->ui->confirmPasswordLineEdit->text();
    QString name = this->ui->nameLineEdit->text();
    QString gender = this->ui->genderComboBox->currentText();
    QString medicalHistory = this->ui->medicalHistoryTextEdit->toPlainText();
    QString contactPhone = this->ui->contactPhoneLineEdit->text();
    QString emergencyContact = this->ui->emergencyContactLineEdit->text();

    if(username.isEmpty() || password.isEmpty() || confirmPassword.isEmpty() || name.isEmpty() || gender.isEmpty() || contactPhone.isEmpty() || emergencyContact.isEmpty()) {
        QMessageBox::information(NULL, "提示", "所有字段均为必填项！", QMessageBox::Ok);
        return;
    }

    if(password != confirmPassword) {
        QMessageBox::information(NULL, "提示", "两次输入的密码不一致，请重新输入！", QMessageBox::Ok);
        this->ui->passwordLineEdit->clear();
        this->ui->confirmPasswordLineEdit->clear();
        this->ui->passwordLineEdit->setFocus();
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO patients (UserID, Password, Name, Gender, MedicalHistory, ContactPhone, EmergencyContact) VALUES (?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(username);
    query.addBindValue(password);
    query.addBindValue(name);
    query.addBindValue(gender);
    query.addBindValue(medicalHistory);
    query.addBindValue(contactPhone);
    query.addBindValue(emergencyContact);

    if(query.exec()) {
        QMessageBox::information(NULL, "提示", "注册成功！", QMessageBox::Ok);
        this->close(); // 关闭当前窗口
    } else {
        QMessageBox::information(NULL, "提示", "注册失败，请重试！", QMessageBox::Ok);
    }
}
