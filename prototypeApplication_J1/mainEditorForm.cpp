#include "mainEditorForm.h"
#include "main.cpp"
#include <QComboBox>
#include <QPushButton>
#include <QLabel>

mainEditorForm::mainEditorForm(QDialog *parent)
: QDialog(parent), ui(new Ui::mainEditorForm)
{
    ui->setupUi(this); //This line sets up the UI as it's displayed on the form -J
    
    
    cTransport = Ui_mainEditorForm().cmbTransport; //Assigns the transport combo box variable -J
    cDistance = Ui_mainEditorForm().cmbDistance; //Assigns the distance combo box variable -J
    cSpeed = Ui_mainEditorForm().cmbSpeed; //Assigns the speed combo box variable -J
    
    chPrice = Ui_mainEditorForm().chbPrice; //Assigns the price check box variable -J
    chConver = Ui_mainEditorForm().chbConversions; //Assigns the conversions check box variable -J
    chEnergy = Ui_mainEditorForm().chbEnergy; //Assigns the energy check box variable -J
     
    btnDisplay =Ui_mainEditorForm().btnGen; //Assigns the button variable -J
    
    //Bottom 3 lines initiate initial strings for the variable selections -J
    qTransport = "Car";
    qDistance = "5km";
    qSpeed = "5km/hr";
    
    connect(ui->btnGen, SIGNAL(clicked()), this ,SLOT(generateCompare())); //This connects the ui to the button, and responds when the button is clicked -J
    
    connect(ui->cmbTransport, SIGNAL(activated()), this, SLOT(transportSelect())); //These 3 lines connect the combo boxes and execute their relevant functions, see below -J
    connect(ui->cmbDistance, SIGNAL(activated()), this, SLOT(distanceSelect()));
    connect(ui->cmbSpeed, SIGNAL(activated()), this, SLOT(speedSelect()));
    
    connect(ui->chbPrice, SIGNAL(clicked()), this, SLOT(priceCheck())); //These 3 lines connect the check boxes and execute their relevant functions, see below -J
    connect(ui->chbConversions, SIGNAL(clicked()), this, SLOT(EnergyConverCheck()));
    connect(ui->chbEnergy, SIGNAL(clicked()), this, SLOT(EnergyConsumpCheck()));
}

mainEditorForm::~mainEditorForm() {
    delete ui;
}

//This function is executed when the generate button is clicked -J
void mainEditorForm::generateCompare(){
    lDisplay = Ui_mainEditorForm().lblShow;
    qOutputText = 
    "Variable selections:" 
            "\n" "\n"
    "Selected Transport: " + qTransport
    + "\n" 
    + "Selected Distance: " + qDistance
    + "\n"
    +"Selected Speed: " + qSpeed
    + "\n"
    + "\n"
    + "Comparisons to be shown:"
    + "\n"
    + "- " + qPriceCheck
            + "\n"
    + "- " + qEnergyCheck
            + "\n"
    + "- " + qConverCheck
            + "\n"
            ;
    
    ui->lblShow->setText(qOutputText);
}



//This function executes when the energy conversion checkbox is clicked -J
void mainEditorForm::EnergyConverCheck(){
    if(ui->chbConversions->isChecked()){  //This bool corresponds to whether the checkbox is elected or not - J
        qConverCheck = "Showing energy conversion comparisons";
    }else{
        qConverCheck = "";
    }
    
}

//This function executes when the consumption checkbox is clicked -J
void mainEditorForm::EnergyConsumpCheck(){
    if(ui->chbEnergy->isChecked()){  //This bool corresponds to whether the checkbox is elected or not - J
        qEnergyCheck = "Showing energy consumption comparisons";
    }else{
        qEnergyCheck = "";
    }
}

//This function is executed when the price checkbox is clicked -J
void mainEditorForm::priceCheck(){
    if(ui->chbPrice->isChecked()){ //This bool corresponds to whether the checkbox is elected or not - J
        qPriceCheck = "Showing price comparisons";
    }else{
        qPriceCheck = "";
    }
    
}

//This function executes when the combo box is selected in the ui -J
void mainEditorForm::distanceSelect(){
    qDistance = ui->cmbDistance->currentText(); //Gets the current text from the combo box -J
}

//This function executes when the combo box is selected in the ui -J
void mainEditorForm::speedSelect(){
    qSpeed = ui->cmbSpeed->currentText(); //Gets the current text from the combo box -J
    
}

//This function executes when this combo box is selected in the UI -J
void mainEditorForm::transportSelect(){
    qTransport = ui->cmbTransport->currentText(); //Gets the current text from the combo box -J
    
}