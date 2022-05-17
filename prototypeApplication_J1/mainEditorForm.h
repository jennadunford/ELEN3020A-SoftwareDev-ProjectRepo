
#ifndef _MAINEDITORFORM_H
#define _MAINEDITORFORM_H

#include "ui_mainEditorForm.h"
#include <QApplication>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QCheckBox>

//This is the class set up for the UI form -J
//The public variable is the actual form itself -J
class mainEditorForm : public QDialog{
    Q_OBJECT
public:
    mainEditorForm(QDialog *parent = 0);
    ~mainEditorForm();
//The private variables are the variables used in the functions -J
    //And the functions themselves are declared in private slots -J
    //These slots correspond to the slots in qt designer -J
    //These variables and functions are accessed in the .cpp file for the main editor form - J
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

