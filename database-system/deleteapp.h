#ifndef DELETEAPP_H
#define DELETEAPP_H

#include <QDialog>
#include"appoint.h"
namespace Ui {
class deleteapp;
}

class deleteapp : public QDialog
{
    Q_OBJECT


signals:
    void appointmentDeleted();

public:
    explicit deleteapp(QWidget *parent = nullptr, const QString &username = "");
    ~deleteapp();


private slots:
    void on_pushButton_2_clicked();
    void onDeleteButtonClicked();

private:
    Ui::deleteapp *ui;
    QSqlTableModel *model;
    QString username;

    void setupModel();
    void loadAppointments();

};

#endif // DELETEAPP_H
