#include <iostream>
#include <string>
using namespace std;

class String {
    string str;

public:
    String(string s) {
        str = s;
    }

    bool operator==(String s) {
        return str == s.str;
    }

    bool operator>(String s) {
        return str > s.str;
    }

    bool operator<(String s) {
        return str < s.str;
    }
};

int main() {
    String s1("Apple");
    String s2("Banana");

    if (s1 == s2)
        cout << "Strings are equal" << endl;

    if (s1 > s2)
        cout << "First string is greater" << endl;

    if (s1 < s2)
        cout << "First string is smaller" << endl;

    return 0;
}
