#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <vector>
#include <stdexcept>
#include "Student.h"
#include "Course.h"
using namespace std;

class Registration {    // This class is used to register and drop courses for students
public:
    Registration();
    ~Registration();

    void registerCourse(Student& s, Course& c, vector<Course>& courses);
    void dropCourse(Student& s, Course& c);
};

#endif
