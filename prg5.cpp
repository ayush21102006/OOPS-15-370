#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    void createAccount() {
        cin >> accountNumber;
        cin >> balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn " << amount << endl;
        } else {
            cout << "Insufficient Balance" << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;

    account.createAccount();
    account.deposit(5000);
    account.withdraw(2000);
    account.display();

    return 0;
}
