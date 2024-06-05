/********************************************************************************
** Form generated from reading UI file 'hello_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLO_DIALOG_H
#define UI_HELLO_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Hello_Dialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Hello_Dialog)
    {
        if (Hello_Dialog->objectName().isEmpty())
            Hello_Dialog->setObjectName(QString::fromUtf8("Hello_Dialog"));
        Hello_Dialog->resize(500, 300);
        Hello_Dialog->setMinimumSize(QSize(500, 300));
        Hello_Dialog->setMaximumSize(QSize(500, 300));
        Hello_Dialog->setModal(true);
        gridLayout = new QGridLayout(Hello_Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(Hello_Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("blanks/ReTab_Log_hello.png")));

        gridLayout->addWidget(label_2, 0, 0, 3, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(Hello_Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(Hello_Dialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_2 = new QPushButton(Hello_Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        pushButton = new QPushButton(Hello_Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);


        retranslateUi(Hello_Dialog);

        QMetaObject::connectSlotsByName(Hello_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Hello_Dialog)
    {
        Hello_Dialog->setWindowTitle(QCoreApplication::translate("Hello_Dialog", "\320\222\321\213\320\261\320\276\321\200 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("Hello_Dialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\321\203\321\202\321\214 \320\272 \320\261\320\264", nullptr));
        lineEdit->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Hello_Dialog", "\320\236\320\261\320\267\320\276\321\200", nullptr));
        pushButton->setText(QCoreApplication::translate("Hello_Dialog", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hello_Dialog: public Ui_Hello_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLO_DIALOG_H
