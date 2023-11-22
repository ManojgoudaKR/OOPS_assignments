#include <iostream>

using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() : balance(0) {}

    void Deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void Withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    double CheckBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;
    double amount;
    int choice;

    cout << "Welcome to the Bank Account Management System" << endl;

    while (true) {
        cout << "Account Balance: " << account.CheckBalance() << endl;
        cout << "Select an option:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the deposit amount: ";
                cin >> amount;
                account.Deposit(amount);
                break;
            case 2:
                cout << "Enter the withdrawal amount: ";
                cin >> amount;
                account.Withdraw(amount);
                break;
            case 3:
                cout << "Thank you for using the Bank Account Management System." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
