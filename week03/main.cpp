#include <iostream>
#include <iomanip>
#include "car_utils.h"
using namespace std;
// Program to calculate average speed and fuel efficiency

// Displays the menu options
void showMenu() {
    cout << "1) Calculate average speed (km/h)" << endl;
    cout << "2) Calculate fuel efficiency (L/100 km)" << endl;
    cout << "3) Convert speed from km/h to m/s" << endl;
    cout << "4) Estimate CO2 emissions" << endl;
    cout << "5) Quit" << endl;
}

int main() {
    cout << "Week 03 practical running\n";
    cout << "-----------------------------\n";
    cout << "CP2406 - Week 3: Functions demo\n";

    double distanceKm, timeHours, litres;
    cout << "Enter distance travelled (km): ";
    cin >> distanceKm;

    cout << "Enter time taken (hours): ";
    cin >> timeHours;

    cout << "Enter petrol used (litres): ";
    cin >> litres;

    // --- Use the functions ---
    double speedKmh = calculateSpeed(distanceKm, timeHours);
    double lPer100 = fuelEfficiencyLPer100Km(litres, distanceKm);
    double speedMs = speedInMetersPerSecond(speedKmh);
    double estC02Emissions = estimatedCO2Emissions(litres);

    // --- Print neatly ---
    cout << fixed << setprecision(2); // Format the output to two decimal places
    cout << "Average speed: " << speedKmh << " km/h\n";
    cout << "Average speed in m/s: " << speedMs << " M/s\n";
    cout << "Fuel efficiency: " << lPer100 << " L/100 km\n";
    cout << "Estimated C02 efficiency: " << estC02Emissions << " kg\n";

    return 0;
}

