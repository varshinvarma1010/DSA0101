#include <iostream>
using namespace std;

class ShowRoom {
    string name;
    long mobno;
    double cost, dis, amount;

public:
    void input() {
        cin >> name >> mobno >> cost;
    }

    void calculate() {
        if (cost <= 10000)
            dis = cost * 5 / 100;
        else if (cost <= 20000)
            dis = cost * 10 / 100;
        else if (cost <= 35000)
            dis = cost * 15 / 100;
        else
            dis = cost * 20 / 100;

        amount = cost - dis;
    }

    void display() {
        cout << "Customer Name: " << name << endl;
        cout << "Mobile Number: " << mobno << endl;
        cout << "Amount to be paid: " << amount << endl;
    }
};

int main() {
    ShowRoom s;
    s.input();
    s.calculate();
    s.display();

    return 0;
}
