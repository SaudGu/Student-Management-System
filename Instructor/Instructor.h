#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "User.h"

class Instructor : public User {        //This is a derived class from User and it's called Instructor.
public:
    Instructor();
    Instructor(string i, string n);
    void showRole() const override;
    void showInstructor() const;
};

#endif
