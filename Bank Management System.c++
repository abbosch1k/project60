#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Account {
public:
    int id;
    string name;
    double balance;
    
    void deposit(double amount) { balance += amount; }
    bool withdraw(double amount) {
        if(amount > balance) return false;
        balance -= amount;
        return true;
    }
    void display() const {
        cout << "ID: " << id << " | Name: " << name << " | Balance: $" << balance << endl;
    }
};

int main() {
    vector<Account> accounts;
    int choice;
    do {
        cout << "\n=== Bank Management System ===\n";
        cout << "1. Create Account\n2. Deposit\n3. Withdraw\n4. Show All\n5. Exit\n";
        cin >> choice;
        
        if(choice == 1) {
            Account a;
            a.id = accounts.size() + 1;
            cout << "Enter name: ";
            cin >> a.name;
            a.balance = 0;
            accounts.push_back(a);
        } else if(choice == 2) {
            int id; double amt;
            cout << "Account ID: "; cin >> id;
            cout << "Amount: "; cin >> amt;
            if(id > 0 && id <= accounts.size()) accounts[id-1].deposit(amt);
        } // Add more options...
    } while(choice != 5);
    return 0;
}
