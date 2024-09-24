#ifndef SIGNIN_H
#define SIGNIN_H

#include <QMessageBox>
#include <QDialog>

namespace Ui {
class signin;
}

class signin : public QDialog
{
    Q_OBJECT

public:
    //explicit signin(QWidget *parent = 0);
    explicit signin(QWidget *parent = nullptr, const QString &username = "");
    ~signin();

private slots:
    /*
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();
    */
    void on_pushButton_2_clicked();

    void on_appointButton_clicked();

    void on_recordButton_clicked();

    void on_payButton_clicked();

private:
    Ui::signin *ui;
    QString username;
};

#endif // SIGNIN_H
