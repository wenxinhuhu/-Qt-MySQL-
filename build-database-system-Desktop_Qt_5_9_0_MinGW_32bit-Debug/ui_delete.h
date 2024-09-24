/********************************************************************************
** Form generated from reading UI file 'delete.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_H
#define UI_DELETE_H

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

class Ui_delete
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *appointmentIDLineEdit;
    QPushButton *deleteButton;
    QTableView *appointmentsTableView;
    QPushButton *pushButton_2;

    void setupUi(QDialog *delete)
    {
        if (delete->objectName().isEmpty())
            delete->setObjectName(QStringLiteral("delete"));
        delete->resize(1100, 500);
        delete->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\346\232\226\351\273\204\350\211\262\350\203\214\346\231\257(1).jpg);"));
        label = new QLabel(delete);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 141, 121));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\345\233\276\346\240\207\346\226\271.jpg);"));
        label_2 = new QLabel(delete);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 0, 571, 141));
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(delete);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 150, 431, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        appointmentIDLineEdit = new QLineEdit(delete);
        appointmentIDLineEdit->setObjectName(QStringLiteral("appointmentIDLineEdit"));
        appointmentIDLineEdit->setGeometry(QRect(640, 150, 231, 61));
        appointmentIDLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";\n"
""));
        deleteButton = new QPushButton(delete);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(810, 270, 241, 71));
        deleteButton->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 22pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        appointmentsTableView = new QTableView(delete);
        appointmentsTableView->setObjectName(QStringLiteral("appointmentsTableView"));
        appointmentsTableView->setGeometry(QRect(60, 230, 671, 241));
        appointmentsTableView->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\350\203\214\346\231\257\345\233\276(2).jpg);"));
        pushButton_2 = new QPushButton(delete);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(840, 390, 181, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 18pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));

        retranslateUi(delete);

        QMetaObject::connectSlotsByName(delete);
    } // setupUi

    void retranslateUi(QDialog *delete)
    {
        delete->setWindowTitle(QApplication::translate("delete", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("delete", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\350\241\214\346\245\267'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">\346\231\272\346\205\247\345\214\273\347\226\227\347\256\241\345\256\266</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("delete", "\346\202\250\350\246\201\345\210\240\351\231\244\351\242\204\347\272\246\350\256\260\345\275\225\357\274\232", Q_NULLPTR));
        appointmentIDLineEdit->setText(QString());
        appointmentIDLineEdit->setPlaceholderText(QApplication::translate("delete", "\350\257\267\350\276\223\345\205\245ID", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("delete", "\344\270\200\351\224\256\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("delete", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class delete: public Ui_delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_H
