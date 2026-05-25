#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"
#include "Course.h"
#include "Instructor.h"
#include <vector>
using namespace std;

class Admin : public User {       // This class is for the admin who can add and delete courses and instructors
private:
    string adminID;

public:
    Admin();
    Admin(string id, string n, string a, string e, string p);
    ~Admin();

    void showRole() const override;

    void addCourse(vector<Course>& courses, Course c);
    void deleteCourse(vector<Course>& courses, string code);

    void addInstructor(vector<Instructor>& instructors, Instructor i);
    void deleteInstructor(vector<Instructor>& instructors, string id);
};

#endif
