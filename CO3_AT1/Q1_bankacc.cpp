#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accno;
    string type;
    double balance;

public:
    BankAccount(string n, int a, string t, double b) {
        name = n;
        accno = a;
        type = t;
        balance = b;
    }

    void deposit(int no, string n, double amount) {
        if (no == accno && n == name) {
            balance += amount;
            cout << "Amount deposited successfully" << endl;
        }
        else {
            cout << "Invalid account details" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully" << endl;
        }
        else {
            cout << "Insufficient balance" << endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    ~BankAccount() {
        cout << "Account object destroyed" << endl;
    }
};

int main() {
    BankAccount b("Ravi", 101, "Savings", 10000);

    b.display();

    b.deposit(101, "Ravi", 5000);
    b.withdraw(2000);

    b.display();

    return 0;
}
