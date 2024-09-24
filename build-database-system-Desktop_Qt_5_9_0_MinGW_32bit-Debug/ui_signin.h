/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_signin
{
public:
    QLineEdit *lineEdit;
    QRadioButton *appointButton;
    QRadioButton *recordButton;
    QRadioButton *payButton;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *signin)
    {
        if (signin->objectName().isEmpty())
            signin->setObjectName(QStringLiteral("signin"));
        signin->resize(1000, 500);
        signin->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\346\232\226\351\273\204\350\211\262\350\203\214\346\231\257(1).jpg);"));
        lineEdit = new QLineEdit(signin);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(250, 110, 711, 141));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 28pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213_GBK\";"));
        appointButton = new QRadioButton(signin);
        appointButton->setObjectName(QStringLiteral("appointButton"));
        appointButton->setGeometry(QRect(270, 220, 421, 71));
        appointButton->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\261\211\344\273\252\344\270\255\351\273\221 197\";"));
        recordButton = new QRadioButton(signin);
        recordButton->setObjectName(QStringLiteral("recordButton"));
        recordButton->setGeometry(QRect(270, 320, 451, 71));
        recordButton->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\261\211\344\273\252\344\270\255\351\273\221 197\";"));
        payButton = new QRadioButton(signin);
        payButton->setObjectName(QStringLiteral("payButton"));
        payButton->setGeometry(QRect(270, 400, 401, 81));
        payButton->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\261\211\344\273\252\344\270\255\351\273\221 197\";"));
        label_2 = new QLabel(signin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 0, 571, 141));
        label_2->setStyleSheet(QStringLiteral(""));
        label = new QLabel(signin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 141, 121));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\345\233\276\346\240\207\346\226\271.jpg);"));
        pushButton_2 = new QPushButton(signin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(810, 430, 181, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 18pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        label_2->raise();
        lineEdit->raise();
        appointButton->raise();
        recordButton->raise();
        payButton->raise();
        label->raise();
        pushButton_2->raise();

        retranslateUi(signin);

        QMetaObject::connectSlotsByName(signin);
    } // setupUi

    void retranslateUi(QDialog *signin)
    {
        signin->setWindowTitle(QApplication::translate("signin", "Dialog", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("signin", "\350\257\267\351\200\211\346\213\251\346\202\250\350\246\201\350\277\233\350\241\214\347\232\204\346\223\215\344\275\234\357\274\232", Q_NULLPTR));
        appointButton->setText(QApplication::translate("signin", "\346\210\221\350\246\201\351\242\204\347\272\246", Q_NULLPTR));
        recordButton->setText(QApplication::translate("signin", "\346\210\221\350\246\201\346\237\245\350\257\242\346\210\221\347\232\204\347\234\213\347\227\205\350\256\260\345\275\225", Q_NULLPTR));
        payButton->setText(QApplication::translate("signin", "\346\210\221\350\246\201\346\212\245\351\224\200", Q_NULLPTR));
        label_2->setText(QApplication::translate("signin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\350\241\214\346\245\267'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">\346\231\272\346\205\247\345\214\273\347\226\227\347\256\241\345\256\266</span></p></body></html>", Q_NULLPTR));
        label->setText(QString());
        pushButton_2->setText(QApplication::translate("signin", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class signin: public Ui_signin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
