#include <iostream>
#include <iomanip>
#include "carutils.h"
using namespace std;
// Program to calculate average speed and fuel efficiency

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

    // --- Print neatly ---
    cout << fixed << setprecision(2); // Format the output to two decimal places
    cout << "Average speed: " << speedKmh << " km/h\n";
    cout << "Fuel efficiency: " << lPer100 << " L/100 km\n";

    return 0;
}

