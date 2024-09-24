#include "details.h"
#include "ui_details.h"
#include <QMessageBox>

/*
details::details(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::details)
{
    ui->setupUi(this);
}
*/

details::details(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::details),
    model(new QSqlQueryModel(this))
{
    ui->setupUi(this);

    // 连接按钮点击信号到槽函数
    connect(ui->searchButton, &QPushButton::clicked, this, &details::searchAppointmentByID);

    // 设置表视图的模型
    ui->appointmentsTableView->setModel(model);
}

details::~details()
{
    delete ui;
}

void details::on_pushButton_2_clicked()
{
    this->~details();
    appoint *w = new appoint();
    w->show();
}

/*
void details::on_searchButton_clicked()
{
    // 获取输入的 AppointmentID
    QString appointmentID = ui->appointmentIDLineEdit->text();

    // 构建查询字符串
    QString queryStr = QString("SELECT * FROM patient_appointment WHERE AppointmentID = %1").arg(appointmentID);

    // 设置查询并执行
    model->setQuery(queryStr);

    // 检查查询是否有结果
    if (model->rowCount() == 0) {
        QMessageBox::information(this, "提示", "没有找到相关的预约记录。", QMessageBox::Ok);
    } else {
        // 设置表头
        model->setHeaderData(0, Qt::Horizontal, tr("AppointmentID"));
        model->setHeaderData(1, Qt::Horizontal, tr("AppointmentTime"));
        model->setHeaderData(2, Qt::Horizontal, tr("AppointmentStatus"));
        model->setHeaderData(3, Qt::Horizontal, tr("AppointmentReason"));
        model->setHeaderData(4, Qt::Horizontal, tr("PatientName"));
        model->setHeaderData(5, Qt::Horizontal, tr("PatientContactPhone"));
        model->setHeaderData(6, Qt::Horizontal, tr("PatientGender"));
    }
}
*/

void details::searchAppointmentByID()
{
    // 获取输入的 AppointmentID
    QString appointmentID = ui->appointmentIDLineEdit->text();

    // 构建查询字符串
    QString queryStr = QString("SELECT * FROM patient_appointment WHERE AppointmentID = %1").arg(appointmentID);

    // 设置查询并执行
    model->setQuery(queryStr);

    // 检查查询是否有结果
    if (model->rowCount() == 0) {
        QMessageBox::information(this, "提示", "没有找到相关的预约记录。", QMessageBox::Ok);
    } else {
        // 设置表头
        model->setHeaderData(0, Qt::Horizontal, tr("姓名"));
        model->setHeaderData(1, Qt::Horizontal, tr("预约号"));
        model->setHeaderData(2, Qt::Horizontal, tr("预约时间"));
        model->setHeaderData(3, Qt::Horizontal, tr("预约状态"));
        model->setHeaderData(4, Qt::Horizontal, tr("预约原因"));
        // 更新表视图的模型
        ui->appointmentsTableView->setModel(model);
    }
}



