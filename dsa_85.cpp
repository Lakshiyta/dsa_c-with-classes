#include <iostream>
#include <string> 
using namespace std;
class BankAccount {
private:
    string accountHolderName;
    double balance;

public:
    BankAccount(const string& name, double initialBalance) {
        accountHolderName = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " <<"₹"<< amount<<"\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn " <<"₹"<< amount << "\n";
        } else {
            cout << "Insufficient balance or invalid withdrawal amount.\n";
        }
    }

    void displayAccountSummary() {
        cout << "Account Holder Name: " << accountHolderName << "\n";
        cout << "Balance: " <<"₹"<< balance;
    }
};

int main() {
    BankAccount myAccount("Vansh Sharma", 1000.50);
    myAccount.deposit(500);
    myAccount.withdraw(200);
    cout << "\nAccount Summary:\n";
    myAccount.displayAccountSummary();

    return 0;
}
