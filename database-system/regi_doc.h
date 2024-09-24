#ifndef REGI_DOC_H
#define REGI_DOC_H

#include <QDialog>
#include <QMessageBox>
#include "database.h"
namespace Ui {
class regi_doc;
}

class regi_doc : public QDialog
{
    Q_OBJECT

public:
    explicit regi_doc(QWidget *parent = 0);
    ~regi_doc();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::regi_doc *ui;
};

#endif // REGI_DOC_H
