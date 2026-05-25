#include "Admin.h"

Admin::Admin() : User() {
    adminID = "0";
}

Admin::Admin(string id, string n, string a, string e, string p)
    : User(n, a, e, p) {
    adminID = id;
}

Admin::~Admin() {
}

void Admin::showRole() const {
    cout << "Admin" << endl;
}

void Admin::addCourse(vector<Course>& courses, Course c) {
    courses.push_back(c);
    cout << "Course added" << endl;
}

void Admin::deleteCourse(vector<Course>& courses, string code) {
    for (int i = 0; i < courses.size(); i++) {
        if (courses[i].getCode() == code) {
            courses.erase(courses.begin() + i);
            cout << "Course deleted" << endl;
            return;
        }
    }

    cout << "Course not found" << endl;
}

void Admin::addInstructor(vector<Instructor>& instructors, Instructor i) {
    instructors.push_back(i);
    cout << "Instructor added" << endl;
}

void Admin::deleteInstructor(vector<Instructor>& instructors, string id) {
    for (int i = 0; i < instructors.size(); i++) {
        if (instructors[i].getInstructorID() == id) {
            instructors.erase(instructors.begin() + i);
            cout << "Instructor deleted" << endl;
            return;
        }
    }

    cout << "Instructor not found" << endl;
}
