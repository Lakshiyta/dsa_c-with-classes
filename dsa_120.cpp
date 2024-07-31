//create the file and store the user generated username and password in file.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string username;
    string password;

    cout << "Enter username: ";
    getline(cin, username); 

    cout << "Enter password: ";
    getline(cin, password); 

    ofstream outFile("user_data.txt");

    if (outFile.is_open()) {
        outFile << "Username: " << username << endl;
        outFile << "Password: " << password << endl;
        outFile.close();

        cout << "Username and password saved to file." << endl;
    } else {
        cerr << "Unable to open file." << endl;
    }

    return 0;
}