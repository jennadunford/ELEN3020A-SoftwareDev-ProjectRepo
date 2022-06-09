//Put C code here
#include <stdio.h>
#include <emscripten/emscripten.h>
#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <cmath>

using namespace std;

int main (void)
{

}

#ifdef __cplusplus
extern "C" {
#endif

 EMSCRIPTEN_KEEPALIVE int addingTwoNumbers(int a, int b){
 return (a+b);
 }

  EMSCRIPTEN_KEEPALIVE int genCostPerKmPetrol(){
    return 0;
  }

    EMSCRIPTEN_KEEPALIVE int genCostPerKmElec(){
      return 0;
    }

    EMSCRIPTEN_KEEPALIVE int genEnergyUsagePeHrPetrol(){
      return 0;
    }

    EMSCRIPTEN_KEEPALIVE float genEnergyUsagePerHrElec(){
      return 0;
    }


  EMSCRIPTEN_KEEPALIVE float sConversionPetrolKWH(float fuel){
      //string carType will be fed into a database which gives us fuel consumption in litres per 100km
     //fuel consumption in litres per 100km
          float fkWhConst = 8.902598;
          float fConvert;

          fConvert = fuel * fkWhConst; // l/100km to kWh/100km
              
              float wh = 0; //energy consumption in watt-hour per km
              float fKWh = 0;
              float fKWhconst = 0.1;

          fKWh =  wh * fKWhconst; //  wh/km to kWh/100km
          
      return round(fConvert);
    }


  

#ifdef __cplusplus
}
#endif





