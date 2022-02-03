/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox_3;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *comboBox_4;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *comboBox_5;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *comboBox_6;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(400, 300);
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 411, 301));
        label->setPixmap(QPixmap(QString::fromUtf8("../image/index.jpg")));
        label->setScaledContents(true);
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 240, 101, 31));
        layoutWidget = new QWidget(Form);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 40, 151, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        layoutWidget1 = new QWidget(Form);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 70, 151, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_3);

        comboBox_2 = new QComboBox(layoutWidget1);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);

        layoutWidget2 = new QWidget(Form);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(100, 100, 151, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_4);

        comboBox_3 = new QComboBox(layoutWidget2);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_3->addWidget(comboBox_3);

        layoutWidget3 = new QWidget(Form);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(100, 130, 151, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_5);

        comboBox_4 = new QComboBox(layoutWidget3);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout_4->addWidget(comboBox_4);

        layoutWidget4 = new QWidget(Form);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(100, 160, 151, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_6);

        comboBox_5 = new QComboBox(layoutWidget4);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        horizontalLayout_5->addWidget(comboBox_5);

        layoutWidget5 = new QWidget(Form);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(100, 190, 151, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(label_7);

        comboBox_6 = new QComboBox(layoutWidget5);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        horizontalLayout_6->addWidget(comboBox_6);


        retranslateUi(Form);
        QObject::connect(pushButton, SIGNAL(clicked()), Form, SLOT(close()));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("Form", "Save", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Gender:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Form", "Men", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Form", "Female", nullptr));

        label_3->setText(QCoreApplication::translate("Form", "Shoe Model:", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Form", "Classic", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Form", "Sport", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Form", "Other", nullptr));

        label_4->setText(QCoreApplication::translate("Form", "Shoe Brand:", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Form", "Adidas", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Form", "Jordan", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Form", "Nike", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("Form", "Puma", nullptr));

        label_5->setText(QCoreApplication::translate("Form", "Waxe Model:", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("Form", "Abri", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("Form", "Ferchei", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("Form", "Fori", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("Form", "Ghatrei", nullptr));

        label_6->setText(QCoreApplication::translate("Form", "Waxe brand:", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("Form", "Kingly", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("Form", "Pwax", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("Form", "Panda", nullptr));

        label_7->setText(QCoreApplication::translate("Form", "Repair:", nullptr));
        comboBox_6->setItemText(0, QCoreApplication::translate("Form", "Sew", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("Form", "Glue", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
