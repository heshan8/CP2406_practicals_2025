#include <iostream>
using namespace std;

/* Exercise #1 - Integer pointer and Indirection.
* Create an integer pointer to store your age.
* Print the address of the integer in memory
and the value using the Indirection operator.
*/
void integerPointer() {
    int age = 27; // Replace 21 with your actual age
    int* agePtr = &age;
    cout << "Address of age: " << agePtr << endl; //Prints the memory address of the integer variable
    cout << "Value of age using indirection: " << *agePtr << endl; // Prints the actual value of the address (27)
}

/*Exersice #2 - Array of heights
* Store the heights of 10 students in the class. Print the height of the 6th student.*/
void exercise2() {
    float heights[10]; // creates an array that stores 10 float values
    cout << "Enter the heights of 10 students:\n";
    for (int i = 0; i < 10; ++i) { // loop runs 10 times
        cout << "Student " << (i + 1) << ": ";
        cin >> heights[i];
    }
    cout << "The height of the 6th student is: " << heights[5] << endl;
    // Arrays start counting at 0 therefore 5 accesses the 6th position
}

int main() {
    cout << "Week 02 practical running\n"; /* to show that week 2 practical is running */
    cout << "-----------------------------\n";
    //integerPointer();
    exercise2();


    return 0;
}
