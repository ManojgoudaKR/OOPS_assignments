#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double salary;
    int leavesTaken;

public:
    Employee(const string& empName, double empSalary, int empLeaves) : name(empName), salary(empSalary), leavesTaken(empLeaves) {}

    double CalculateDiwaliBonus() {
        if (leavesTaken < 5) {
            return 0.10 * salary; // 10% bonus for less than 5 leaves
        } else {
            return 0.08 * salary; // 8% bonus for 5 or more leaves
        }
    }

    void DisplayInfo() {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Leaves Taken: " << leavesTaken << endl;
        cout << "Diwali Bonus: " << CalculateDiwaliBonus() << endl;
    }
};

int main() {
    string name;
    double salary;
    int leavesTaken;

    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Salary: ";
    cin >> salary;
    cout << "Enter Leaves Taken: ";
    cin >> leavesTaken;

    Employee employee(name, salary, leavesTaken);

    cout << "\nEmployee Details and Diwali Bonus:" << endl;
    employee.DisplayInfo();

    return 0;
}
