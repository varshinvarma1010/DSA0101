#include <iostream>
#include <iomanip>
using namespace std;

class Item {
protected:
    int item_no;
    string name;
    float price;

public:
    void accept() {
        cin >> item_no >> name >> price;
    }
};

class DiscountedItem : public Item {
    float discount_percent;

public:
    void getData() {
        accept();
        cin >> discount_percent;
    }

    float finalPrice() {
        return price - (price * discount_percent / 100);
    }

    void display() {
        cout << left << setw(10) << item_no
             << setw(15) << name
             << setw(10) << price
             << setw(10) << discount_percent
             << setw(10) << finalPrice() << endl;
    }
};

int main() {
    int n;
    float total = 0;

    cin >> n;

    DiscountedItem item[20];

    for (int i = 0; i < n; i++) {
        item[i].getData();
        total += item[i].finalPrice();
    }

    cout << "Item No   Name           Price     Discount  Final Price"
         << endl;

    for (int i = 0; i < n; i++)
        item[i].display();

    cout << "Total Amount: "
         << fixed << setprecision(2) << total << endl;

    return 0;
}
