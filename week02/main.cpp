#include <iostream>
using namespace std;

// Exercise #1 - Integer pointer and Indirection
void integerPointer() {
    int age = 27; // Replace 21 with your actual age
    int* agePtr = &age;
    cout << "Address of age: " << agePtr << endl;
    cout << "Value of age using indirection: " << *agePtr << endl;
}

int main() {
    cout << "Week 02 practical running\n"; /* to show that week 2 practical is running */
    cout << "-----------------------------\n";
    // Exercise #1 - Integer pointer and Indirection
    integerPointer();


    return 0;
}