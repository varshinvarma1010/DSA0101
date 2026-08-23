#include <iostream>
using namespace std;

class books {
    string author, title, publisher;
    float price;
    int stock;

    void updatePrice(float p) {
        price = p;
    }

public:
    books(string a, string t, float p, string pub, int s) {
        author = a;
        title = t;
        price = p;
        publisher = pub;
        stock = s;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Price: " << price << endl;
        cout << "Stock: " << stock << endl;
    }

    void search(string a, string t, int copies) {
        if (author == a && title == t) {
            cout << "Book Available" << endl;
            display();

            if (copies <= stock) {
                cout << "Total Cost: "
                     << price * copies << endl;

                stock -= copies;

                cout << "Transaction Successful" << endl;
                cout << "Remaining Stock: "
                     << stock << endl;
            }
            else {
                cout << "Required copies not in stock"
                     << endl;
            }
        }
        else {
            cout << "Book Not Available" << endl;
        }
    }
};

int main() {
    books b("James", "CPlusPlus", 500, "ABC", 10);

    string author, title;
    int copies;

    cin >> author >> title >> copies;

    b.search(author, title, copies);

    return 0;
}
