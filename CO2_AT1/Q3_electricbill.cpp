#include <iostream>
using namespace std;

class ElectricBill {
    string n;
    int units;
    double bill;

public:
    void accept() {
        cin >> n >> units;
    }

    void calculate() {
        if (units <= 100)
            bill = units * 2.0;
        else if (units <= 300)
            bill = (100 * 2.0) + ((units - 100) * 3.0);
        else {
            bill = (100 * 2.0) + (200 * 3.0)
                 + ((units - 300) * 5.0);

            bill = bill + (bill * 2.5 / 100);
        }
    }

    void print() {
        cout << "Name of the customer: " << n << endl;
        cout << "Number of units consumed: " << units << endl;
        cout << "Bill amount: " << bill << endl;
    }
};

int main() {
    ElectricBill e;

    e.accept();
    e.calculate();
    e.print();

    return 0;
}
