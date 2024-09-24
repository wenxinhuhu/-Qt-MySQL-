/********************************************************************************
** Form generated from reading UI file 'addrec.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDREC_H
#define UI_ADDREC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addrec
{
public:
    QLabel *label_6;
    QLineEdit *visitDateLineEdit;
    QLineEdit *userIdLineEdit;
    QLabel *label_4;
    QLineEdit *confirmPasswordLineEdit;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *doctorNotesLineEdit;
    QPushButton *pushButton_2;
    QLineEdit *treatmentLineEdit;
    QLineEdit *diagnosisResultLineEdit;

    void setupUi(QDialog *addrec)
    {
        if (addrec->objectName().isEmpty())
            addrec->setObjectName(QStringLiteral("addrec"));
        addrec->resize(1400, 600);
        addrec->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\346\232\226\351\273\204\350\211\262\350\203\214\346\231\257(1).jpg);"));
        label_6 = new QLabel(addrec);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 460, 221, 51));
        label_6->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        visitDateLineEdit = new QLineEdit(addrec);
        visitDateLineEdit->setObjectName(QStringLiteral("visitDateLineEdit"));
        visitDateLineEdit->setGeometry(QRect(310, 210, 1051, 51));
        visitDateLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        userIdLineEdit = new QLineEdit(addrec);
        userIdLineEdit->setObjectName(QStringLiteral("userIdLineEdit"));
        userIdLineEdit->setGeometry(QRect(310, 150, 1051, 51));
        userIdLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";\n"
""));
        label_4 = new QLabel(addrec);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 200, 211, 61));
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        confirmPasswordLineEdit = new QLineEdit(addrec);
        confirmPasswordLineEdit->setObjectName(QStringLiteral("confirmPasswordLineEdit"));
        confirmPasswordLineEdit->setGeometry(QRect(310, 270, 1051, 51));
        confirmPasswordLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_5 = new QLabel(addrec);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 390, 221, 51));
        label_5->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_7 = new QLabel(addrec);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 330, 181, 51));
        label_7->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_9 = new QLabel(addrec);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(110, 270, 161, 51));
        label_9->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label = new QLabel(addrec);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 30, 141, 121));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\345\233\276\346\240\207\346\226\271.jpg);"));
        pushButton = new QPushButton(addrec);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 520, 181, 61));
        pushButton->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";\n"
"border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);"));
        label_2 = new QLabel(addrec);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 20, 571, 141));
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(addrec);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 150, 191, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        doctorNotesLineEdit = new QLineEdit(addrec);
        doctorNotesLineEdit->setObjectName(QStringLiteral("doctorNotesLineEdit"));
        doctorNotesLineEdit->setGeometry(QRect(310, 450, 1051, 61));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(doctorNotesLineEdit->sizePolicy().hasHeightForWidth());
        doctorNotesLineEdit->setSizePolicy(sizePolicy);
        doctorNotesLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";\n"
""));
        pushButton_2 = new QPushButton(addrec);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1030, 520, 231, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 18pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        treatmentLineEdit = new QLineEdit(addrec);
        treatmentLineEdit->setObjectName(QStringLiteral("treatmentLineEdit"));
        treatmentLineEdit->setGeometry(QRect(310, 330, 1051, 51));
        treatmentLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        diagnosisResultLineEdit = new QLineEdit(addrec);
        diagnosisResultLineEdit->setObjectName(QStringLiteral("diagnosisResultLineEdit"));
        diagnosisResultLineEdit->setGeometry(QRect(310, 390, 1051, 51));
        diagnosisResultLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_4->raise();
        label_3->raise();
        label_2->raise();
        label_6->raise();
        visitDateLineEdit->raise();
        userIdLineEdit->raise();
        confirmPasswordLineEdit->raise();
        label_5->raise();
        label_7->raise();
        label_9->raise();
        label->raise();
        pushButton->raise();
        doctorNotesLineEdit->raise();
        pushButton_2->raise();
        treatmentLineEdit->raise();
        diagnosisResultLineEdit->raise();

        retranslateUi(addrec);

        QMetaObject::connectSlotsByName(addrec);
    } // setupUi

    void retranslateUi(QDialog *addrec)
    {
        addrec->setWindowTitle(QApplication::translate("addrec", "Dialog", Q_NULLPTR));
        label_6->setText(QApplication::translate("addrec", "\345\214\273\347\224\237\345\244\207\346\263\250", Q_NULLPTR));
        visitDateLineEdit->setText(QString());
        visitDateLineEdit->setPlaceholderText(QApplication::translate("addrec", "\350\257\267\350\276\223\345\205\245\350\256\260\345\275\225\344\272\247\347\224\237\346\227\245\346\234\237\357\274\214\344\276\213\357\274\2322024-05-01", Q_NULLPTR));
        userIdLineEdit->setText(QString());
        userIdLineEdit->setPlaceholderText(QApplication::translate("addrec", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("addrec", "\350\256\260\345\275\225\344\272\247\347\224\237\346\227\245\346\234\237", Q_NULLPTR));
        confirmPasswordLineEdit->setText(QString());
        confirmPasswordLineEdit->setPlaceholderText(QApplication::translate("addrec", "\350\257\267\350\276\223\345\205\245\345\214\273\347\226\227\350\256\260\345\275\225ID", Q_NULLPTR));
        label_5->setText(QApplication::translate("addrec", "\350\257\212\346\226\255\347\273\223\346\236\234", Q_NULLPTR));
        label_7->setText(QApplication::translate("addrec", "\346\262\273\347\226\227", Q_NULLPTR));
        label_9->setText(QApplication::translate("addrec", "\345\214\273\347\226\227\350\256\260\345\275\225ID", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("addrec", "\346\217\220\344\272\244", Q_NULLPTR));
        label_2->setText(QApplication::translate("addrec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\350\241\214\346\245\267'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">\346\231\272\346\205\247\345\214\273\347\226\227\347\256\241\345\256\266</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("addrec", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        doctorNotesLineEdit->setText(QString());
        doctorNotesLineEdit->setPlaceholderText(QApplication::translate("addrec", "\350\257\267\350\276\223\345\205\245\345\214\273\347\224\237\345\244\207\346\263\250", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("addrec", "\345\217\226\346\266\210", Q_NULLPTR));
        treatmentLineEdit->setText(QString());
        treatmentLineEdit->setPlaceholderText(QApplication::translate("addrec", "\350\257\267\350\276\223\345\205\245\346\262\273\347\226\227\346\226\271\345\274\217", Q_NULLPTR));
        diagnosisResultLineEdit->setText(QString());
        diagnosisResultLineEdit->setPlaceholderText(QApplication::translate("addrec", "\350\257\267\350\276\223\345\205\245\350\257\212\346\226\255\347\273\223\346\236\234", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addrec: public Ui_addrec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDREC_H
