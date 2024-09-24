#include "database.h"
#include "mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
QSqlDatabase Database::db = QSqlDatabase::addDatabase ("QODBC");    // 创建静态数据库实例
QSqlQuery* Database::sql = NULL;

Database::Database()
{
    qDebug()<<"数据库实例已创建";
}
bool Database::getConnection()
{
    // 数据库连接
    db.setHostName("127.0.0.1");//本地主机
    db.setPort(3306);//端口
    db.setDatabaseName("Mysql");//数据库名
    db.setUserName("root");// 绑定数据库系统用户名
    db.setPassword("147258369");//密码

    if(!db.open ())
    {
        QMessageBox::information(nullptr, "infor", "Sorry！link failed");
        qDebug()<<"DataBase Error";
        qDebug()<<db.lastError().text();
        return false;
    }
    else
    {
        QMessageBox::information(nullptr, "infor", "success！");
        qDebug()<<"connect successed!";
        return true;
    }
}

void Database::quitConnection()
{
    db.close();
}
