#ifndef RECORD_H
#define RECORD_H

#include <QDialog>
#include <QSqlTableModel>
#include"addrec.h"
#include <QSqlError>
namespace Ui {
class record;
}

class record : public QDialog
{
    Q_OBJECT

public:
    //explicit record(QWidget *parent = 0);
    explicit record(QWidget *parent = nullptr, const QString &username = "");
    ~record();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::record *ui;
    QSqlTableModel *model;
    QString username;

    void setupModel();
    void loadRecords();
};

#endif // RECORD_H
