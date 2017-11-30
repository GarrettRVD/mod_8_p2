//
// Created by GRees on 11/21/2017.
//

#include "Person.h"
#include "Resource.h"

Person::Person(string fn, string ln, int an)
{
    firstName = fn;
    lastName = ln;
    arNumber = an;
    //pResource = NULL;             // prior to C++11
    //Don't need for smart pointers
    //pResource = nullptr;            // C++11
    //cout << "Constructing " << firstName << endl;
}

int Person::getArNumber()
{
    return arNumber;
}

void Person::setArNumber(int arNumber)
{
    Person::arNumber = arNumber;
}

string Person::GetName()
{
    return firstName + " " + lastName;
}

/*!
 * Destructor. Clean memory
 */
Person::~Person()
{
    //delete[] pResource;   // IF pResource points to an array
    //delete pResource;
    //cout << "Deleting " << firstName << endl;
}

/*!
 * Compare Person < Person
 * @param p : reference to Person
 * @return True or False
 */
bool Person::operator<(Person &p)
{
    return arNumber < p.arNumber;
}

/*!
 * Compare Person < Integer
 * @param n : integer
 * @return True or False
 */
bool Person::operator<(int n)
{
    return arNumber < n;
}

/*!
 * Compare integer < Person
 * @param n : integer
 * @param p : reference to Person
 * @return True or False
 */
bool operator<(int n, const Person &p)
{
    return n < p.arNumber;
}

void Person::AddResource()
{
    //Resource r("Hello");              // Only lives in this block
    //pResource = &r;
    //delete pResource;                 // No deletes for smart pointers
    pResource.reset();
    //pResource = new Resource("Resource for " + GetName());     // will survive
    pResource = make_shared<Resource>("Resource for " + GetName());
}

const string &Person::getFirstName()
{
    return firstName;
}

void Person::setFirstName(const string &firstName)
{
    Person::firstName = firstName;
}

string Person::GetResourceName()
{
    return pResource->GetName();
}

ostream &operator<<(ostream &os, const Person &person)
{
    os << "firstName: " << person.firstName << " lastName: " << person.lastName << " arNumber: " << person.arNumber;
    return os;
}

Person::Person()
{}

/*!
 * Copy Constructor.
 * @param p : Person Object to be copied
 */
//Person::Person(const Person &p)
//{
//    firstName = p.firstName;
//    lastName = p.lastName;
//    arNumber = p.arNumber;
    // Do not copy the reference. You need to create your own memory. Your own copy
//    pResource = new Resource(p.pResource->GetName());
//}

//Person &Person::operator=(const Person &p)
//{
//    firstName = p.firstName;
//    lastName = p.lastName;
//    arNumber = p.arNumber;
//
//    delete pResource;
//    pResource = new Resource(p.pResource->GetName());
//
//    return *this;       // return yourself
//}


