#include "mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /*
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    QSqlQuery* Database::sql = NULL;
    bool Database::getConnection()
    {
        db.setHostName("127.0.0.1");//本地主机
        db.setPort(3306);//端口
        db.setDatabaseName("Mysql");//数据库名
        db.setUserName("root");// 绑定数据库系统用户名
        db.setPassword("147258369");//密码
        bool ok = db.open();
        if (ok){
            QMessageBox::information(nullptr, "infor", "success！");
        }
        else {
            QMessageBox::information(nullptr, "infor", "Sorry！link failed");
            qDebug()<<"error open database because"<<db.lastError().text();
        }

        MainWindow w;
        w.show();
    }

    void Database::quitConnection()
    {
        db.close();
    }
    */


    MainWindow w;
    w.show();
    return a.exec();
}
