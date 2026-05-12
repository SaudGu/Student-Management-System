#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"

class Student : public User {       // This is a derived class from User and it's called Student.
private:
    double grade;
public:
    Student();
    Student(string i, string n);
    void setGrade(double g);
    double getGrade() const;
    void showRole() const override;
    void showStudent() const;
};

#endif
