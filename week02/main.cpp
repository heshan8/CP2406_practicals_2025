#include <iostream>
#include <fstream>
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
    // Arrays start counting at 0 therefore 5th accesses the 6th position
    cout << "The height of the 6th student is: " << heights[5] << endl;

}
/*Exercise #3 - Dynamic array with New.
*  Same as Exercise 2, but using the new operator to let the user specify the number of
students.
 */
void exercise3() {
    /*this could be improved by checking if numStudents >= 6
     * before allocating the array and reading heights*/
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    float* heights = new float[numStudents];
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << (i + 1) << ": ";
        cin >> heights[i];
    }
    if (numStudents >= 6) {
        cout << "The height of the 6th student is: " << heights[5] << endl;
    } else {
        cout << "There are less than 6 students." << endl;
    }
    delete[] heights; // Free the memory
    // Adding [] after delete will tell the compiler to delete the array and not a single variable
}

/*Exercise #4 - Using command-line arguments.
* Use command-line arguments to input the first and last name of a person and merge them
into a single string.
 */
void exercise4 (int argc, char* argv[]) { // argc = argument count, argv = array of strings/pointers to characters.
    if (argc < 3) { // Need at least 3 arguments (program name + first name + last name)
        cout << "Usage: " << argv[0] << " <FirstName> <LastName>" <<
        endl;
        return ;
    }
    string firstName = argv[1]; // argv[0] is the program name, [1] is the first name and [2] is the last name
    string lastName = argv[2];
    string fullName = firstName + " " + lastName;
    cout << "Full name: " << fullName << endl;
}

/*Exercise #5 - File I/O
 *  Read the contents of a text file and print it to another text file.
 */
void exercise5 () {
    string inputFileName, outputFileName; // declaring both filenames as strings.
    cout << "Enter Input file name: " <<endl; // Getting the filenames from user input.
    cin >> inputFileName;
    cout << "Enter Output file name: " <<endl;
    cin >> outputFileName;

    // Opening the input file
    ifstream inputFile;
    inputFile.open(inputFileName);
    if (!inputFile) { // Checking to see if the file failed to open.
        cout << "Input file could not be opened" << endl;
        return ; // exit progrma
    }
    // Opening the output file
    ofstream outputFile;
    outputFile.open(outputFileName);
    if (!inputFile) { // Error checking
        cout << "Output file could not be opened" << endl;
        return ;
    }

    // The loop reads line by line from the input file and writes each line to the output file
    string line;
    while (getline(inputFile, line)) {
        outputFile << line << endl;
    }
    // Closing both files
    inputFile.close();
    outputFile.close();

}


//Needed to find the correct .exe path for running in commandline
//Which was PS C:\Users\hesha\CLionProjects\CP2406_practicals_2025\cmake-build-debug\week02>
int main(int argc, char* argv[]) { // passing in the arguments for Exercise 4
    cout << "Week 02 practical running\n"; /* to show that week 2 practical is running */
    cout << "-----------------------------\n";
    //integerPointer();
    //exercise2();
    //exercise3();
    //exercise4(argc, argv);


    return 0;
}
