#include "record.h"
#include "ui_record.h"
#include "signin.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

/*
record::record(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::record)
{
    ui->setupUi(this);
}
*/

record::record(QWidget *parent, const QString &username) :
    QDialog(parent),
    ui(new Ui::record),
    username(username)
{
    ui->setupUi(this);
    setupModel();
    loadRecords();
}

record::~record()
{
    delete ui;
}

void record::on_pushButton_2_clicked()
{
    signin *w = new signin(nullptr, username); // 传递用户名
    w->show();
    this->close();
}

void record::setupModel()
{
    model = new QSqlTableModel(this);
    model->setTable("medicalrecords");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->recordsTableView->setModel(model);
/*
    // 设置表头
    model->setHeaderData(2, Qt::Horizontal, tr("看病时间"));
    model->setHeaderData(3, Qt::Horizontal, tr("医生诊断"));
    model->setHeaderData(4, Qt::Horizontal, tr("治疗方式"));
    model->setHeaderData(5, Qt::Horizontal, tr("诊断结果"));
*/



    // 隐藏不需要的列
    ui->recordsTableView->hideColumn(0); // 隐藏 MedicalRecordID
    ui->recordsTableView->hideColumn(5); // 隐藏 UserID

    // 移动时间列到第一列
    model->setHeaderData(0, Qt::Horizontal, tr("看病时间"));
    model->setHeaderData(1, Qt::Horizontal, tr("医生诊断"));
    model->setHeaderData(2, Qt::Horizontal, tr("治疗方式"));
    model->setHeaderData(3, Qt::Horizontal, tr("诊断结果"));
    ui->recordsTableView->horizontalHeader()->moveSection(4, 0);

}

void record::loadRecords()
{
    QString filter = QString("UserID = '%1'").arg(username);
    model->setFilter(filter);
    model->select();

    if (model->rowCount() == 0) {
        QMessageBox::information(this, "提示", "没有找到相关的看病记录。", QMessageBox::Ok);
    }
}

void record::on_pushButton_clicked()
{
    this->~record();
    addrec *w = new addrec();
    w->show();
}
