/********************************************************************************
** Form generated from reading UI file 'infomation.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOMATION_H
#define UI_INFOMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_infomation
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *infomation)
    {
        if (infomation->objectName().isEmpty())
            infomation->setObjectName(QString::fromUtf8("infomation"));
        infomation->resize(400, 300);
        label = new QLabel(infomation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-4, 3, 401, 301));
        label->setPixmap(QPixmap(QString::fromUtf8("../image/3.png")));
        label->setScaledContents(true);
        pushButton = new QPushButton(infomation);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 210, 111, 41));
        layoutWidget = new QWidget(infomation);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 51, 171, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        layoutWidget1 = new QWidget(infomation);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 90, 171, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        layoutWidget2 = new QWidget(infomation);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(100, 130, 171, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 9pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_3 = new QLineEdit(layoutWidget2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(lineEdit_3);

        pushButton_2 = new QPushButton(infomation);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 210, 101, 41));

        retranslateUi(infomation);
        QObject::connect(pushButton_2, SIGNAL(clicked()), infomation, SLOT(close()));

        QMetaObject::connectSlotsByName(infomation);
    } // setupUi

    void retranslateUi(QWidget *infomation)
    {
        infomation->setWindowTitle(QCoreApplication::translate("infomation", "Form", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("infomation", "Next", nullptr));
        label_2->setText(QCoreApplication::translate("infomation", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("infomation", "Familly:", nullptr));
        label_4->setText(QCoreApplication::translate("infomation", "Tell:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("infomation", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class infomation: public Ui_infomation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOMATION_H
