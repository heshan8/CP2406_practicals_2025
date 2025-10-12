#include <iostream>
#include <iomanip>
#include <vector>

#include "car_utils.h"
using namespace std;
// Program to calculate average speed and fuel efficiency
/* Commented out for exercise 5
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
*/
/*Commented out for exercise 5
int main() {
    int choice;
    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        // We could add input validation to the prompts to improve this program
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
*/

//Exercise #5 - Trip Analyzer
// Define the Trip struct
struct Trip {
    double distanceKm;
    double timeHours;
    double litres;
};
int main () {
    // Ask the user how many trips they need analyzed
    int numTrips;
    cout << "How many trips do you want to analyze? ";
    cin >> numTrips;

    // Using a vector to store trip data
    vector<Trip> trips;

    // Get thr trip data from user and add them to the vector
    for (int i = 0; i < numTrips; i++) {
        Trip trip; // Creating an empty struct
        cout << "\nTrip " << (i + 1) << ":\n"; //Using (i + 1) to start trip counter from 1 instead of 0.
        cout << "Distance (Km): ";
        cin >> trip.distanceKm;
        cout << "Time (Hours): ";
        cin >> trip.timeHours;
        cout << "Fuel Used (Litres): ";
        cin >> trip.litres;

        trips.push_back(trip); // The values are appended to the end of the existing items in the vector.
    }


    // Create variables to hold totals (start at 0)
    double totalDistance = 0;
    double totalTime = 0;
    double totalLitres = 0;

    // Adding the value of each trip to the total
    for (const Trip& trip : trips) { //This loop goes through each Trip in the trips vector one by one
        totalDistance = totalDistance + trip.distanceKm;
        totalTime = totalTime + trip.timeHours;
        totalLitres = totalLitres + trip.litres;
    }

    // Calculating and displaying the final results
    cout << "\n----- TRIP SUMMARY -----\n";
    cout << fixed << setprecision(2); // Formatting the output to 2 decimal places
    cout << "Total distance: " << totalDistance << " km\n";
    cout << "Total time: " << totalTime << " hours\n";
    cout << "Total litres: " << totalLitres << " L\n";
    cout << "--------------------------------------\n"; // Line to separate trip summary and analysis

    // Calling the functions and doing the calculations while passing in the prameters
    double avgSpeed = calculateSpeed(totalDistance, totalTime);
    double avgSpeedMs = speedInMetresPerSecond(avgSpeed);
    double fuelEff = fuelEfficiencyLPer100Km(totalLitres, totalDistance);
    double co2 = estimatedCO2Emissions(totalLitres);

    //Shows the output neatly
    cout << "Average speed: " << avgSpeed << " km/h\n";
    cout << "Average speed in m/s: " << avgSpeedMs << " m/s\n";
    cout << "Fuel efficiency: " << fuelEff << " L/100 km\n";
    cout << "Estimated CO2 usage: " << co2 << " kg\n";


}
