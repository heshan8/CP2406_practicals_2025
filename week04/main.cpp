#include <iostream>
#include <string>
#include <stdexcept>
#include <cctype>
using namespace std;

bool isInteger(const string& s) {
    if (s.empty()) return false;
    size_t i = (s[0] == '-' || s[0] == '+') ? 1 : 0;
    if (i == s.size()) return false;
    for (; i < s.size(); ++i) if (!isdigit(static_cast<unsigned
    char>(s[i]))) return false;
    return true;
}

int main() {
    cout << "Week 01 practical running" << endl;
    cout << "Enter age: ";
    string token; getline(cin, token);
    try {
        if (____(token) == false) {
            // Not a pure integer string -> could be decimal or
            contains letters
            throw ________("Age must be a whole number");
        }
        long age = ________(token);
        if (age < 0) throw ________("Age cannot be negative");
        if (age > ____) throw ________("Age out of range");
        cout << "Valid age: " << age << "\n";
    } catch (const ________& ex) {
        cerr << "Invalid argument: " << ex.what() << "\n";
    } catch (const ________& ex) {
        cerr << "Out of range: " << ex.what() << "\n";
    } catch (const exception& ex) {
        cerr << "Other error: " << ex.what() << "\n";
    }
    return 0;
}
