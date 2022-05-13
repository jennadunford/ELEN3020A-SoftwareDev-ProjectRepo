/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.h to edit this template
 */

/* 
 * File:   mainEditorForm.h
 * Author: jennadunford
 *
 * Created on May 13, 2022, 12:24 PM
 */

#ifndef _MAINEDITORFORM_H
#define _MAINEDITORFORM_H

#include "ui_mainEditorForm.h"
#include <QApplication>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>

class mainEditorForm : public QMainWindow {
    Q_OBJECT
public:
    //mainEditorForm();
    //virtual ~mainEditorForm();
    //int indTransport,indDistance,indSpeed;
    //QString qTransport, qDistance, qSpeed;m
    mainEditorForm(QMainWindow *parent = 0);
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
