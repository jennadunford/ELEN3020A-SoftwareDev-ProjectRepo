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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainEditorForm
{
public:
    QAction *actionSave_As;
    QAction *actionExit;
    QAction *actionSave;
    QWidget *centralwidget;
    QLabel *label;
    QComboBox *cmbTransport;
    QLabel *label_2;
    QComboBox *cmbDistance;
    QLabel *label_3;
    QComboBox *cmbSpeed;
    QLabel *label_4;
    QCheckBox *chbPrice;
    QCheckBox *chbEnergy;
    QCheckBox *chbConversions;
    QPushButton *btnGen;
    QLabel *lblShow;

    void setupUi(QMainWindow *mainEditorForm)
    {
        if (mainEditorForm->objectName().isEmpty())
            mainEditorForm->setObjectName(QString::fromUtf8("mainEditorForm"));
        mainEditorForm->resize(800, 600);
        actionSave_As = new QAction(mainEditorForm);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionExit = new QAction(mainEditorForm);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSave = new QAction(mainEditorForm);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralwidget = new QWidget(mainEditorForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 60, 101, 16));
        cmbTransport = new QComboBox(centralwidget);
        cmbTransport->addItem(QString());
        cmbTransport->addItem(QString());
        cmbTransport->addItem(QString());
        cmbTransport->addItem(QString());
        cmbTransport->setObjectName(QString::fromUtf8("cmbTransport"));
        cmbTransport->setGeometry(QRect(70, 80, 151, 23));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 120, 101, 16));
        cmbDistance = new QComboBox(centralwidget);
        cmbDistance->addItem(QString());
        cmbDistance->addItem(QString());
        cmbDistance->addItem(QString());
        cmbDistance->setObjectName(QString::fromUtf8("cmbDistance"));
        cmbDistance->setGeometry(QRect(70, 140, 79, 23));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 180, 131, 16));
        cmbSpeed = new QComboBox(centralwidget);
        cmbSpeed->addItem(QString());
        cmbSpeed->addItem(QString());
        cmbSpeed->addItem(QString());
        cmbSpeed->addItem(QString());
        cmbSpeed->setObjectName(QString::fromUtf8("cmbSpeed"));
        cmbSpeed->setGeometry(QRect(70, 200, 79, 23));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 240, 211, 16));
        chbPrice = new QCheckBox(centralwidget);
        chbPrice->setObjectName(QString::fromUtf8("chbPrice"));
        chbPrice->setGeometry(QRect(70, 260, 85, 21));
        chbEnergy = new QCheckBox(centralwidget);
        chbEnergy->setObjectName(QString::fromUtf8("chbEnergy"));
        chbEnergy->setGeometry(QRect(70, 280, 201, 21));
        chbConversions = new QCheckBox(centralwidget);
        chbConversions->setObjectName(QString::fromUtf8("chbConversions"));
        chbConversions->setGeometry(QRect(70, 300, 201, 21));
        btnGen = new QPushButton(centralwidget);
        btnGen->setObjectName(QString::fromUtf8("btnGen"));
        btnGen->setGeometry(QRect(280, 180, 161, 23));
        lblShow = new QLabel(centralwidget);
        lblShow->setObjectName(QString::fromUtf8("lblShow"));
        lblShow->setGeometry(QRect(70, 350, 561, 181));
        lblShow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mainEditorForm->setCentralWidget(centralwidget);

        retranslateUi(mainEditorForm);
        QObject::connect(actionExit, SIGNAL(triggered()), mainEditorForm, SLOT(close()));
        QObject::connect(cmbTransport, SIGNAL(activated(QString)), mainEditorForm, SLOT(transportSelect()));
        QObject::connect(cmbDistance, SIGNAL(activated(QString)), mainEditorForm, SLOT(distanceSelect()));
        QObject::connect(cmbSpeed, SIGNAL(activated(QString)), mainEditorForm, SLOT(speedSelect()));
        QObject::connect(chbPrice, SIGNAL(clicked()), mainEditorForm, SLOT(priceCheck()));
        QObject::connect(chbConversions, SIGNAL(clicked()), mainEditorForm, SLOT(EnergyConverCheck()));
        QObject::connect(chbEnergy, SIGNAL(clicked()), mainEditorForm, SLOT(EnergyConsumpCheck()));
        QObject::connect(btnGen, SIGNAL(clicked()), mainEditorForm, SLOT(generateCompare()));

        QMetaObject::connectSlotsByName(mainEditorForm);
    } // setupUi

    void retranslateUi(QMainWindow *mainEditorForm)
    {
        mainEditorForm->setWindowTitle(QApplication::translate("mainEditorForm", "mainEditorForm", nullptr));
        actionSave_As->setText(QApplication::translate("mainEditorForm", "Save As", nullptr));
        actionExit->setText(QApplication::translate("mainEditorForm", "Exit", nullptr));
        actionSave->setText(QApplication::translate("mainEditorForm", "Save", nullptr));
        label->setText(QApplication::translate("mainEditorForm", "Select Transport", nullptr));
        cmbTransport->setItemText(0, QApplication::translate("mainEditorForm", "Car", nullptr));
        cmbTransport->setItemText(1, QApplication::translate("mainEditorForm", "Bus", nullptr));
        cmbTransport->setItemText(2, QApplication::translate("mainEditorForm", "Train", nullptr));
        cmbTransport->setItemText(3, QApplication::translate("mainEditorForm", "Walking", nullptr));

        label_2->setText(QApplication::translate("mainEditorForm", "Select Distance", nullptr));
        cmbDistance->setItemText(0, QApplication::translate("mainEditorForm", "5km", nullptr));
        cmbDistance->setItemText(1, QApplication::translate("mainEditorForm", "10km", nullptr));
        cmbDistance->setItemText(2, QApplication::translate("mainEditorForm", "50km", nullptr));

        label_3->setText(QApplication::translate("mainEditorForm", "Select Avg Speed", nullptr));
        cmbSpeed->setItemText(0, QApplication::translate("mainEditorForm", "5km/hr", nullptr));
        cmbSpeed->setItemText(1, QApplication::translate("mainEditorForm", "30km/hr", nullptr));
        cmbSpeed->setItemText(2, QApplication::translate("mainEditorForm", "60km/hr", nullptr));
        cmbSpeed->setItemText(3, QApplication::translate("mainEditorForm", "120km/hr", nullptr));

        label_4->setText(QApplication::translate("mainEditorForm", "What will you compare", nullptr));
        chbPrice->setText(QApplication::translate("mainEditorForm", "Price", nullptr));
        chbEnergy->setText(QApplication::translate("mainEditorForm", "Energy Consumption per km", nullptr));
        chbConversions->setText(QApplication::translate("mainEditorForm", "Energy Conversions", nullptr));
        btnGen->setText(QApplication::translate("mainEditorForm", "Generate Comparison", nullptr));
        lblShow->setText(QApplication::translate("mainEditorForm", "Hello", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainEditorForm: public Ui_mainEditorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINEDITORFORM_H
