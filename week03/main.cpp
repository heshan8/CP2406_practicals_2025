#include <iostream>
#include <iomanip>
using namespace std;
// Program to calculate average speed and fuel efficiency
// --- Function Headers ---
// Also known as "function signatures" or "function prototypes"
double calculateSpeed(double distanceKm, double timeHours);
double fuelEfficiencyLPer100Km(double litresUsed, double distanceKm);

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
// Takes in distance and time
// Returns average speed in km/h
double calculateSpeed(double distanceKm, double timeHours) {
    if (timeHours <= 0) {
        cerr << "Time must be > 0 hours.\n";
        return 0.0;
    }
    return distanceKm / timeHours; // km/h
}

// Takes in Litres and Distance
// Returns fuel efficiency in L/100 km
double fuelEfficiencyLPer100Km(double litresUsed, double distanceKm) {
    if (distanceKm <= 0) {
        cerr << "Distance must be > 0 km.\n";
        return 0.0;
    }
    return (litresUsed / distanceKm) * 100.0; // L/100 km
}