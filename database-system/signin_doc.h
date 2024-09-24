#ifndef SIGNIN_DOC_H
#define SIGNIN_DOC_H

#include <QDialog>

namespace Ui {
class signin_doc;
}

class signin_doc : public QDialog
{
    Q_OBJECT

public:
    explicit signin_doc(QWidget *parent = 0);
    ~signin_doc();

private:
    Ui::signin_doc *ui;
};

#endif // SIGNIN_DOC_H
