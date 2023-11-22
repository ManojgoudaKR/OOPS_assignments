#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    double marks[6];

public:
    Student(const string& studentName, int studentRollNumber) : name(studentName), rollNumber(studentRollNumber) {}

    void SetMarks(double m1, double m2, double m3, double m4, double m5, double m6) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
        marks[5] = m6;
    }

    double CalculateOverallPercentage() const {
        double sum = 0.0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        return (sum / 6.0);
    }

    bool MatchNameAndRoll(int givenRoll) const {
        return (givenRoll == rollNumber);
    }

    const string& GetName() const {
        return name;
    }

    void DisplayMarksDetails() const {
        cout << "Student Name: " << GetName() << endl;
        cout << "Roll Number: " << rollNumber << endl;
        for (int i = 0; i < 6; i++) {
            cout << "Subject " << i + 1 << " Marks: " << marks[i] << endl;
        }
    }
};

int main() {
    vector<Student> students;
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int rollNumber;
        double m1, m2, m3, m4, m5, m6;

        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter subject marks (6 subjects): ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5 >> m6;

        Student student(name, rollNumber);
        student.SetMarks(m1, m2, m3, m4, m5, m6);
        students.push_back(student);
    }

    string searchName;
    int searchRoll;

    cout << "Enter student name for information: ";
    cin.ignore();
    getline(cin, searchName);

    cout << "Enter roll number for information: ";
    cin >> searchRoll;

    bool found = false;

    for (const Student& student : students) {
        if (student.MatchNameAndRoll(searchRoll) && student.GetName() == searchName) {
            student.DisplayMarksDetails();
            found = true;
            break;
        }
    }

    if (!found) {
        for (const Student& student : students) {
            if (student.GetName() == searchName) {
                cout << "Student Name: " << student.GetName() << endl;
                cout << "Overall Percentage: " << student.CalculateOverallPercentage() << "%" << endl;
                break;
            }
        }
    }

    return 0;
}
