#include "Lesson.h"

Lesson::Lesson() {
    week= 1;
    title= "Introduction";
}

Lesson::Lesson(int w, string t) {
    week= w;
    title= t;
}

void Lesson::showLesson() const {
    cout << "Week " << week << ": " << title << endl;
}
