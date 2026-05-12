#include "Student.h"

Student::Student() : User() {
    grade = 0;
}

Student::Student(string i, string n) : User(i, n) {
    grade = 0;
}

void Student::setGrade(double g) {
    if (g >= 0 && g <= 100) {
        grade = g;
    }
    else {
        cout << "Invalid grade" << endl;
    }
}

double Student::getGrade() const {
    return grade;
}

void Student::showRole() const {
    cout << "Student" << endl;
}

void Student::showStudent() const {
    cout << "Student ID: " << id << endl;
    cout << "Student Name: " << name << endl;
    cout << "Grade: " << grade << endl;
}
