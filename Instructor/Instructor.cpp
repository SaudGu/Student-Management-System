#include "Instructor.h"

Instructor::Instructor() : User() {
}

Instructor::Instructor(string i, string n) : User(i, n) {
}

void Instructor::showRole() const {
    cout << "Instructor" << endl;
}

void Instructor::showInstructor() const {
    cout << "Instructor ID: " << id << endl;
    cout << "Instructor Name: " << name << endl;
}
