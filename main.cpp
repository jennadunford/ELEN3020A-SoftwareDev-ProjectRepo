#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <emscripten/emscripten.h>


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

    EMSCRIPTEN_KEEPALIVE int genEnergyUsagePerHrElec(){
      return 0;
    }

    EMSCRIPTEN_KEEPALIVE string showConversionPetrolKWH(string carType){
      //string carType will be fed into a database which gives us fuel consumption in litres per 100km
          float fuel;  //fuel consumption in litres per 100km
          float fkWhConst = 8.902598;
          float fConvert;

          fConvert = fuel * fkWhConst; // l/100km to kWh/100km
              
              float wh; //energy consumption in watt-hour per km
              float fKWh;
              float fKWhconst = 0.1;

          fKWh =  wh * fKWhconst; //  wh/km to kWh/100km
      return "hello";
    }

  

#ifdef __cplusplus
}
#endif




