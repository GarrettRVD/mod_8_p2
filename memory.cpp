// File: memory.cpp
// Created by Garrett Van Dyke on 11/16/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include "Person.h"
using namespace std;

// Main Program
int main()
{
    Person Waldo("Waldo", "Weber", 123);
    Waldo.AddResource();
    Waldo.setFirstName("WaldoJr");
    Waldo.AddResource();

    Person WaldoSr = Waldo;

    Waldo = WaldoSr;

    string s1 = Waldo.GetName();
    cout << "\ns1: " << s1 << endl;

    return 0;
}

// Function Definitions