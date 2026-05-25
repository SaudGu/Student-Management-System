#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "User.h"

class Instructor : public User {        //This is a derived class from User and it's called Instructor
private:
    string instructorID;

public:
    Instructor();
    Instructor(string id, string n, string a, string e, string p);
    ~Instructor();

    void showRole() const;
    string getInstructorID() const;
    void showInstructor() const;
};

#endif
