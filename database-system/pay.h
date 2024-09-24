#ifndef PAY_H
#define PAY_H

#include <QDialog>
#include"signin.h"
namespace Ui {
class pay;
}

class pay : public QDialog
{
    Q_OBJECT

public:
    explicit pay(QWidget *parent = 0);
    ~pay();

private slots:
    void on_pushButton_2_clicked();
    void queryPaymentRecord();
    void updateClaimStatus();

private:
    Ui::pay *ui;

};

#endif // PAY_H
