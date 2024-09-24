#include "deleteapp.h"
#include "ui_deleteapp.h"
#include<QMessageBox>
#include <QSqlQuery>
#include<QSqlError>
#include"database.h"
#include <QSqlDatabase>

deleteapp::deleteapp(QWidget *parent, const QString &username) :
    QDialog(parent),
    ui(new Ui::deleteapp),
    username(username)
{
    ui->setupUi(this);
    setupModel();
    loadAppointments();

    // 连接 deleteButton 的 clicked 信号到 onDeleteButtonClicked 槽函数
    connect(ui->deleteButton, &QPushButton::clicked, this, &deleteapp::onDeleteButtonClicked);
}

deleteapp::~deleteapp()
{
    delete ui;
}

void deleteapp::on_pushButton_2_clicked()
{
    this->~deleteapp();
    appoint *w = new appoint();
    w->show();
}

void deleteapp::setupModel()
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
}


void deleteapp::loadAppointments()
{
    QString filter = QString("UserID = '%1'").arg(username);
    model->setFilter(filter);
    model->select();

    if (model->rowCount() == 0) {
        QMessageBox::information(this, "提示", "没有找到相关的预约记录。", QMessageBox::Ok);
    }
}

/*
void deleteapp::onDeleteButtonClicked()
{
    // 从LineEdit读取用户输入的AppointmentID
    int appointmentId = ui->appointmentIDLineEdit->text().toInt();

    QSqlDatabase db = QSqlDatabase::database(); // 获取数据库连接
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

    // 触发appointmentDeleted信号，可能用于更新其他UI部分
    emit appointmentDeleted();

    // 更新视图
    model->select();
    QMessageBox::information(this, "删除成功", "预约记录已删除。");
}
*/
/*
void deleteapp::onDeleteButtonClicked() {
    // 从 LineEdit 读取用户输入的 AppointmentID
    QString appointmentIdStr = ui->appointmentIDLineEdit->text();
    if (appointmentIdStr.isEmpty()) {
        QMessageBox::warning(this, "输入错误", "请输入要删除的预约ID。");
        return;
    }
    int appointmentId = appointmentIdStr.toInt();

    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::critical(this, "错误", "数据库连接失败。");
        return;
    }

    qDebug() << "Starting transaction";
    if (!db.transaction()) {
        qDebug() << "Failed to start transaction:" << db.lastError().text();
        QMessageBox::critical(this, "错误", "无法开始事务: " + db.lastError().text());
        return;
    }

    QSqlQuery query(db);
    query.prepare("DELETE FROM appointments WHERE appointment_id = ?");
    query.addBindValue(appointmentId);

    qDebug() << "Executing query: DELETE FROM appointments WHERE appointment_id =" << appointmentId;
    if (!query.exec()) {
        qDebug() << "Failed to execute query:" << query.lastError().text();
        db.rollback();
        QMessageBox::critical(this, "删除失败", "数据库错误: " + query.lastError().text());
        return;
    }

    qDebug() << "Committing transaction";
    if (!db.commit()) {
        qDebug() << "Failed to commit transaction:" << db.lastError().text();
        db.rollback();
        QMessageBox::critical(this, "事务提交失败", "请重试或检查数据库状态: " + db.lastError().text());
        return;
    }

    qDebug() << "Query executed successfully, updating view";
    model->select();
    QMessageBox::information(this, "删除成功", "预约记录已删除。");
}

*/
void deleteapp::onDeleteButtonClicked() {
    // 从 LineEdit 读取用户输入的 AppointmentID
    QString appointmentIdStr = ui->appointmentIDLineEdit->text();
    if (appointmentIdStr.isEmpty()) {
        QMessageBox::warning(this, "输入错误", "请输入要删除的预约ID。");
        return;
    }
    int appointmentId = appointmentIdStr.toInt();

    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::critical(this, "错误", "数据库连接失败。");
        return;
    }

    qDebug() << "Starting transaction";
    if (!db.transaction()) {
        qDebug() << "Failed to start transaction:" << db.lastError().text();
        QMessageBox::critical(this, "错误", "无法开始事务: " + db.lastError().text());
        return;
    }

    QSqlQuery query;
    query.prepare("DELETE FROM appointments WHERE AppointmentID = ?");
    query.addBindValue(appointmentId);

    bool ok = query.exec();
    qDebug() << "Executing query: DELETE FROM appointments WHERE appointment_id =" << appointmentId << " Result: " << ok;
    if (ok) {
        if (db.commit()) {
            qDebug() << "Transaction committed successfully";
            model->select(); // 更新视图
            QMessageBox::information(this, "删除成功", "预约记录已删除。");
        } else {
            qDebug() << "Failed to commit transaction:" << db.lastError().text();
            db.rollback();
            QMessageBox::critical(this, "事务提交失败", "请重试或检查数据库状态: " + db.lastError().text());
        }
    } else {
        qDebug() << "Failed to execute query:" << query.lastError().text();
        db.rollback();
        QMessageBox::critical(this, "删除失败", "数据库错误: " + query.lastError().text());
    }
}
