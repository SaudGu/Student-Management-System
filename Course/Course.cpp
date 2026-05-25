#include "Course.h"

Course::Course() {
    code ="None";
    name ="None";
    day ="None";
    startTime = 0;
    endTime = 0;
    capacity = 0;
    registered = 0;
    instructor = NULL;
}

Course::Course(string c, string n, string d, int s, int e, int cap) {
    code= c;
    name = n;
    day = d;
    startTime = s;
    endTime = e;
    capacity = cap;
    registered = 0;    
    instructor= NULL;
}

Course::~Course() {
}

string Course::getCode() const {
    return code;
}

string Course::getDay() const {
    return day;
}

int Course::getStartTime() const {
    return startTime;
}

int Course::getEndTime() const {
    return endTime;
}

void Course::assignInstructor(Instructor* i) {
    instructor = i;
}

bool Course::isFull() const {
    return registered >= capacity;
}

bool Course::conflict(Course c) const {
    if (day == c.getDay() && startTime < c.getEndTime() && endTime > c.getStartTime()) {
        return true;
    }

    return false;
}

void Course::addStudent() {
    registered++;
}

void Course::removeStudent() {
    if (registered > 0) {
        registered--;
    }
}

bool Course::operator==(Course c) {
    return code == c.getCode();
}

void Course::showCourse() const {
    cout<< "\nCourse Code: " << code << endl;
    cout<< "Course Name: " << name << endl;
    cout<< "Day: " << day << endl;
    cout<< "Time: " << startTime << " - " << endTime << endl;
    cout<< "Capacity: " << registered << "/" << capacity << endl;

    if (instructor != NULL) {
        cout << "Instructor: " << instructor->getName() << endl;
    }
    else {
        cout << "Instructor: Not assigned" << endl;
    }
}

