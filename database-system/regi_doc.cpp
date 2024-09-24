#include "regi_doc.h"
#include "ui_regi_doc.h"
#include"mainwindow.h"
regi_doc::regi_doc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regi_doc)
{
    ui->setupUi(this);
}

regi_doc::~regi_doc()
{
    delete ui;
}

void regi_doc::on_pushButton_clicked()
{
    QString username = this->ui->usernameLineEdit->text();
    QString password = this->ui->passwordLineEdit->text();
    QString confirmPassword = this->ui->confirmPasswordLineEdit->text();
    QString name = this->ui->nameLineEdit->text();
    QString gender = this->ui->genderComboBox->currentText(); // QComboBox
    QString workHours = this->ui->workHoursLineEdit->text();
    QString departmentID = this->ui->departmentIDLineEdit->text();
    QString level = this->ui->levelLineEdit->currentText();
    QString contactPhone = this->ui->contactPhoneLineEdit->text();

    if(username.isEmpty() || password.isEmpty() || confirmPassword.isEmpty() || name.isEmpty() || gender.isEmpty() || workHours.isEmpty() || departmentID.isEmpty() || level.isEmpty() || contactPhone.isEmpty()) {
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
    query.prepare("INSERT INTO doctors (UserID, Password, Name, Gender, WorkHours, DepartmentID, Level, ContactPhone) VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(username);
    query.addBindValue(password);
    query.addBindValue(name);
    query.addBindValue(gender);
    query.addBindValue(workHours);
    query.addBindValue(departmentID);
    query.addBindValue(level);
    query.addBindValue(contactPhone);

    if(query.exec()) {
        QMessageBox::information(NULL, "提示", "注册成功！", QMessageBox::Ok);
        this->close(); // 关闭当前窗口
    } else {
        QMessageBox::information(NULL, "提示", "注册失败，请重试！", QMessageBox::Ok);
    }
}

void regi_doc::on_pushButton_2_clicked()
{
    this->~regi_doc();
    MainWindow *w = new MainWindow();
    w->show();
}
