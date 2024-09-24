#ifndef REGI_H
#define REGI_H
#include <QMessageBox>
#include <QDialog>

namespace Ui {
class regi;
}

class regi : public QDialog
{
    Q_OBJECT

public:
    explicit regi(QWidget *parent = 0);
    ~regi();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::regi *ui;
};

#endif // REGI_H
