#include <iostream>
#include <iomanip>
#include "car_utils.h"
using namespace std;
// Program to calculate average speed and fuel efficiency

// Displays the menu options
void showMenu() {
    cout << "\n";
    cout << "-------Trip Info Calculator-------" << endl;
    cout << "1) Calculate average speed (km/h)" << endl;
    cout << "2) Calculate fuel efficiency (L/100 km)" << endl;
    cout << "3) Convert speed from km/h to m/s" << endl;
    cout << "4) Estimate CO2 emissions" << endl;
    cout << "5) Quit" << endl;
}

// Define the Trip struct
struct Trip {
    double distanceKm;
    double timeHours;
    double litres;
};

int main() {
    int choice;
    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) { // Fill in the variable to switch on
            case 1: { // Option for average speed (using cases 1-5 for 5 menu options)
                double distance, time;
                cout << "Distance (km): ";
                cin >> distance;
                cout << "Time (hours): ";
                cin >> time;
                double speed = calculateSpeed(distance, time); // Fill in arguments
                cout << "Average speed: " << speed << " km/h\n";
                break;
            }
            case 2: { // Option for fuel efficiency
                double litres, distance;
                cout << "Litres used: ";
                cin >> litres;
                cout << "Distance (km): ";
                cin >> distance;
                double lPer100 = fuelEfficiencyLPer100Km(litres, distance); // Fill arguments
                cout << "Fuel efficiency: " << lPer100 << " L/100 km\n";
                break;
            }
            case 3: { // Option for km/h to m/s
                double speedKmh;
                cout << "Speed (km/h): ";
                cin >> speedKmh;
                double speedMs = speedInMetresPerSecond(speedKmh); // Fill in argument
                cout << "Speed: " << speedMs << " m/s\n";
                break;
            }
            case 4: { // Option for CO2 emissions
                double litres;
                cout << "Litres used: ";
                cin >> litres;
                double co2 = estimatedCO2Emissions(litres); // Fill in argument
                cout << "Estimated CO2 emissions: " << co2 << " kg\n";
                break;
            }
            case 5: // Option to quit
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while (choice !=5); // Fill in the quit value
    return 0;
}

