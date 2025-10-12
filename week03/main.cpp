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
    int choice;
    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (___) { // Fill in the variable to switch on
            case ___: { // Option for average speed
                double distance, time;
                cout << "Distance (km): ";
                cin >> distance;
                cout << "Time (hours): ";
                cin >> time;
                double speed = calculateSpeed(___, ___); // Fill in arguments
                cout << "Average speed: " << speed << " km/h\n";
                ___;
            }
            case ___: { // Option for fuel efficiency
                double litres, distance;
                cout << "Litres used: ";
                cin >> litres;
                cout << "Distance (km): ";
                cin >> distance;
                double lPer100 = fuelEfficiencyLPer100Km(___, ___); // Fill arguments
                cout << "Fuel efficiency: " << lPer100 << " L/100 km\n";
                ___;
            }
            case ___: { // Option for km/h to m/s
                double speedKmh;
                cout << "Speed (km/h): ";
                cin >> speedKmh;
                double speedMs = speedInMetresPerSecond(___); // Fill in argument
                cout << "Speed: " << speedMs << " m/s\n";
                ___;
            }
            case ___: { // Option for CO2 emissions
                double litres;
                cout << "Litres used: ";
                cin >> litres;
                double co2 = estimatedCO2Emissions(litres); // Fill in argument
                cout << "Estimated CO2 emissions: " << co2 << " kg\n";
                ___;
            }
            case ___: // Option to quit
                cout << "Goodbye!\n";
                ___;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while (___ ___ ___); // Fill in the quit value
    return 0;
}

