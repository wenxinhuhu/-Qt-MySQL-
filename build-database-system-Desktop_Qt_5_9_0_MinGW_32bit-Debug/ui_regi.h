/********************************************************************************
** Form generated from reading UI file 'regi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGI_H
#define UI_REGI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_regi
{
public:
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *confirmPasswordLineEdit;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *emergencyContactLineEdit;
    QLineEdit *nameLineEdit;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *contactPhoneLineEdit;
    QComboBox *genderComboBox;
    QTextEdit *medicalHistoryTextEdit;
    QPushButton *pushButton_2;

    void setupUi(QDialog *regi)
    {
        if (regi->objectName().isEmpty())
            regi->setObjectName(QStringLiteral("regi"));
        regi->resize(1400, 600);
        regi->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\346\232\226\351\273\204\350\211\262\350\203\214\346\231\257(1).jpg);"));
        label_2 = new QLabel(regi);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(360, 10, 571, 141));
        label_2->setStyleSheet(QStringLiteral(""));
        label = new QLabel(regi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 141, 121));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\345\233\276\346\240\207\346\226\271.jpg);"));
        label_3 = new QLabel(regi);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 140, 191, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_4 = new QLabel(regi);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 190, 211, 61));
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        usernameLineEdit = new QLineEdit(regi);
        usernameLineEdit->setObjectName(QStringLiteral("usernameLineEdit"));
        usernameLineEdit->setGeometry(QRect(320, 140, 1051, 51));
        usernameLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";\n"
""));
        passwordLineEdit = new QLineEdit(regi);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(320, 200, 1051, 51));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        confirmPasswordLineEdit = new QLineEdit(regi);
        confirmPasswordLineEdit->setObjectName(QStringLiteral("confirmPasswordLineEdit"));
        confirmPasswordLineEdit->setGeometry(QRect(320, 260, 1051, 51));
        confirmPasswordLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        pushButton = new QPushButton(regi);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 510, 181, 61));
        pushButton->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";\n"
"border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);"));
        label_5 = new QLabel(regi);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 380, 221, 51));
        label_5->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_6 = new QLabel(regi);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 450, 221, 51));
        label_6->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        emergencyContactLineEdit = new QLineEdit(regi);
        emergencyContactLineEdit->setObjectName(QStringLiteral("emergencyContactLineEdit"));
        emergencyContactLineEdit->setGeometry(QRect(320, 440, 1051, 61));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emergencyContactLineEdit->sizePolicy().hasHeightForWidth());
        emergencyContactLineEdit->setSizePolicy(sizePolicy);
        emergencyContactLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";\n"
""));
        nameLineEdit = new QLineEdit(regi);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(320, 320, 341, 51));
        sizePolicy.setHeightForWidth(nameLineEdit->sizePolicy().hasHeightForWidth());
        nameLineEdit->setSizePolicy(sizePolicy);
        nameLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";\n"
""));
        label_7 = new QLabel(regi);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(130, 320, 181, 51));
        label_7->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_8 = new QLabel(regi);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(680, 320, 131, 51));
        label_8->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_9 = new QLabel(regi);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(670, 380, 161, 51));
        label_9->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        contactPhoneLineEdit = new QLineEdit(regi);
        contactPhoneLineEdit->setObjectName(QStringLiteral("contactPhoneLineEdit"));
        contactPhoneLineEdit->setGeometry(QRect(840, 380, 531, 51));
        sizePolicy.setHeightForWidth(contactPhoneLineEdit->sizePolicy().hasHeightForWidth());
        contactPhoneLineEdit->setSizePolicy(sizePolicy);
        contactPhoneLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";\n"
""));
        genderComboBox = new QComboBox(regi);
        genderComboBox->setObjectName(QStringLiteral("genderComboBox"));
        genderComboBox->setGeometry(QRect(840, 320, 531, 51));
        genderComboBox->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 18pt \"\346\261\211\344\273\252\344\270\255\351\273\221 197\";"));
        medicalHistoryTextEdit = new QTextEdit(regi);
        medicalHistoryTextEdit->setObjectName(QStringLiteral("medicalHistoryTextEdit"));
        medicalHistoryTextEdit->setGeometry(QRect(320, 380, 341, 51));
        medicalHistoryTextEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);"));
        pushButton_2 = new QPushButton(regi);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(860, 510, 201, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 18pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        label_8->raise();
        label_4->raise();
        label_2->raise();
        label->raise();
        label_3->raise();
        usernameLineEdit->raise();
        passwordLineEdit->raise();
        confirmPasswordLineEdit->raise();
        pushButton->raise();
        label_5->raise();
        label_6->raise();
        emergencyContactLineEdit->raise();
        nameLineEdit->raise();
        label_7->raise();
        label_9->raise();
        contactPhoneLineEdit->raise();
        genderComboBox->raise();
        medicalHistoryTextEdit->raise();
        pushButton_2->raise();

        retranslateUi(regi);

        QMetaObject::connectSlotsByName(regi);
    } // setupUi

    void retranslateUi(QDialog *regi)
    {
        regi->setWindowTitle(QApplication::translate("regi", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("regi", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\350\241\214\346\245\267'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">\346\231\272\346\205\247\345\214\273\347\226\227\347\256\241\345\256\266</span></p></body></html>", Q_NULLPTR));
        label->setText(QString());
        label_3->setText(QApplication::translate("regi", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("regi", "\345\257\206\347\240\201", Q_NULLPTR));
        usernameLineEdit->setText(QString());
        usernameLineEdit->setPlaceholderText(QApplication::translate("regi", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        passwordLineEdit->setText(QString());
        passwordLineEdit->setPlaceholderText(QApplication::translate("regi", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        confirmPasswordLineEdit->setText(QString());
        confirmPasswordLineEdit->setPlaceholderText(QApplication::translate("regi", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("regi", "\346\217\220\344\272\244", Q_NULLPTR));
        label_5->setText(QApplication::translate("regi", "\347\227\205\345\217\262", Q_NULLPTR));
        label_6->setText(QApplication::translate("regi", "\347\264\247\346\200\245\350\201\224\347\263\273\344\272\272", Q_NULLPTR));
        emergencyContactLineEdit->setText(QString());
        emergencyContactLineEdit->setPlaceholderText(QApplication::translate("regi", "\350\257\267\350\276\223\345\205\245\347\264\247\346\200\245\350\201\224\347\263\273\344\272\272\347\232\204\345\247\223\345\220\215\345\217\212\350\201\224\347\263\273\346\226\271\345\274\217\357\274\214\344\270\255\351\227\264\347\224\250\351\200\227\345\217\267\351\232\224\345\274\200", Q_NULLPTR));
        nameLineEdit->setText(QString());
        nameLineEdit->setPlaceholderText(QApplication::translate("regi", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\247\223\345\220\215", Q_NULLPTR));
        label_7->setText(QApplication::translate("regi", "\345\247\223\345\220\215", Q_NULLPTR));
        label_8->setText(QApplication::translate("regi", "\346\200\247\345\210\253", Q_NULLPTR));
        label_9->setText(QApplication::translate("regi", "\350\201\224\347\263\273\346\226\271\345\274\217", Q_NULLPTR));
        contactPhoneLineEdit->setText(QString());
        contactPhoneLineEdit->setPlaceholderText(QApplication::translate("regi", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\350\201\224\347\263\273\346\226\271\345\274\217", Q_NULLPTR));
        genderComboBox->clear();
        genderComboBox->insertItems(0, QStringList()
         << QApplication::translate("regi", "male", Q_NULLPTR)
         << QApplication::translate("regi", "female", Q_NULLPTR)
        );
        pushButton_2->setText(QApplication::translate("regi", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class regi: public Ui_regi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGI_H
