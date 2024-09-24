/********************************************************************************
** Form generated from reading UI file 'signin_doc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_DOC_H
#define UI_SIGNIN_DOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_signin_doc
{
public:
    QLabel *label;

    void setupUi(QDialog *signin_doc)
    {
        if (signin_doc->objectName().isEmpty())
            signin_doc->setObjectName(QStringLiteral("signin_doc"));
        signin_doc->resize(672, 381);
        signin_doc->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\346\232\226\351\273\204\350\211\262\350\203\214\346\231\257(1).jpg);"));
        label = new QLabel(signin_doc);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 141, 121));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\345\233\276\346\240\207\346\226\271.jpg);"));

        retranslateUi(signin_doc);

        QMetaObject::connectSlotsByName(signin_doc);
    } // setupUi

    void retranslateUi(QDialog *signin_doc)
    {
        signin_doc->setWindowTitle(QApplication::translate("signin_doc", "Dialog", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signin_doc: public Ui_signin_doc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_DOC_H
