#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include "Instructor.h"
using namespace std;

class Course { // This class is used to store course information like code, name, time, capacity, and instructor.
private:
    string code;
    string name;
    string day;
    int startTime;
    int endTime; 
    int capacity;
    int registered;
    Instructor* instructor;  // Pointer used to assign instructor

public:
    Course();
    Course(string c, string n, string d, int s, int e, int cap);
    ~Course();
    
    string getCode() const;
    string getDay() const;
    int getStartTime() const;
    int getEndTime() const;

    void assignInstructor(Instructor* i);

    bool isFull() const;
    bool conflict(Course c) const;

    void addStudent();
    void removeStudent();

    bool operator==(Course c);

    void showCourse() const;
    
};

#endif
