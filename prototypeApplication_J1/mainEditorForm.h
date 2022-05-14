
#ifndef _MAINEDITORFORM_H
#define _MAINEDITORFORM_H

#include "ui_mainEditorForm.h"
#include <QApplication>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>

class mainEditorForm : public QDialog{
    Q_OBJECT
public:
    mainEditorForm(QDialog *parent = 0);
    ~mainEditorForm();
   
private:
    Ui::mainEditorForm *ui;
    QString qTransport, qDistance, qSpeed;
    QPushButton *btnDisplay;
    QComboBox *cTransport, *cDistance, *cSpeed;
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

