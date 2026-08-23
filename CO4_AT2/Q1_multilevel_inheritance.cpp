#include <iostream>
using namespace std;

class Student {
protected:
    int m1, m2, m3;

public:
    void getMarks() {
        cin >> m1 >> m2 >> m3;
    }
};

class Total : public Student {
protected:
    int total;

public:
    void calculateTotal() {
        total = m1 + m2 + m3;
    }
};

class Percentage : public Total {
    float percentage;

public:
    void calculatePercentage() {
        percentage = total / 3.0;
    }

    void display() {
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Percentage p;

    p.getMarks();
    p.calculateTotal();
    p.calculatePercentage();
    p.display();

    return 0;
}
