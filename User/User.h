#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
using namespace std;

class User {            // this is the base class for the common user information
protected:
    string id;
    string name;
public:
    User();
    User(string i, string n);
    virtual void showRole() const;
    string getId() const;
    string getName() const;
};

#endif
