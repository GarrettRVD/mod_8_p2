// File: Accumulator.cpp
// Created by Garrett Van Dyke on 11/21/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include "Accum.h"
#include "Person.h"
using namespace std;

// Main Program
int main()
{
    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    cout << integers.GetTotal() << endl;

    Accum<string> mystring("");
    mystring += "hello";
    mystring += " world";
    cout << mystring.GetTotal() << endl;

    //integers += "Weber";      // Types must match
    //mystring += 4;

    // Template Specialization
    //Person start("", "", 0);          // Not needed if you have Template Specialization
    //Accum<Person> people(start);
    Accum<Person> people(0);
    Person p1("Waldo", "Weber", 123);
    Person p2("Ogden", "Rocks", 789);

    people += p1;
    people += p2;
    //cout << people.GetTotal().getArNumber() << endl;
    cout << people.GetTotal() << endl;

    return 0;
}

// Function Definitions