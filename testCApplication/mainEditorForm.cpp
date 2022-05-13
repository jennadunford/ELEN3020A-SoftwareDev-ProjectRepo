#include "mainEditorForm.h"
#include "main.cpp"
#include <QComboBox>
#include <QPushButton>
#include <QLabel>

mainEditorForm::mainEditorForm(QMainWindow *parent)
: QMainWindow(parent), ui(new Ui::mainEditorForm)
{
    ui->setupUi(this);
    qTransport = "This is a test: Car";
    
    cTransport = Ui_mainEditorForm().cmbTransport;
    cDistance = Ui_mainEditorForm().cmbDistance;
    cSpeed = Ui_mainEditorForm().cmbSpeed;
    btnDisplay =Ui_mainEditorForm().btnGen;
    connect(ui->btnGen, SIGNAL(clicked()), this ,SLOT(generateCompare()));
    connect(ui->cmbTransport, SIGNAL(activated()), this, SLOT(transportSelect()));
    connect(ui->cmbDistance, SIGNAL(activated()), this, SLOT(distanceSelect()));
    connect(ui->cmbSpeed, SIGNAL(activated()), this, SLOT(speedSelect()));
}

mainEditorForm::~mainEditorForm() {
    delete ui;
}

void mainEditorForm::generateCompare(){
    lDisplay = Ui_mainEditorForm().lblShow;
    ui->lblShow->setText(
    "Selected Transport: " + qTransport
    + "\n" 
    + "Selected Distance: " + qDistance
    + "\n"
    +"Selected Speed: " + qSpeed);
}


void mainEditorForm::EnergyConverCheck(){
    
}

void mainEditorForm::EnergyConsumpCheck(){
    
}

void mainEditorForm::priceCheck(){
    
}

void mainEditorForm::distanceSelect(){
    qDistance = ui->cmbDistance->currentText();
}

void mainEditorForm::speedSelect(){
    qSpeed = ui->cmbSpeed->currentText();
    
}

void mainEditorForm::transportSelect(){
    qTransport = ui->cmbTransport->currentText();
    
}
