#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;


class Lesson {                    // This class shows one lesson and one week
private:
    int week;
    string title;

public:
    Lesson() {
        week= 1;
        title= "Introduction";
    }

    Lesson(int w, string t) {
        week= w;
        title= t;
    }
};