#include <iostream>
using namespace std;

class BookFair {
    string Bname;
    double price;

public:
    void Input() {
        cin >> Bname >> price;
    }

    void calculate() {
        if (price <= 1000)
            price = price - (price * 2 / 100);
        else if (price <= 3000)
            price = price - (price * 10 / 100);
        else
            price = price - (price * 15 / 100);
    }

    void display() {
        cout << "Book Name: " << Bname << endl;
        cout << "Price after discount: " << price << endl;
    }
};

int main() {
    BookFair b;

    b.Input();
    b.calculate();
    b.display();

    return 0;
}
