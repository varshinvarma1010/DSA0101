#include <iostream>
using namespace std;

class worker {
protected:
    int code;
    string name;
    float salary;

public:
    void getWorker() {
        cin >> code >> name >> salary;
    }
};

class officer {
protected:
    float DA, HRA;

public:
    void getOfficer() {
        cin >> DA >> HRA;
    }
};

class manager : public worker, public officer {
    float TA, gross_sal;

public:
    void calculate() {
        TA = salary * 10 / 100;
        gross_sal = salary + DA + HRA + TA;
    }

    void display() {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "TA: " << TA << endl;
        cout << "Gross Salary: " << gross_sal << endl;
    }
};

int main() {
    manager m;

    m.getWorker();
    m.getOfficer();
    m.calculate();
    m.display();

    return 0;
}
