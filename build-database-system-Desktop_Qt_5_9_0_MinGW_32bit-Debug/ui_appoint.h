/********************************************************************************
** Form generated from reading UI file 'appoint.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOINT_H
#define UI_APPOINT_H

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

class Ui_appoint
{
public:
    QLabel *label;
    QLabel *label_2;
    QTableView *appointmentsTableView;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *deleteButton;
    QPushButton *addButton;
    QPushButton *modifyButton;
    QPushButton *selectButton;

    void setupUi(QDialog *appoint)
    {
        if (appoint->objectName().isEmpty())
            appoint->setObjectName(QStringLiteral("appoint"));
        appoint->resize(1200, 600);
        appoint->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\346\232\226\351\273\204\350\211\262\350\203\214\346\231\257(1).jpg);"));
        label = new QLabel(appoint);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 141, 121));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\345\233\276\346\240\207\346\226\271.jpg);"));
        label_2 = new QLabel(appoint);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 10, 571, 141));
        label_2->setStyleSheet(QStringLiteral(""));
        appointmentsTableView = new QTableView(appoint);
        appointmentsTableView->setObjectName(QStringLiteral("appointmentsTableView"));
        appointmentsTableView->setGeometry(QRect(80, 220, 671, 321));
        appointmentsTableView->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\350\203\214\346\231\257\345\233\276(2).jpg);"));
        label_3 = new QLabel(appoint);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 150, 431, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        pushButton_2 = new QPushButton(appoint);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1030, 510, 161, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 18pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        deleteButton = new QPushButton(appoint);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(920, 420, 241, 71));
        deleteButton->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 22pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        addButton = new QPushButton(appoint);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(920, 260, 241, 71));
        addButton->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 22pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        modifyButton = new QPushButton(appoint);
        modifyButton->setObjectName(QStringLiteral("modifyButton"));
        modifyButton->setGeometry(QRect(920, 340, 241, 71));
        modifyButton->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 22pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        selectButton = new QPushButton(appoint);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setGeometry(QRect(920, 180, 241, 71));
        selectButton->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 22pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        label_3->raise();
        label->raise();
        label_2->raise();
        appointmentsTableView->raise();
        pushButton_2->raise();
        deleteButton->raise();
        addButton->raise();
        modifyButton->raise();
        selectButton->raise();

        retranslateUi(appoint);

        QMetaObject::connectSlotsByName(appoint);
    } // setupUi

    void retranslateUi(QDialog *appoint)
    {
        appoint->setWindowTitle(QApplication::translate("appoint", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("appoint", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\350\241\214\346\245\267'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">\346\231\272\346\205\247\345\214\273\347\226\227\347\256\241\345\256\266</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("appoint", "\346\210\221\347\232\204\351\242\204\347\272\246\350\256\260\345\275\225\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("appoint", "\350\277\224\345\233\236", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("appoint", "\345\210\240\351\231\244\351\242\204\347\272\246", Q_NULLPTR));
        addButton->setText(QApplication::translate("appoint", "\345\242\236\345\212\240\351\242\204\347\272\246", Q_NULLPTR));
        modifyButton->setText(QApplication::translate("appoint", "\344\277\256\346\224\271\351\242\204\347\272\246", Q_NULLPTR));
        selectButton->setText(QApplication::translate("appoint", "\346\237\245\350\257\242\351\242\204\347\272\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class appoint: public Ui_appoint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINT_H
