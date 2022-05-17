
#ifndef _MAINEDITORFORM_H
#define _MAINEDITORFORM_H

#include "ui_mainEditorForm.h"
#include <QApplication>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QCheckBox>

//This is the class set up for the UI form
//The public variable is the actual form itself
class mainEditorForm : public QDialog{
    Q_OBJECT
public:
    mainEditorForm(QDialog *parent = 0);
    ~mainEditorForm();
//The private variables are the variables used in the functions
    //And the functions themselves are declared in private slots
    //These slots correspond to the slots in qt designer
    //These variables and functions are accessed in the .cpp file for the main editor form
private:
    Ui::mainEditorForm *ui;
    QString qTransport, qDistance, qSpeed, qOutputText;
    QString qPriceCheck, qConverCheck, qEnergyCheck;
    bool bPrice, bConver, bEnergy;
    QPushButton *btnDisplay;
    QComboBox *cTransport, *cDistance, *cSpeed;
    QCheckBox *chPrice, *chConver, *chEnergy;
    QLabel *lDisplay;
    
    private slots:
        void generateCompare();
        void EnergyConverCheck();
        void EnergyConsumpCheck();
        void priceCheck();
        void distanceSelect();
        void speedSelect();
        void transportSelect();
};
#endif /* _MAINEDITORFORM_H */

