#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"
#include <vector>

class Student : public User {   // This is a derived class from User and it's called Student.
private:
    string studentID;
    double Cgpa;
    vector<string> courses;

public:
    Student();
    Student(string id, string n, string a, string e, string p, double c);
    ~Student();

    void showRole() const;

    void addCourse(string code);
    void removeCourse(string code);
    bool hasCourse(string code) const;
    vector<string> getCourses() const;

    void showStudent() const;
};

#endif
