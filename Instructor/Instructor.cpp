#include "Instructor.h"

Instructor::Instructor() : User() {
    instructorID = "0";
}

Instructor::Instructor(string id, string n, string a, string e, string p)
    : User(n, a, e, p) {
    instructorID = id;
}

Instructor::~Instructor() {
}

void Instructor::showRole() const {
    cout << "Instructor" << endl;
}

string Instructor::getInstructorID() const {
    return instructorID;
}

void Instructor::showInstructor() const {
    cout << "\nInstructor ID: " << instructorID << endl;
    showInfo();
}
