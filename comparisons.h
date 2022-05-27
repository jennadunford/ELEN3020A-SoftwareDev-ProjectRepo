//Header stuff 
//So we need to build a class
//For our calculations and outputs
//From Yesh's document we need the following:
//Force Function (double)
//Mass (double) do we average this?
//Acceleration (double)
//Angle (double)
//RRcoef (double)
//dragA (double)
//VFA (double) do we average this?
//Some of these values will need to be taken from database

//We will create the functions here

//We're allowing users to compare energy conversions
//Comparions of electrical and petrol
//Price comparisons

//So we'll need templates of a sort for each of these things

#include <iostream>
#include <fstream>
using namespace std;

class Comparison{
    public:
    void getData(ifstream inputFile);
    void generate();
    void outputData(ofstream outputFile);
    
    
    private:
    double fFunc, vMass, vAcc, RRcoef, dragA, VFA;
    ifstream inputFile;
    ofstream outputFile;
    bool chConver, chEnergy, chPrice;
    
};
