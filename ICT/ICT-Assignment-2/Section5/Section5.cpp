#include <iostream>
using namespace std;

class BankAccount {
    private:
        string accountNumber;
        double balance;
    public:
        BankAccount (string accNumber) {
            accountNumber = accNumber;
            balance = 0;
        }
        void deposit (double amount) {
            cout << "amount being deposited is: " << amount <<endl;
            balance += amount;
            cout << "new balance is: " << balance << endl;
        }
        void withdraw (double amount) {
            if (amount > balance) {
                cout << "Insufficient balance" << endl;
            } else {
                cout << "amount being withdrawn is: " << amount << endl;
                balance -= amount;
                cout << "new balance is: " << balance << endl;
            }
        }
        void checkBalance () {
            cout << "current balance is: " << balance << endl;
        }
};

int main () {
    string accNum;
    cout << "Enter account number: ";   
    cin >> accNum;
    BankAccount acc1(accNum);

    int choice;
    do {
        cout << "Menu:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter your choice: ";
        cin >> choice;
        double Amount;
        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> Amount;
                acc1.deposit(Amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> Amount;
                acc1.withdraw(Amount);
                break;
            case 3:
                acc1.checkBalance();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}