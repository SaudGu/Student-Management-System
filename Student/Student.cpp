#include "Student.h"
#include <stdexcept>

Student::Student() : User() {
    studentID = "0";
    Cgpa = 0;
}

Student::Student(string id, string n, string a, string e, string p, double c)
    : User(n, a, e, p) {
    studentID = id;
    Cgpa = c;
}

Student::~Student() {
}

void Student::showRole() const {
    cout << "Student" << endl;
}

void Student::addCourse(string code) {
    courses.push_back(code);
}

void Student::removeCourse(string code) {
    for (int i = 0; i < courses.size(); i++) {
        if (courses[i] == code) {
            courses.erase(courses.begin() + i);
            return;
        }
    }

    throw runtime_error("Course not found for student");
}

bool Student::hasCourse(string code) const {
    for (int i = 0; i < courses.size(); i++) {
        if (courses[i] == code) {
            return true;
        }
    }

    return false;
}

vector<string> Student::getCourses() const {
    return courses;
}

void Student::showStudent() const {
    cout << "\nStudent ID: " << studentID << endl;
    showInfo();
    cout << "CGPA: " << Cgpa << endl;

    cout << "Courses: ";
    for (int i = 0; i < courses.size(); i++) {
        cout << courses[i] << " ";
    }
    cout << endl;
}
