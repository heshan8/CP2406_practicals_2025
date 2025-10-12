#include <iostream>
using namespace std;

// --- Function Implementation ---
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

//----Exercise 2----
// converts speed from kilometers per hour to meters per second using the conversion factor 1000/3600
double speedInMetersPerSecond(double speedKmh) {
    // 1 km/h = 1000/3600 m/s = 0.27778 m/s
    return speedKmh * (1000/3600.0);
    // Returns speed in metres per second
}

// calculates CO2 emissions by multiplying litres of petrol by the standard emission factor of 2.31 kg
double estimatedCO2Emissions(double  litres) {
    // Use 2.31 kg CO2 per litre of petrol (standard emission factor)
    return litres * 2.31;
    //Returns estimated C02 emissions
}