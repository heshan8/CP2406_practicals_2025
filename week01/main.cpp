/* Week 1 exercises */
#include <iostream>
using namespace std;

/* Exercise #2 - type casting and if statements */
void conversionExample() {
    float inputNumber;
    cout << "Enter a floating-point number: ";
    cin >> inputNumber;
    int intNumber = static_cast<int>(inputNumber);
    cout << "Converted to integer: " << intNumber << endl;
    if (intNumber > 0) {
        cout << "The number is positive." << endl;
    } else if (intNumber < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
}

int main() {
    /* Exercise #1 - a program to print welcome message */
    cout << "Week 01 running\n"; /* to show that week 1 practical is running */
    cout << "-----------------\n";
    cout << "Welcome to cp2406 2025" << endl;
    conversionExample();
    return 0;
}
