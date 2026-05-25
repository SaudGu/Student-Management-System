#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
using namespace std;

class User {		 // this is the base class for the common user information
protected:
    string name;
    string address;
    string email;
    string phone;

public:
    User();
    User(string n, string a, string e, string p);
    virtual ~User();

    virtual void showRole() const;

    string getName() const;
    void showInfo() const;
};

#endif
