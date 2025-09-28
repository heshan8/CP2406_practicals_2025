/* Week 1 exercises */
#include <iostream>
using namespace std;

/* Exercise #2 - type casting and if statements
 * Ask the user for a decimal number and convert it to an integer
 */
void conversionExample() {
    float inputNumber;
    cout << "Enter a floating-point number: ";
    cin >> inputNumber;
    int intNumber = static_cast<int>(inputNumber);
    cout << "Converted to integer: " << intNumber << endl;
    // Using if/else to check if the input is positive, negative or zero
    if (intNumber > 0) {
        cout << "The number is positive." << endl;
    } else if (intNumber < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
}

/* Exercise #3 - salary and switch statement
* Ask the user for their salary and determine their position
 */
void findPosition() {
    float salary;
    cout << "Enter your salary: ";
    cin >> salary;
    int category;
    if (salary < 60000) { //Engineer
        category = 1;
    } else if (salary > 60000 && salary < 80000) { //Senior engineer
        /*The Only way to say between two numbers is to
         *combine two comparisons with an operator, which in this case is &&*/
        category = 2;
    } else if (salary > 80000) { //Manger
        category = 3;
    } else {
        category = 0;
    }
    switch (category) { // Salary ranges are turned into a category number
        case 1:
            cout << "Position type: Engineer" << endl; break;
        case 2:
            cout << "Position type: Senior Engineer" << endl; break;
        case 3:
            cout << "Position type: Manager" << endl; break;
        default: // Default handles all the cases that aren’t listed
            cout << "Invalid position type." << endl;
    }
}

/* Exercise #4 - structure for a car
* Ask the user about a car and store it in a struct variable.
* Then, display the stored details neatly.
 */
struct Car {
    string colour;
    string make;
    int year;
};
void getCar() {
    Car carRec;
    cout << "Please enter the colour of your car: " << endl;
    getline(cin, carRec.colour);

    cout << "Please enter the make/brand of your car: " << endl;
    getline(cin, carRec.make);

    cout << "Please enter the year of your car: " << endl;
    cin >> carRec.year;


}


int main() {
    /* Exercise #1 - a program to print welcome message */
    cout << "Week 01 running\n"; /* to show that week 1 practical is running */
    cout << "-----------------\n";
    cout << "Welcome to cp2406 2025" << endl;
    //conversionExample();
    //findPosition();

    return 0;
}
