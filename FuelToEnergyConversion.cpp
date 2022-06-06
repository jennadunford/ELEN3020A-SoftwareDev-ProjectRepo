#include <iostream>
#include <iomanip>
using namespace std;

float fuelToKwh(float fuel)         // B - This function converts l/100km to kWh/100km
{
    float fkWhConst = 8.902598;
    float fConvert;

    fConvert = fuel * fkWhConst;

    return fConvert;
}

float whtoKwh(float wh)             // B - This function converts wh/km to kWh/100km
{
    float fKWh;
    float fKWhconst = 0.1;

    fKWh =  wh * fKWhconst;

    return fKWh;
}

int main()                          // B - Input function used for the fuel conversion but for now the wh/km to kWh/100km is input
                                    // but will be changed to read from the database
    float fuel, wh;

    cout << "Please enter your fuel consumption in litres per 100km:\n";
    cin >> fuel;
    cout << "Fuel converted from l/100km to kWh/100km is: " << setprecision(2) << fixed << fuelToKwh(fuel) << endl;
    cout << "Please enter your energy consumption in watt-hour per km:\n";
    cin >> wh;
    cout << "Fuel converted from wh/km to kWh/100km is: " << setprecision(2) << fixed << whtoKwh(wh) << endl;

    return 0;
}
