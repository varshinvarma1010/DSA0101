#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Complaint {
public:
    int id;
    string name;
    string type;
    string location;
    string description;
    string status;

    Complaint(int i, string n, string t, string l, string d) {
        id = i;
        name = n;
        type = t;
        location = l;
        description = d;
        status = "Pending";
    }

    void display() {
        cout << "\nComplaint ID : " << id;
        cout << "\nCitizen Name : " << name;
        cout << "\nComplaint Type : " << type;
        cout << "\nLocation : " << location;
        cout << "\nDescription : " << description;
        cout << "\nStatus : " << status << endl;
    }
};

vector<Complaint> complaints;
int nextID = 1;

void registerComplaint() {
    string name, type, location, description;

    cin.ignore();

    cout << "\nEnter Citizen Name: ";
    getline(cin, name);

    cout << "Enter Complaint Type: ";
    getline(cin, type);

    cout << "Enter Location: ";
    getline(cin, location);

    cout << "Enter Complaint Description: ";
    getline(cin, description);

    Complaint c(nextID++, name, type, location, description);
    complaints.push_back(c);

    cout << "\nComplaint registered successfully!";
    cout << "\nComplaint ID: " << c.id << endl;
}

void viewComplaints() {
    if (complaints.empty()) {
        cout << "\nNo complaints available.\n";
        return;
    }

    cout << "\n===== ALL COMPLAINTS =====\n";

    for (int i = 0; i < complaints.size(); i++) {
        complaints[i].display();
        cout << "--------------------------\n";
    }
}

void updateStatus() {
    int id;
    cout << "\nEnter Complaint ID: ";
    cin >> id;

    for (int i = 0; i < complaints.size(); i++) {
        if (complaints[i].id == id) {
            int choice;

            cout << "\n1. In Progress";
            cout << "\n2. Resolved";
            cout << "\nEnter new status: ";
            cin >> choice;

            if (choice == 1)
                complaints[i].status = "In Progress";
            else if (choice == 2)
                complaints[i].status = "Resolved";
            else {
                cout << "\nInvalid choice.";
                return;
            }

            cout << "\nComplaint status updated successfully!";
            return;
        }
    }

    cout << "\nComplaint ID not found.";
}

void searchComplaint() {
    int id;
    cout << "\nEnter Complaint ID: ";
    cin >> id;

    for (int i = 0; i < complaints.size(); i++) {
        if (complaints[i].id == id) {
            complaints[i].display();
            return;
        }
    }

    cout << "\nComplaint not found.";
}

int main() {
    int choice;

    do {
        cout << "\n\n==============================================";
        cout << "\n SMART CIVIC COMPLAINT AND PUBLIC SAFETY SYSTEM";
        cout << "\n==============================================";
        cout << "\n1. Register Complaint";
        cout << "\n2. View All Complaints";
        cout << "\n3. Update Complaint Status";
        cout << "\n4. Search Complaint";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerComplaint();
                break;

            case 2:
                viewComplaints();
                break;

            case 3:
                updateStatus();
                break;

            case 4:
                searchComplaint();
                break;

            case 5:
                cout << "\nThank you for using the system!";
                break;

            default:
                cout << "\nInvalid choice!";
        }

    } while (choice != 5);

    return 0;
}
