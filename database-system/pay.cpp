#include "pay.h"
#include "ui_pay.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQueryModel>
#include<QDebug>
/*
pay::pay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pay)
{
    ui->setupUi(this);
}
*/

pay::pay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pay)
{
    ui->setupUi(this);

    // 连接按钮的信号和槽
    connect(ui->queryButton, &QPushButton::clicked, this, &pay::queryPaymentRecord);
    connect(ui->updateStatusButton, &QPushButton::clicked, this, &pay::updateClaimStatus);
}

pay::~pay()
{
    delete ui;
}

void pay::on_pushButton_2_clicked()
{
    this->~pay();
    signin *w = new signin();
    w->show();
}


void pay::queryPaymentRecord()
{
    QString paymentRecordId = ui->paymentRecordIdEdit->text();
    QSqlQuery query;
    query.prepare("SELECT * FROM paymentrecords WHERE PaymentRecordID = :paymentRecordId");
    query.bindValue(":paymentRecordId", paymentRecordId.toInt());

    if (!query.exec()) {
        QMessageBox::critical(this, "Query Failed", "Query failed: " + query.lastError().text());
        return;
    }

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(query);
    ui->tableView->setModel(model);

    model->setHeaderData(0, Qt::Horizontal, tr("支付序号"));
    model->setHeaderData(1, Qt::Horizontal, tr("用户名"));
    model->setHeaderData(2, Qt::Horizontal, tr("支付数额"));
    model->setHeaderData(3, Qt::Horizontal, tr("支付方式"));
    model->setHeaderData(4, Qt::Horizontal, tr("支付状态"));
    model->setHeaderData(5, Qt::Horizontal, tr("支付记录产生日期"));
}

void pay::updateClaimStatus()
{
    qDebug() << "Update Status Button Clicked"; // 调试输出
    QString paymentRecordId = ui->paymentRecordIdEdit->text();
    QString newClaimStatus = ui->statusEdit->text(); // 获取用户填写的新状态

    // 调用存储过程
    QSqlQuery query;
    query.prepare("CALL UpdatePaymentStatus(:paymentRecordId, :newClaimStatus)");
    query.bindValue(":paymentRecordId", paymentRecordId.toInt());
    query.bindValue(":newClaimStatus", newClaimStatus);

    if (!query.exec()) {
        QMessageBox::critical(this, "Stored Procedure Execution Failed", "Stored procedure execution failed: " + query.lastError().text());
        return;
    }

    // 刷新表格，显示更新后的数据
    QSqlQuery refreshQuery;
    refreshQuery.prepare("SELECT * FROM paymentrecords WHERE PaymentRecordID = :paymentRecordId");
    refreshQuery.bindValue(":paymentRecordId", paymentRecordId);

    if (!refreshQuery.exec()) {
        QMessageBox::critical(this, "Query Failed", "Query failed: " + refreshQuery.lastError().text());
        return;
    }

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(refreshQuery);
    ui->tableView->setModel(model);

    model->setHeaderData(0, Qt::Horizontal, tr("支付序号"));
    model->setHeaderData(1, Qt::Horizontal, tr("用户名"));
    model->setHeaderData(2, Qt::Horizontal, tr("支付数额"));
    model->setHeaderData(3, Qt::Horizontal, tr("支付方式"));
    model->setHeaderData(4, Qt::Horizontal, tr("支付状态"));
    model->setHeaderData(5, Qt::Horizontal, tr("支付记录产生日期"));
}

