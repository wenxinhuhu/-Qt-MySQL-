/********************************************************************************
** Form generated from reading UI file 'details.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILS_H
#define UI_DETAILS_H

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

class Ui_details
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *appointmentIDLineEdit;
    QPushButton *searchButton;
    QTableView *appointmentsTableView;
    QLabel *label_4;
    QPushButton *pushButton_2;

    void setupUi(QDialog *details)
    {
        if (details->objectName().isEmpty())
            details->setObjectName(QStringLiteral("details"));
        details->resize(1200, 600);
        details->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\346\232\226\351\273\204\350\211\262\350\203\214\346\231\257(1).jpg);"));
        label = new QLabel(details);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 141, 121));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\345\233\276\346\240\207\346\226\271.jpg);"));
        label_2 = new QLabel(details);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 0, 571, 141));
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(details);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 160, 1151, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        appointmentIDLineEdit = new QLineEdit(details);
        appointmentIDLineEdit->setObjectName(QStringLiteral("appointmentIDLineEdit"));
        appointmentIDLineEdit->setGeometry(QRect(680, 150, 231, 61));
        appointmentIDLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";\n"
""));
        searchButton = new QPushButton(details);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(940, 150, 241, 71));
        searchButton->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 22pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        appointmentsTableView = new QTableView(details);
        appointmentsTableView->setObjectName(QStringLiteral("appointmentsTableView"));
        appointmentsTableView->setGeometry(QRect(330, 260, 671, 321));
        appointmentsTableView->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\350\203\214\346\231\257\345\233\276(2).jpg);"));
        label_4 = new QLabel(details);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 350, 801, 41));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        pushButton_2 = new QPushButton(details);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1020, 510, 161, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 18pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        label_4->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        appointmentIDLineEdit->raise();
        searchButton->raise();
        appointmentsTableView->raise();
        pushButton_2->raise();

        retranslateUi(details);

        QMetaObject::connectSlotsByName(details);
    } // setupUi

    void retranslateUi(QDialog *details)
    {
        details->setWindowTitle(QApplication::translate("details", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("details", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\350\241\214\346\245\267'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">\346\231\272\346\205\247\345\214\273\347\226\227\347\256\241\345\256\266</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("details", "\350\257\267\350\276\223\345\205\245\346\202\250\350\246\201\346\237\245\350\257\242\347\232\204\351\242\204\347\272\246\350\256\260\345\275\225ID\357\274\232", Q_NULLPTR));
        appointmentIDLineEdit->setText(QString());
        appointmentIDLineEdit->setPlaceholderText(QApplication::translate("details", "\350\257\267\350\276\223\345\205\245ID", Q_NULLPTR));
        searchButton->setText(QApplication::translate("details", "\344\270\200\351\224\256\346\237\245\350\257\242", Q_NULLPTR));
        label_4->setText(QApplication::translate("details", "\350\277\231\346\235\241\351\242\204\347\272\246\350\256\260\345\275\225\345\246\202\345\217\263\345\233\276\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("details", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class details: public Ui_details {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILS_H
