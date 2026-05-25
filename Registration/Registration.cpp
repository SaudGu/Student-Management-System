#include "Registration.h"

Registration::Registration() {
}

Registration::~Registration() {
}

void Registration::registerCourse(Student& s, Course& c, vector<Course>& courses) {
    if (c.isFull()) {
        throw runtime_error("Course is full");
    }

    if (s.hasCourse(c.getCode())) {
        throw runtime_error("Student already registered");
    }

    vector<string> studentCourses = s.getCourses();

    for (int i = 0; i < studentCourses.size(); i++) {
        for (int j = 0; j < courses.size(); j++) {
            if (studentCourses[i] == courses[j].getCode()) {
                if (c.conflict(courses[j])) {
                    throw runtime_error("Time conflict");
                }
            }
        }
    }

    s.addCourse(c.getCode());
    c.addStudent();

    cout << "Registered: " << c.getCode() << endl;
}

void Registration::dropCourse(Student& s, Course& c) {
    s.removeCourse(c.getCode());
    c.removeStudent();

    cout << "Dropped: " << c.getCode() << endl;
}
