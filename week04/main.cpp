#include <iostream>
#include <string>
#include <stdexcept>
#include <cctype>
using namespace std;

// Checks if the string contains only digits
// Also checks for + or - with the number
bool isInteger(const string& s) {
    if (s.empty()) return false; //If the string is empty, it's not a valid integer, return false
    size_t i = (s[0] == '-' || s[0] == '+') ? 1 : 0;
    //Check if the first character is a + or - sign
    //If yes, start checking from index 1 (skipping the +-)
    //If not, start checking from index 0
    if (i == s.size()) return false; // If the string is only an operator(-+), returns false
    for (; i < s.size(); ++i)
        if (!isdigit(static_cast<unsigned char>(s[i]))) // For each character, check if it's a digit, if not return false
            return false;
    return true; // If all checks are passed, the string is a valid integer returning true.
}

void exercise3 () {
    cout << "Enter age: ";
    string token; getline(cin, token);
    try {
        if (isInteger(token) == false) { // Using isInteger to check if the string is digits, returns true or false
            // Not a pure integer string -> could be decimal or contains letters
            throw invalid_argument("Age must be a whole number");
        }
        long age = stol(token);
        if (age < 0) throw invalid_argument("Age cannot be negative"); // Because it's a negative number
        if (age > 130) throw out_of_range("Age out of range"); // Because it's out of range (>130)
        cout << "Valid age: " << age << "\n";
        // Catches need to match the thrown exception types
    } catch (const invalid_argument& ex) {
        cerr << "Invalid argument: " << ex.what() << "\n";
    } catch (const out_of_range& ex) {
        cerr << "Out of range: " << ex.what() << "\n";
    } catch (const exception& ex) {
        cerr << "Other error: " << ex.what() << "\n";
    }
}

void exercise4() {
    cout << "Age Validator & Logger\n";
    // Exercise 4 TBD
}

int main() {
    cout << "Week 04 practical running" << endl;

    return 0;
}
