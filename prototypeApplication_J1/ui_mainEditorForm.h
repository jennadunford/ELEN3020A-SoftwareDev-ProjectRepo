/********************************************************************************
** Form generated from reading UI file 'mainEditorForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINEDITORFORM_H
#define UI_MAINEDITORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mainEditorForm
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *cmbTransport;
    QComboBox *cmbDistance;
    QComboBox *cmbSpeed;
    QLabel *lblShow;
    QCheckBox *chbPrice;
    QCheckBox *chbEnergy;
    QCheckBox *chbConversions;
    QPushButton *btnGen;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *mainEditorForm)
    {
        if (mainEditorForm->objectName().isEmpty())
            mainEditorForm->setObjectName(QString::fromUtf8("mainEditorForm"));
        mainEditorForm->resize(911, 791);
        mainEditorForm->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(mainEditorForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 181, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(mainEditorForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 120, 181, 16));
        label_2->setFont(font);
        label_3 = new QLabel(mainEditorForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 190, 181, 16));
        label_3->setFont(font);
        label_4 = new QLabel(mainEditorForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 250, 181, 16));
        label_4->setFont(font);
        cmbTransport = new QComboBox(mainEditorForm);
        cmbTransport->addItem(QString());
        cmbTransport->addItem(QString());
        cmbTransport->addItem(QString());
        cmbTransport->addItem(QString());
        cmbTransport->setObjectName(QString::fromUtf8("cmbTransport"));
        cmbTransport->setGeometry(QRect(50, 70, 79, 23));
        cmbTransport->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        cmbDistance = new QComboBox(mainEditorForm);
        cmbDistance->addItem(QString());
        cmbDistance->addItem(QString());
        cmbDistance->addItem(QString());
        cmbDistance->addItem(QString());
        cmbDistance->setObjectName(QString::fromUtf8("cmbDistance"));
        cmbDistance->setGeometry(QRect(50, 140, 79, 23));
        cmbDistance->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        cmbSpeed = new QComboBox(mainEditorForm);
        cmbSpeed->addItem(QString());
        cmbSpeed->addItem(QString());
        cmbSpeed->addItem(QString());
        cmbSpeed->addItem(QString());
        cmbSpeed->setObjectName(QString::fromUtf8("cmbSpeed"));
        cmbSpeed->setGeometry(QRect(50, 210, 79, 23));
        cmbSpeed->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 122, 122);"));
        lblShow = new QLabel(mainEditorForm);
        lblShow->setObjectName(QString::fromUtf8("lblShow"));
        lblShow->setGeometry(QRect(40, 560, 721, 181));
        lblShow->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        lblShow->setFrameShape(QFrame::Box);
        lblShow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        chbPrice = new QCheckBox(mainEditorForm);
        chbPrice->setObjectName(QString::fromUtf8("chbPrice"));
        chbPrice->setGeometry(QRect(260, 280, 41, 51));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chbPrice->sizePolicy().hasHeightForWidth());
        chbPrice->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(145, 145, 145, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush2(QColor(132, 132, 132, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(148, 148, 148, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush4(QColor(158, 158, 158, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        QBrush brush6(QColor(255, 255, 255, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        chbPrice->setPalette(palette);
        chbPrice->setLayoutDirection(Qt::LeftToRight);
        chbPrice->setAutoFillBackground(false);
        chbPrice->setStyleSheet(QString::fromUtf8("QCheckBox::indicator { width:40px; height: 40px;};\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        chbPrice->setIconSize(QSize(0, 0));
        chbPrice->setChecked(false);
        chbEnergy = new QCheckBox(mainEditorForm);
        chbEnergy->setObjectName(QString::fromUtf8("chbEnergy"));
        chbEnergy->setGeometry(QRect(260, 330, 41, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush8(QColor(31, 31, 31, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush9(QColor(143, 143, 143, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        QBrush brush11(QColor(255, 255, 255, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        chbEnergy->setPalette(palette1);
        chbEnergy->setLayoutDirection(Qt::LeftToRight);
        chbEnergy->setStyleSheet(QString::fromUtf8("QCheckBox::indicator { width:40px; height: 40px;};\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        chbConversions = new QCheckBox(mainEditorForm);
        chbConversions->setObjectName(QString::fromUtf8("chbConversions"));
        chbConversions->setGeometry(QRect(260, 370, 51, 61));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush13(QColor(141, 141, 141, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush8);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        QBrush brush15(QColor(255, 255, 255, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        QBrush brush16(QColor(0, 0, 0, 128));
        brush16.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        chbConversions->setPalette(palette2);
        chbConversions->setLayoutDirection(Qt::LeftToRight);
        chbConversions->setStyleSheet(QString::fromUtf8("QCheckBox::indicator { width:40px; height: 40px;};\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        btnGen = new QPushButton(mainEditorForm);
        btnGen->setObjectName(QString::fromUtf8("btnGen"));
        btnGen->setGeometry(QRect(340, 130, 211, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btnGen->setFont(font1);
        btnGen->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"background-color: rgb(21, 232, 99);\n"
""));
        label_5 = new QLabel(mainEditorForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 290, 291, 31));
        label_5->setFont(font);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(98, 98, 98);\n"
"margin: 0 auto;\n"
"text-align: center;\n"
"padding: 10px;\n"
"border-radius: 8px;\n"
"\n"
""));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(mainEditorForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 330, 291, 41));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(98, 98, 98);\n"
"margin: 0 auto;\n"
"text-align: center;\n"
"padding: 10px;\n"
"border-radius: 8px;\n"
"\n"
""));
        label_7 = new QLabel(mainEditorForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 380, 271, 31));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(98, 98, 98);\n"
"margin: 0 auto;\n"
"text-align: center;\n"
"padding: 10px;\n"
"border-radius: 8px;\n"
"\n"
""));
        label_7->setAlignment(Qt::AlignCenter);
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        cmbTransport->raise();
        cmbDistance->raise();
        cmbSpeed->raise();
        lblShow->raise();
        btnGen->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        chbPrice->raise();
        chbConversions->raise();
        chbEnergy->raise();

        retranslateUi(mainEditorForm);
        QObject::connect(cmbTransport, SIGNAL(activated(QString)), mainEditorForm, SLOT(transportSelect()));
        QObject::connect(cmbDistance, SIGNAL(activated(QString)), mainEditorForm, SLOT(distanceSelect()));
        QObject::connect(cmbSpeed, SIGNAL(activated(QString)), mainEditorForm, SLOT(speedSelect()));
        QObject::connect(chbPrice, SIGNAL(clicked()), mainEditorForm, SLOT(priceCheck()));
        QObject::connect(chbEnergy, SIGNAL(clicked()), mainEditorForm, SLOT(EnergyConsumptionCheck()));
        QObject::connect(chbConversions, SIGNAL(clicked()), mainEditorForm, SLOT(EnergyConverCheck()));
        QObject::connect(btnGen, SIGNAL(clicked()), mainEditorForm, SLOT(generateCompare()));

        QMetaObject::connectSlotsByName(mainEditorForm);
    } // setupUi

    void retranslateUi(QDialog *mainEditorForm)
    {
        mainEditorForm->setWindowTitle(QApplication::translate("mainEditorForm", "mainEditorForm", nullptr));
        label->setText(QApplication::translate("mainEditorForm", "Select Transport", nullptr));
        label_2->setText(QApplication::translate("mainEditorForm", "Select Distance", nullptr));
        label_3->setText(QApplication::translate("mainEditorForm", "Select Average Speed", nullptr));
        label_4->setText(QApplication::translate("mainEditorForm", "What will you compare?", nullptr));
        cmbTransport->setItemText(0, QApplication::translate("mainEditorForm", "Car", nullptr));
        cmbTransport->setItemText(1, QApplication::translate("mainEditorForm", "Bus", nullptr));
        cmbTransport->setItemText(2, QApplication::translate("mainEditorForm", "Train", nullptr));
        cmbTransport->setItemText(3, QApplication::translate("mainEditorForm", "Walking", nullptr));

        cmbDistance->setItemText(0, QApplication::translate("mainEditorForm", "5km", nullptr));
        cmbDistance->setItemText(1, QApplication::translate("mainEditorForm", "10km", nullptr));
        cmbDistance->setItemText(2, QApplication::translate("mainEditorForm", "60km", nullptr));
        cmbDistance->setItemText(3, QApplication::translate("mainEditorForm", "100km", nullptr));

        cmbSpeed->setItemText(0, QApplication::translate("mainEditorForm", "5km/hr", nullptr));
        cmbSpeed->setItemText(1, QApplication::translate("mainEditorForm", "60km/hr", nullptr));
        cmbSpeed->setItemText(2, QApplication::translate("mainEditorForm", "120km/hr", nullptr));
        cmbSpeed->setItemText(3, QApplication::translate("mainEditorForm", "200km/hr", nullptr));

        lblShow->setText(QApplication::translate("mainEditorForm", "Hello", nullptr));
        chbPrice->setText(QString());
        chbEnergy->setText(QString());
        chbConversions->setText(QString());
        btnGen->setText(QApplication::translate("mainEditorForm", "Generate Comparison", nullptr));
        label_5->setText(QApplication::translate("mainEditorForm", "Price", nullptr));
        label_6->setText(QApplication::translate("mainEditorForm", "Energy Consumption per km", nullptr));
        label_7->setText(QApplication::translate("mainEditorForm", "Energy Conversions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainEditorForm: public Ui_mainEditorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINEDITORFORM_H
