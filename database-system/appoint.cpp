#include "appoint.h"
#include "ui_appoint.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include<QDebug>
#include "signin.h"
/*
appoint::appoint(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::appoint)
{
    ui->setupUi(this);
}
*/

appoint::appoint(QWidget *parent, const QString &username) :
    QDialog(parent),
    ui(new Ui::appoint),
    username(username)
{
    ui->setupUi(this);
    setupModel();
    loadAppointments();

    //connect(ui->deleteButton, &QPushButton::clicked, this, & appoint::onDeleteAppointment);
}
appoint::~appoint()
{
    delete ui;
}

void appoint::setupModel()
{
    model = new QSqlTableModel(this);
    model->setTable("appointments");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->appointmentsTableView->setModel(model);


    // 设置表头
    model->setHeaderData(0, Qt::Horizontal, tr("预约号"));
    model->setHeaderData(1, Qt::Horizontal, tr("账户名"));
    model->setHeaderData(2, Qt::Horizontal, tr("预约时间"));
    model->setHeaderData(3, Qt::Horizontal, tr("预约状态"));
    model->setHeaderData(4, Qt::Horizontal, tr("预约原因"));
    model->setHeaderData(5, Qt::Horizontal, tr("预约医生"));

    /*
    // 隐藏不需要的列
    ui->appointmentsTableView->hideColumn(1); // 隐藏 UserID
    */

}


void appoint::loadAppointments()
{
    QString filter = QString("UserID = '%1'").arg(username);
    model->setFilter(filter);
    model->select();

    if (model->rowCount() == 0) {
        QMessageBox::information(this, "提示", "没有找到相关的预约记录。", QMessageBox::Ok);
    }
}


void appoint::on_deleteButton_clicked()
{
    //deleteAppointment();
    this->~appoint();
    deleteapp *w = new deleteapp(nullptr, username);
    w->show();
}


/*
void appoint::onDeleteAppointment() {
    QModelIndex currentIndex = ui->appointmentsTableView->currentIndex();
    if (!currentIndex.isValid()) {
        QMessageBox::warning(this, "选择错误", "请选择要删除的预约记录。");
        return;
    }

    // 假设 AppointmentID 存在于第一列
    int appointmentId = ui->appointmentsTableView->model()->data(ui->appointmentsTableView->model()->index(currentIndex.row(), 0)).toInt();


    //int appointmentId = ui->appointmentsTableView->model()->data(ui->appointmentsTableView->model()->index(currentRow, 0)).toInt(); // 假设预约ID位于第一列

    QSqlDatabase db = QSqlDatabase::database(); // 获取默认数据库连接
    if (!db.transaction()) { // 尝试开启事务
        QMessageBox::critical(this, "错误", "无法开始事务。");
        return;
    }

    QSqlQuery query(db);
    query.prepare("DELETE FROM appointments WHERE appointment_id = ?");
    query.addBindValue(appointmentId);

    if (!query.exec()) {
        db.rollback(); // 如果执行失败，回滚事务
        QMessageBox::critical(this, "删除失败", "数据库错误: " + query.lastError().text());
        return;
    }

    if (!db.commit()) { // 尝试提交事务
        db.rollback(); // 如果提交失败，回滚事务
        QMessageBox::critical(this, "事务提交失败", "请重试或检查数据库状态。");
        return;
    }

    // 更新界面
    ui->appointmentsTableView->model()->removeRow(currentIndex.row());
    QMessageBox::information(this, "删除成功", "预约及相关电子会诊记录已删除。");
}

*/

void appoint::on_addButton_clicked()
{
    addAppointment();
}

void appoint::on_modifyButton_clicked()
{
    modifyAppointment();
}

/*
void appoint::deleteAppointment()
{
    QItemSelectionModel *select = ui->appointmentsTableView->selectionModel();
    if(select->hasSelection()) {
        int row = select->selectedRows().first().row();
        model->removeRow(row);
        if(!model->submitAll()) {
            QMessageBox::warning(this, "错误", "删除记录失败。");
        }
    } else {
        QMessageBox::warning(this, "提示", "请选择要删除的记录。");
    }
}
*/

void appoint::addAppointment()
{
    // 这里可以弹出一个对话框来输入新记录的数据
    QSqlRecord record = model->record();
    record.setValue("UserID", username);
    record.setValue("Date", QDate::currentDate());
    record.setValue("Time", QTime::currentTime());
    record.setValue("DoctorID", "123"); // 示例值
    record.setValue("Status", "Pending");
    model->insertRecord(-1, record);
    if(!model->submitAll()) {
        QMessageBox::warning(this, "错误", "添加记录失败。");
    }
}


void appoint::modifyAppointment()
{
    QItemSelectionModel *select = ui->appointmentsTableView->selectionModel();
    if(select->hasSelection()) {
        int row = select->selectedRows().first().row();
        QSqlRecord record = model->record(row);
        // 弹出对话框来修改记录的数据
        record.setValue("Status", "Confirmed"); // 示例修改
        model->setRecord(row, record);
        if(!model->submitAll()) {
            QMessageBox::warning(this, "错误", "修改记录失败。");
        }
    } else {
        QMessageBox::warning(this, "提示", "请选择要修改的记录。");
    }
}

void appoint::on_pushButton_2_clicked()
{
    this->~appoint();
    signin *w = new signin();
    w->show();
}

void appoint::on_selectButton_clicked()
{
    this->~appoint();
    details *w = new details();
    w->show();
}
