#include <iostream>
using namespace std;

class Person {
protected:
    string name, address;
    long phone_no;

public:
    void getPerson() {
        cin >> name >> address >> phone_no;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phone_no << endl;
    }
};

class Employee : public Person {
    int eno;
    string ename;

public:
    void accept() {
        cin >> eno >> ename;
        getPerson();
    }

    void display() {
        cout << "\nEmployee Details" << endl;
        cout << "Employee No: " << eno << endl;
        cout << "Employee Name: " << ename << endl;
        displayPerson();
    }
};

class Manager : public Person {
    string designation, department_name;
    double basic_salary;

public:
    void accept() {
        cin >> designation >> department_name >> basic_salary;
        getPerson();
    }

    void display() {
        cout << "\nManager Details" << endl;
        cout << "Designation: " << designation << endl;
        cout << "Department: " << department_name << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        displayPerson();
    }

    double getSalary() {
        return basic_salary;
    }
};

int main() {
    int n;
    cin >> n;

    Employee e[10];
    Manager m[10];

    for (int i = 0; i < n; i++)
        e[i].accept();

    for (int i = 0; i < n; i++)
        m[i].accept();

    int choice;

    do {
        cout << "\n1. Display Employees";
        cout << "\n2. Display Managers";
        cout << "\n3. Highest Paid Manager";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            for (int i = 0; i < n; i++)
                e[i].display();
            break;

        case 2:
            for (int i = 0; i < n; i++)
                m[i].display();
            break;

        case 3: {
            int pos = 0;

            for (int i = 1; i < n; i++) {
                if (m[i].getSalary() > m[pos].getSalary())
                    pos = i;
            }

            cout << "\nHighest Paid Manager:";
            m[pos].display();
            break;
        }

        case 4:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
        }

    } while (choice != 4);

    return 0;
}
