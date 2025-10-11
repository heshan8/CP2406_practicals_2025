#include <iostream>
#include <iomanip>
using namespace std;

// --- Function Headers ---
// Also known as "function signatures" or "function prototypes"
// Returns average speed in km/h
double calculateSpeed(double distanceKm, double timeHours) {
    if (timeHours <= 0) {
        cerr << "Time must be > 0 hours.\n";
        return 0.0;
    }
    return distanceKm / timeHours; // km/h
}

// Returns fuel efficiency in L/100 km
double fuelEfficiencyLPer100Km(double litresUsed, double distanceKm) {
    if (distanceKm <= 0) {
        cerr << "Distance must be > 0 km.\n";
        return 0.0;
    }
    return (litresUsed / distanceKm) * 100.0; // L/100 km
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

    // --- Print neatly ---
    cout << fixed << setprecision(2);
    cout << "Average speed: " << speedKmh << " km/h\n";
    cout << "Fuel efficiency: " << lPer100 << " L/100 km\n";

    return 0;
}