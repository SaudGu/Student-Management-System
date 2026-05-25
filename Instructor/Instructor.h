#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "User.h"

class Instructor : public User {
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
