#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"regi.h"
#include"signin.h"
#include"signin_doc.h"
#include <QApplication>
#include <QLabel>
#include "database.h"
#include "regi_doc.h"
#include "signin_doc.h"
#include <QMessageBox>
#include <QSqlQuery>

//QSqlDatabase Database::db = QSqlDatabase::addDatabase ("QODBC");    // 创建静态数据库实例
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->myDatabase.getConnection();//连接数据库
    //Database::db.getConnection();//连接数据库
    setWindowFlags(Qt::Widget);//使dialog项目有最大最小化按钮
    setWindowTitle("登录");
    this->ui->lineEdit->setFocus();//一开始就可以输入,不用单点
}

MainWindow::~MainWindow()
{
    delete ui;
}
/*全透明窗口，子控件不透明*/



void MainWindow::on_pushButton_clicked()
{
    exit(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    //this->~MainWindow();
    //regi* w = new regi();
    //w->show();
    /*
    QString userInputtype;
    if(ui->radioButton->isChecked()){
        userInputtype = "patient";
    }
    else
    {
        userInputtype = "doctor";
    }
    QString username = this->ui->lineEdit->text();
    QString password = this->ui->lineEdit_2->text();
    QString surepassword = this->ui->InputPassWord_2->text();
    QSqlQuery query;
    //病人注册
    if(ui->radioButton->isChecked()){
        query.exec("select UserID from patients where UserID = '"+username+"'");
        QString str1;
        while(query.next()){
            str1 = query.value("UserID").toString();
        }
        if(username.isEmpty()||password.isEmpty()||surepassword.isEmpty()){
            QMessageBox::information(NULL, "提示", "账号密码确认密码不得为空！", QMessageBox::Ok);
        }
        else if(!str1.isEmpty())
        {
            QMessageBox::information(NULL,"提示","该病人账号已被注册，请换一个账号注册吧！",QMessageBox::Ok);
            this->ui->InputPassWord->clear();
            this->ui->InputPassWord_2->clear();
            this->ui->InputPassWord->setFocus();
        }
        else if(password!=surepassword)
        {
            QMessageBox::information(NULL, "提示", "密码和确认密码不同，请重新输入！", QMessageBox::Ok);
            this->ui->InputPassWord->clear();
            this->ui->InputPassWord_2->clear();
            this->ui->InputPassWord->setFocus();
        }
        else
        {
            query.prepare("insert into patients(UserID,Password)values(?,?)");

            query.addBindValue(username);
            query.addBindValue(password);
            bool test = query.exec();
            if(test)
            {
                QMessageBox::information(NULL, "提示", "注册成功！", QMessageBox::Ok);
                //this->close();
            }
            else
            {
                QMessageBox::information(NULL, "提示", "注册不成功，请重新注册！", QMessageBox::Ok);
            }
        }
    }
    //医生注册
    else
    {
            query.exec("select Name from doctors where UserID = '"+username+"'");
            QString str1;
            while(query.next()){
                str1 = query.value("UserID").toString();
            }
            if(username.isEmpty()||password.isEmpty()||surepassword.isEmpty()){
                QMessageBox::information(NULL, "提示", "账号密码确认密码不得为空！", QMessageBox::Ok);
            }
            else if(!str1.isEmpty())
            {
                QMessageBox::information(NULL,"提示","该医生账号已被注册，请换一个账号吧！",QMessageBox::Ok);
                this->ui->InputPassWord->clear();
                this->ui->InputPassWord_2->clear();
                this->ui->InputPassWord->setFocus();
            }
            else if(password!=surepassword)
            {
                QMessageBox::information(NULL, "提示", "密码和确认密码不同，请重新输入！", QMessageBox::Ok);
                this->ui->InputPassWord->clear();
                this->ui->InputPassWord_2->clear();
                this->ui->InputPassWord->setFocus();
            }
            else
            {
                query.prepare("insert into doctors(UserID,Password)values(?,?)");

                query.addBindValue(username);
                query.addBindValue(password);
                bool test = query.exec();
                if(test)
                {
                    QMessageBox::information(NULL, "提示", "注册成功！", QMessageBox::Ok);
                    //this->close();
                }
                else
                {
                    QMessageBox::information(NULL, "提示", "注册不成功，请重新注册！", QMessageBox::Ok);
                }
    }
    */

    QString userInputtype;
    if(ui->radioButton->isChecked()){
        userInputtype = "patient";
    }
    else if(ui->radioButton_2->isChecked()){
        userInputtype = "doctor";
    }

    if(userInputtype.isEmpty()) {
        QMessageBox::information(NULL, "提示", "请选择身份！", QMessageBox::Ok);
        return;
    }

    if(userInputtype == "patient") {
        // 跳转到患者注册页面
        regi *w = new regi();
        w->show();
        this->close(); // 关闭当前窗口
    }
    else if(userInputtype == "doctor") {
        // 跳转到医生注册页面
        regi_doc *w = new regi_doc();
        w->show();
        this->close(); // 关闭当前窗口
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QString userInputtype;
    if(ui->radioButton->isChecked()){
        userInputtype = "patient";
    }
    else if(ui->radioButton_2->isChecked()){
        userInputtype = "doctor";
    }

    QString username = this->ui->lineEdit->text();
    QString password = this->ui->lineEdit_2->text();
    QSqlQuery query;
    QString strPassword;

    if(username.isEmpty() || password.isEmpty()){
        QMessageBox::information(NULL, "提示", "用户名和密码不得为空！", QMessageBox::Ok);
        return;
    }

    if(userInputtype == "patient") {
        query.exec("SELECT Password FROM patients WHERE UserID = '"+username+"'");
        if(query.next()){
            strPassword = query.value("Password").toString();
        }
        if(strPassword == password) {
            // 跳转到患者登录页面
            signin *w = new signin(nullptr, username);// 传递用户名
            w->show();
            this->close(); // 关闭当前窗口
        } else {
            QMessageBox::information(NULL, "提示", "用户名或密码错误！", QMessageBox::Ok);
        }
    }
    else if(userInputtype == "doctor") {
        query.exec("SELECT Password FROM doctors WHERE UserID = '"+username+"'");
        if(query.next()){
            strPassword = query.value("Password").toString();
        }
        if(strPassword == password) {
            // 跳转到医生登录页面
            signin_doc *w = new signin_doc();
            w->show();
            this->close(); // 关闭当前窗口
        } else {
            QMessageBox::information(NULL, "提示", "用户名或密码错误！", QMessageBox::Ok);
        }
    }
    else {
        QMessageBox::information(NULL, "提示", "请选择身份！", QMessageBox::Ok);
    }
}
