#include "User.h"

User::User() {
    id = "0";
    name = "Unknown";
}

User::User(string i, string n) {
    id= i;
    name =n;
}

void User::showRole() const {
        cout << "General User" << endl;
}

string User::getId() const {
    return id;
}

string User::getName() const {
    return name;
}
