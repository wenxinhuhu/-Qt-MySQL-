/********************************************************************************
** Form generated from reading UI file 'regi_doc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGI_DOC_H
#define UI_REGI_DOC_H

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

QT_BEGIN_NAMESPACE

class Ui_regi_doc
{
public:
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *usernameLineEdit;
    QLabel *label_4;
    QLineEdit *passwordLineEdit;
    QLineEdit *confirmPasswordLineEdit;
    QLabel *label_6;
    QLineEdit *workHoursLineEdit;
    QLineEdit *contactPhoneLineEdit;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *departmentIDLineEdit;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *nameLineEdit;
    QLabel *label_11;
    QComboBox *genderComboBox;
    QComboBox *levelLineEdit;

    void setupUi(QDialog *regi_doc)
    {
        if (regi_doc->objectName().isEmpty())
            regi_doc->setObjectName(QStringLiteral("regi_doc"));
        regi_doc->resize(1350, 600);
        regi_doc->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\346\232\226\351\273\204\350\211\262\350\203\214\346\231\257(1).jpg);"));
        label_5 = new QLabel(regi_doc);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(350, 0, 571, 141));
        label_5->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(regi_doc);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 120, 121, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label = new QLabel(regi_doc);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 141, 121));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\345\233\276\346\240\207\346\226\271.jpg);"));
        usernameLineEdit = new QLineEdit(regi_doc);
        usernameLineEdit->setObjectName(QStringLiteral("usernameLineEdit"));
        usernameLineEdit->setGeometry(QRect(310, 120, 941, 51));
        usernameLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";\n"
""));
        label_4 = new QLabel(regi_doc);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 180, 101, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        passwordLineEdit = new QLineEdit(regi_doc);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(310, 180, 941, 51));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        confirmPasswordLineEdit = new QLineEdit(regi_doc);
        confirmPasswordLineEdit->setObjectName(QStringLiteral("confirmPasswordLineEdit"));
        confirmPasswordLineEdit->setGeometry(QRect(310, 240, 941, 51));
        confirmPasswordLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_6 = new QLabel(regi_doc);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 360, 141, 51));
        label_6->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        workHoursLineEdit = new QLineEdit(regi_doc);
        workHoursLineEdit->setObjectName(QStringLiteral("workHoursLineEdit"));
        workHoursLineEdit->setGeometry(QRect(310, 360, 941, 41));
        workHoursLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        contactPhoneLineEdit = new QLineEdit(regi_doc);
        contactPhoneLineEdit->setObjectName(QStringLiteral("contactPhoneLineEdit"));
        contactPhoneLineEdit->setGeometry(QRect(310, 410, 941, 51));
        contactPhoneLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_8 = new QLabel(regi_doc);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(160, 470, 121, 61));
        label_8->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        pushButton = new QPushButton(regi_doc);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 530, 181, 51));
        pushButton->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";\n"
"border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);"));
        pushButton_2 = new QPushButton(regi_doc);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(910, 530, 191, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 18pt \"\346\226\271\346\255\243\350\210\222\344\275\223\";"));
        departmentIDLineEdit = new QLineEdit(regi_doc);
        departmentIDLineEdit->setObjectName(QStringLiteral("departmentIDLineEdit"));
        departmentIDLineEdit->setGeometry(QRect(710, 470, 541, 51));
        departmentIDLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_7 = new QLabel(regi_doc);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(630, 470, 131, 51));
        label_7->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_9 = new QLabel(regi_doc);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(150, 310, 141, 41));
        label_9->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_10 = new QLabel(regi_doc);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(620, 300, 141, 51));
        label_10->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        nameLineEdit = new QLineEdit(regi_doc);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(310, 300, 301, 51));
        nameLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        label_11 = new QLabel(regi_doc);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(150, 410, 141, 51));
        label_11->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223\";"));
        genderComboBox = new QComboBox(regi_doc);
        genderComboBox->setObjectName(QStringLiteral("genderComboBox"));
        genderComboBox->setGeometry(QRect(770, 300, 481, 51));
        genderComboBox->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 18pt \"\346\261\211\344\273\252\344\270\255\351\273\221 197\";"));
        levelLineEdit = new QComboBox(regi_doc);
        levelLineEdit->setObjectName(QStringLiteral("levelLineEdit"));
        levelLineEdit->setGeometry(QRect(310, 470, 301, 51));
        levelLineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/picture/\351\200\217\346\230\216\345\233\276.png);\n"
"font: 18pt \"\346\261\211\344\273\252\344\270\255\351\273\221 197\";"));
        label_7->raise();
        label_5->raise();
        label_3->raise();
        label->raise();
        usernameLineEdit->raise();
        label_4->raise();
        passwordLineEdit->raise();
        confirmPasswordLineEdit->raise();
        label_6->raise();
        workHoursLineEdit->raise();
        contactPhoneLineEdit->raise();
        label_8->raise();
        pushButton->raise();
        pushButton_2->raise();
        departmentIDLineEdit->raise();
        label_9->raise();
        label_10->raise();
        nameLineEdit->raise();
        label_11->raise();
        genderComboBox->raise();
        levelLineEdit->raise();

        retranslateUi(regi_doc);

        QMetaObject::connectSlotsByName(regi_doc);
    } // setupUi

    void retranslateUi(QDialog *regi_doc)
    {
        regi_doc->setWindowTitle(QApplication::translate("regi_doc", "Dialog", Q_NULLPTR));
        label_5->setText(QApplication::translate("regi_doc", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\215\216\346\226\207\350\241\214\346\245\267'; font-size:26pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">\346\231\272\346\205\247\345\214\273\347\226\227\347\256\241\345\256\266</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("regi_doc", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label->setText(QString());
        usernameLineEdit->setText(QString());
        usernameLineEdit->setPlaceholderText(QApplication::translate("regi_doc", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("regi_doc", "\345\257\206\347\240\201", Q_NULLPTR));
        passwordLineEdit->setText(QString());
        passwordLineEdit->setPlaceholderText(QApplication::translate("regi_doc", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        confirmPasswordLineEdit->setText(QString());
        confirmPasswordLineEdit->setPlaceholderText(QApplication::translate("regi_doc", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        label_6->setText(QApplication::translate("regi_doc", "\345\267\245\344\275\234\346\227\266\351\227\264", Q_NULLPTR));
        workHoursLineEdit->setText(QString());
        workHoursLineEdit->setPlaceholderText(QApplication::translate("regi_doc", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\267\245\344\275\234\346\227\266\351\227\264\357\274\214\344\276\2139:00-17:00", Q_NULLPTR));
        contactPhoneLineEdit->setText(QString());
        contactPhoneLineEdit->setPlaceholderText(QApplication::translate("regi_doc", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\350\201\224\347\263\273\346\226\271\345\274\217", Q_NULLPTR));
        label_8->setText(QApplication::translate("regi_doc", "\347\272\247\345\210\253", Q_NULLPTR));
        pushButton->setText(QApplication::translate("regi_doc", "\346\217\220\344\272\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("regi_doc", "\345\217\226\346\266\210", Q_NULLPTR));
        departmentIDLineEdit->setText(QString());
        departmentIDLineEdit->setPlaceholderText(QApplication::translate("regi_doc", "\350\257\267\350\276\223\345\205\245\346\202\250\346\211\200\345\234\250\347\232\204\347\247\221\345\256\244", Q_NULLPTR));
        label_7->setText(QApplication::translate("regi_doc", "\347\247\221\345\256\244", Q_NULLPTR));
        label_9->setText(QApplication::translate("regi_doc", "\345\247\223\345\220\215", Q_NULLPTR));
        label_10->setText(QApplication::translate("regi_doc", "\346\200\247\345\210\253", Q_NULLPTR));
        nameLineEdit->setText(QString());
        nameLineEdit->setPlaceholderText(QApplication::translate("regi_doc", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\247\223\345\220\215", Q_NULLPTR));
        label_11->setText(QApplication::translate("regi_doc", "\350\201\224\347\263\273\346\226\271\345\274\217", Q_NULLPTR));
        genderComboBox->clear();
        genderComboBox->insertItems(0, QStringList()
         << QApplication::translate("regi_doc", "male", Q_NULLPTR)
         << QApplication::translate("regi_doc", "female", Q_NULLPTR)
        );
        levelLineEdit->clear();
        levelLineEdit->insertItems(0, QStringList()
         << QApplication::translate("regi_doc", "Intermediate", Q_NULLPTR)
         << QApplication::translate("regi_doc", "Junior", Q_NULLPTR)
         << QApplication::translate("regi_doc", "Senior", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class regi_doc: public Ui_regi_doc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGI_DOC_H
