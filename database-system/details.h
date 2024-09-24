#ifndef DETAILS_H
#define DETAILS_H

#include <QDialog>
#include <QSqlQueryModel>
#include"appoint.h"
namespace Ui {
class details;
}

class details : public QDialog
{
    Q_OBJECT

public:
    explicit details(QWidget *parent = 0);
    ~details();

private slots:
    void on_pushButton_2_clicked();

    //void on_searchButton_clicked();

    void searchAppointmentByID(); // 声明槽函数

private:
    Ui::details *ui;
    QSqlQueryModel *model;
};

#endif // DETAILS_H
