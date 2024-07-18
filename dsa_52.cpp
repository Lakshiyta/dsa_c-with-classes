//create a list and add first enter integer, then string. check whether it store in list or not 
//by running this program , the integer and string can't store both in same list. 
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Read a list of integers
    cout << "Enter a list of integer numbers: ";
    int num;
    while (cin >> num) {
        // Process each integer here (e.g., find max, min)
    }

    // Read a list of strings
    cin.clear(); // Clear any error flags
    cin.ignore(); // Ignore the newline character left in the buffer
    cout << "Enter a list of strings: ";
    string input;
    getline(cin, input);

    // Process each string here

    return 0;
}
