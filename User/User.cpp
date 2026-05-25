#include "User.h"

User::User() {
    name = "Unknown";
    address = "Unknown";
    email = "Unknown";
    phone = "Unknown";
}

User::User(string n, string a, string e, string p) {
    name = n;
    address = a;
    email = e;
    phone = p;
}

User::~User() {
}

void User::showRole() const {
    cout << "User" << endl;
}

string User::getName() const {
    return name;
}

void User::showInfo() const {
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
}
