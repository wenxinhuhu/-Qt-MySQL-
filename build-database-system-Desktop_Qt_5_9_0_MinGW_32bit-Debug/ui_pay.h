/********************************************************************************
** Form generated from reading UI file 'pay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAY_H
#define UI_PAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_pay
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *paymentRecordIdEdit;
    QPushButton *queryButton;
    QPushButton *updateStatusButton;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QLineEdit *statusEdit;

    void setupUi(QDialog *pay)
    {
        if (pay->objectName().isEmpty())
            pay->setObjectName(QStringLiteral("pay"));
        pay->resize(1200, 600);
        pay->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\346\232\226\351\273\204\350\211\262\350\203\214\346\231\257(1).jpg);"));
        label = new QLabel(pay);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 141, 121));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\345\233\276\346\240\207\346\226\271.jpg);"));
        label_2 = new QLabel(pay);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 0, 571, 141));
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(pay);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 150, 1151, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        paymentRecordIdEdit = new QLineEdit(pay);
        paymentRecordIdEdit->setObjectName(QStringLiteral("paymentRecordIdEdit"));
        paymentRecordIdEdit->setGeometry(QRect(650, 140, 231, 61));
        paymentRecordIdEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";\n"
""));
        queryButton = new QPushButton(pay);
        queryButton->setObjectName(QStringLiteral("queryButton"));
        queryButton->setGeometry(QRect(940, 140, 241, 71));
        queryButton->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 22pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        updateStatusButton = new QPushButton(pay);
        updateStatusButton->setObjectName(QStringLiteral("updateStatusButton"));
        updateStatusButton->setGeometry(QRect(720, 350, 451, 71));
        updateStatusButton->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 22pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        pushButton_2 = new QPushButton(pay);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(960, 500, 161, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 18pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        tableView = new QTableView(pay);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 250, 671, 321));
        tableView->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\350\203\214\346\231\257\345\233\276(2).jpg);"));
        statusEdit = new QLineEdit(pay);
        statusEdit->setObjectName(QStringLiteral("statusEdit"));
        statusEdit->setGeometry(QRect(720, 420, 451, 61));
        statusEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";\n"
""));

        retranslateUi(pay);

        QMetaObject::connectSlotsByName(pay);
    } // setupUi

    void retranslateUi(QDialog *pay)
    {
        pay->setWindowTitle(QApplication::translate("pay", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("pay", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\350\241\214\346\245\267'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">\346\231\272\346\205\247\345\214\273\347\226\227\347\256\241\345\256\266</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("pay", "\350\257\267\350\276\223\345\205\245\346\202\250\350\246\201\346\212\245\351\224\200\347\232\204\346\224\257\344\273\230\350\256\260\345\275\225ID\357\274\232", Q_NULLPTR));
        paymentRecordIdEdit->setText(QString());
        paymentRecordIdEdit->setPlaceholderText(QApplication::translate("pay", "\350\257\267\350\276\223\345\205\245ID", Q_NULLPTR));
        queryButton->setText(QApplication::translate("pay", "\344\270\200\351\224\256\346\237\245\350\257\242", Q_NULLPTR));
        updateStatusButton->setText(QApplication::translate("pay", "\344\277\256\346\224\271\347\212\266\346\200\201\344\270\272\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("pay", "\350\277\224\345\233\236", Q_NULLPTR));
        statusEdit->setText(QString());
        statusEdit->setPlaceholderText(QApplication::translate("pay", "pending/approved/rejected", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pay: public Ui_pay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAY_H
