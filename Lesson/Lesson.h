#ifndef LESSON_H
#define LESSON_H

#include <iostream>
#include <string>
using namespace std;

class Lesson {                    // This class shows one lesson and one week
private:
    int week;
    string title;
public:
    Lesson();
    Lesson(int w, string t);
    void showLesson() const;
};

#endif
