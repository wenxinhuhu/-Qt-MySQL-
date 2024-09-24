#ifndef APPOINT_H
#define APPOINT_H

#include <QDialog>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QDate>
#include <QTime>
#include"details.h"
#include"appoint.h"
#include"deleteapp.h"

namespace Ui {
class appoint;
}

class appoint : public QDialog
{
    Q_OBJECT

public:
    //explicit appoint(QWidget *parent = 0);
    explicit appoint(QWidget *parent = nullptr, const QString &username = "");
    ~appoint();

private slots:
    void on_deleteButton_clicked();
    //void onDeleteAppointment();

    void on_addButton_clicked();

    void on_modifyButton_clicked();

    void on_pushButton_2_clicked();

    void on_selectButton_clicked();

private:
    Ui::appoint *ui;
    QSqlTableModel *model;
    QString username;

    void setupModel();
    void loadAppointments();
    void addAppointment();
    void modifyAppointment();
    void deleteAppointment();
};

#endif // APPOINT_H
