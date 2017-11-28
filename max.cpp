// File: max.cpp
// Created by Garrett Van Dyke on 11/21/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include "Person.h"
#include "BankAccount.h"
using namespace std;

// Constants, Classes, Structures
template <class T>
T max(T &t1, T & t2)
{
    return t1 < t2 ? t2 : t1;
}
// Prototypes


// Main Program Program
int main()
{
    cout << "Max of 33 and 44 is " << max(33, 44) << endl;
    string s1 = "Hello";
    string s2 = "World";
    cout << "The max of " << s1 << " and " << s2 << " is " << max(s1, s2) << endl;

    Person p1("Waldo", "Weber", 123);
    Person p2("Charlie", "Brown", 456);
    cout << "The max of " << p1.GetName() << " and " << p2.GetName() << " is " << max(p1, p2).GetName() << endl;

    BankAccount b1;
    b1.setBalanceInPennies(55);
    BankAccount b2;
    b2.setBalanceInPennies(11);
    cout << "The max of " << b1.getBalanceInPennies() << " and " << b2.getBalanceInPennies() << " is "
         << max(b1, b2).getBalanceInPennies() << endl;


    return 0;
}

// Function Definitions