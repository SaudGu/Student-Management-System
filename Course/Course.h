#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Instructor.h"
#include "Lesson.h"
using namespace std;

class Course {
private:
    string code;
    string name;
    Instructor* instructor;  // Pointer used to assign instructor
    Lesson lesson;           // Composition: course has a lesson
public:
    Course();
    Course(string c, string n, Lesson l);
    string getCode() const;
    string getName() const;
    void assignInstructor(Instructor* i);
    void showCourse() const;
};

#endif
