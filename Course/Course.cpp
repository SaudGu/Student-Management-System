#include "Course.h"

Course::Course() {
    code = "None";
    name = "None";
    instructor = nullptr;
}

Course::Course(string c, string n, Lesson l) {
    code= c;
    name = n;
    lesson =l;
    instructor= nullptr;
}

string Course::getCode() const {
    return code;
}

string Course::getName() const {
    return name;
}

void Course::assignInstructor(Instructor* i) {
    instructor =i;
}

void Course::showCourse() const {
    cout << "Course Code : " << code << endl;
    cout << "Course Name:" << name << endl;
    if (instructor != nullptr) {
        cout << "Instructor: " << instructor->getName() << endl;
    } else {
        cout <<"Instructor: Not assigned yet" << endl;
    }
    lesson.showLesson();
}
