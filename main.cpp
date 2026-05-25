#include <iostream>
#include <vector>
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
#include "Registration.h"
#include "Admin.h"
using namespace std;

int main() {
    vector<Student> students;
    vector<Instructor> instructors;
    vector<Course> courses;

    Student s1("S1", "Ali", "Muscat", "ali@gmail.com", "91111111", 3.1);
    Instructor i1("I1", "Dr Ahmed", "Muscat", "ahmed@gmail.com", "93333333");
    Admin admin("A1", "Admin", "Muscat", "admin@gmail.com", "90000000");

    students.push_back(s1);
    instructors.push_back(i1);

    Course c1("CS101", "OOP", "Sunday", 9, 11, 2);
    Course c2("MATH101", "Math", "Sunday", 11, 13, 2);
    Course c3("AI101", "AI", "Sunday", 10, 12, 2);

    c1.assignInstructor(&instructors[0]);
    c2.assignInstructor(&instructors[0]);
    c3.assignInstructor(&instructors[0]);

    courses.push_back(c1);
    courses.push_back(c2);
    courses.push_back(c3);

    Registration reg;

    try {
        reg.registerCourse(students[0], courses[0], courses);
        reg.registerCourse(students[0], courses[1], courses);
        reg.registerCourse(students[0], courses[2], courses);
    }
    catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    try {
        reg.dropCourse(students[0], courses[0]);
    }
    catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    admin.addCourse(courses, Course("ENG101", "English", "Monday", 8, 10, 3));

    students[0].showStudent();

    cout << "\nCourses:" << endl;
    for (int i = 0; i < courses.size(); i++) {
        courses[i].showCourse();
    }

    cout << "\nOverride test:" << endl;
    User* u = &admin;
    u->showRole();

    return 0;
}
