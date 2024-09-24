#ifndef ADDREC_H
#define ADDREC_H

#include <QDialog>

namespace Ui {
class addrec;
}

class addrec : public QDialog
{
    Q_OBJECT

public:
    explicit addrec(QWidget *parent = 0);
    ~addrec();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::addrec *ui;
};

#endif // ADDREC_H
