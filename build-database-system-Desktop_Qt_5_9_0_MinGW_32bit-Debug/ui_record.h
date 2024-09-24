/********************************************************************************
** Form generated from reading UI file 'record.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_record
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTableView *recordsTableView;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *record)
    {
        if (record->objectName().isEmpty())
            record->setObjectName(QStringLiteral("record"));
        record->resize(800, 500);
        record->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\346\232\226\351\273\204\350\211\262\350\203\214\346\231\257(1).jpg);"));
        label = new QLabel(record);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 141, 121));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\345\233\276\346\240\207\346\226\271.jpg);"));
        label_2 = new QLabel(record);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 0, 571, 141));
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(record);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 130, 591, 81));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213_GBK\";"));
        recordsTableView = new QTableView(record);
        recordsTableView->setObjectName(QStringLiteral("recordsTableView"));
        recordsTableView->setGeometry(QRect(150, 190, 481, 241));
        recordsTableView->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\350\203\214\346\231\257\345\233\276(2).jpg);"));
        pushButton_2 = new QPushButton(record);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(640, 430, 151, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 18pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        pushButton = new QPushButton(record);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 450, 281, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 20pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_2->raise();
        label->raise();
        label_3->raise();
        recordsTableView->raise();
        pushButton_2->raise();
        pushButton->raise();

        retranslateUi(record);

        QMetaObject::connectSlotsByName(record);
    } // setupUi

    void retranslateUi(QDialog *record)
    {
        record->setWindowTitle(QApplication::translate("record", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("record", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\350\241\214\346\245\267'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">\346\231\272\346\205\247\345\214\273\347\226\227\347\256\241\345\256\266</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("record", "\346\202\250\347\232\204\347\234\213\347\227\205\350\256\260\345\275\225\345\246\202\344\270\213\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("record", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton->setText(QApplication::translate("record", "\346\267\273\345\212\240\346\226\260\347\232\204\350\256\260\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class record: public Ui_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
