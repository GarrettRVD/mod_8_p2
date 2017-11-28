//
// Created by GRees on 11/21/2017.
//

#ifndef MOD_8_P2_PERSON_H
#define MOD_8_P2_PERSON_H
#include <memory>
#include "Resource.h"
using namespace std;

class Person
{
private:
    string firstName;
    string lastName;
    int arNumber;
    //Resource *pResource;
    shared_ptr<Resource> pResource;
public:
    Person(string fn, string ln, int an);
    //Person(const Person &p);                  // copy constructor
    ~Person();

    string GetName();                     // return first + last name

    // Setter and Getter for the arNumber
    int getArNumber();

    void setArNumber(int arNumber);

    const string &getFirstName() ;

    void setFirstName(const string &firstName);

    // Operator overload for < and >
    bool operator < (Person &p);
    bool operator < (int n);
    friend bool operator < (int n, const Person &p);
    // These should work with: 1) int < Person, 2) Person < int, 3) int > Person, 4) Person > int

    void AddResource();

    //Person&operator = (const Person &p);

    string GetResourceName();

};
bool operator < (int i, const Person &p);


#endif //MOD_8_P2_PERSON_H
