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

int main() {
    cout << "Week 02 practical running\n"; /* to show that week 2 practical is running */
    cout << "-----------------------------\n";
    // Exercise #1 - Integer pointer and Indirection
    integerPointer();


    return 0;
}