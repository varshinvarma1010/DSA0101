#include <iostream>
using namespace std;

class RailwayTicket {
    string name;
    string coach;
    long mobno;
    int amt;
    int totalamt;

public:
    void accept() {
        cin >> name >> coach >> mobno >> amt;
    }

    void update() {
        if (coach == "First_AC")
            totalamt = amt + 700;
        else if (coach == "Second_AC")
            totalamt = amt + 500;
        else if (coach == "Third_AC")
            totalamt = amt + 250;
        else
            totalamt = amt;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Coach: " << coach << endl;
        cout << "Mobile Number: " << mobno << endl;
        cout << "Total Amount: " << totalamt << endl;
    }
};

int main() {
    RailwayTicket r;
    r.accept();
    r.update();
    r.display();

    return 0;
}
