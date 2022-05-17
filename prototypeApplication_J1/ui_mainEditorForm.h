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

    void setupUi(QDialog *mainEditorForm)
    {
        if (mainEditorForm->objectName().isEmpty())
            mainEditorForm->setObjectName(QString::fromUtf8("mainEditorForm"));
        mainEditorForm->resize(911, 791);
        label = new QLabel(mainEditorForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 181, 16));
        label_2 = new QLabel(mainEditorForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 120, 181, 16));
        label_3 = new QLabel(mainEditorForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 190, 141, 16));
        label_4 = new QLabel(mainEditorForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 260, 181, 16));
        cmbTransport = new QComboBox(mainEditorForm);
        cmbTransport->addItem(QString());
        cmbTransport->addItem(QString());
        cmbTransport->addItem(QString());
        cmbTransport->addItem(QString());
        cmbTransport->setObjectName(QString::fromUtf8("cmbTransport"));
        cmbTransport->setGeometry(QRect(50, 70, 79, 23));
        cmbDistance = new QComboBox(mainEditorForm);
        cmbDistance->addItem(QString());
        cmbDistance->addItem(QString());
        cmbDistance->addItem(QString());
        cmbDistance->addItem(QString());
        cmbDistance->setObjectName(QString::fromUtf8("cmbDistance"));
        cmbDistance->setGeometry(QRect(50, 140, 79, 23));
        cmbSpeed = new QComboBox(mainEditorForm);
        cmbSpeed->addItem(QString());
        cmbSpeed->addItem(QString());
        cmbSpeed->addItem(QString());
        cmbSpeed->addItem(QString());
        cmbSpeed->setObjectName(QString::fromUtf8("cmbSpeed"));
        cmbSpeed->setGeometry(QRect(50, 210, 79, 23));
        lblShow = new QLabel(mainEditorForm);
        lblShow->setObjectName(QString::fromUtf8("lblShow"));
        lblShow->setGeometry(QRect(50, 440, 721, 181));
        lblShow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        chbPrice = new QCheckBox(mainEditorForm);
        chbPrice->setObjectName(QString::fromUtf8("chbPrice"));
        chbPrice->setGeometry(QRect(50, 280, 85, 21));
        chbEnergy = new QCheckBox(mainEditorForm);
        chbEnergy->setObjectName(QString::fromUtf8("chbEnergy"));
        chbEnergy->setGeometry(QRect(50, 310, 211, 21));
        chbConversions = new QCheckBox(mainEditorForm);
        chbConversions->setObjectName(QString::fromUtf8("chbConversions"));
        chbConversions->setGeometry(QRect(50, 340, 211, 21));
        btnGen = new QPushButton(mainEditorForm);
        btnGen->setObjectName(QString::fromUtf8("btnGen"));
        btnGen->setGeometry(QRect(340, 130, 211, 41));
        btnGen->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"DejaVu Math TeX Gyre\";"));

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
        chbPrice->setText(QApplication::translate("mainEditorForm", "Price", nullptr));
        chbEnergy->setText(QApplication::translate("mainEditorForm", "Energy Consumption per km", nullptr));
        chbConversions->setText(QApplication::translate("mainEditorForm", "Energy Conversions", nullptr));
        btnGen->setText(QApplication::translate("mainEditorForm", "Generate Comparison", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainEditorForm: public Ui_mainEditorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINEDITORFORM_H
