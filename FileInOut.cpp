// File: FileInOut.cpp
// Created by Garrett Van Dyke on 11/30/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include <fstream>  // File Stream library
#include <vector>
using namespace std;
// Constants, Classes, Structures
// Prototypes
// Main Program
int main()
{
    ifstream inFS;          // input file stream
    ofstream outFS;         // output file stream
    int fileNum1 = 0;
    int fileNum2 = 0;

    vector<int> nums;

    // Try to open the file
    cout << "Opening file myfile.txt." << endl;
    inFS.open("../myfile.txt");
    //inFS.open("C:\\Users\\GRees\\Desktop\\cs1410\\mod8_p2\\myfile.txt")
    if(!inFS.is_open())
    {
        cout << "Could not open file myfile.txt" << endl;
        return 1;
    }
    // Now use inFS
    cout << "Reading two integers" << endl;
//    inFS >> fileNum1;
//    inFS >> fileNum2;
//    cout << "Num1 " << fileNum1 << endl;
//    cout << "Num2 " << fileNum2 << endl;
    // By hand
//    inFS >> fileNum1;
//    nums.push_back(fileNum1);
//    inFS >> fileNum1;
//    nums.push_back(fileNum1);
//    inFS >> fileNum1;
//    nums.push_back(fileNum1);

    // Using a loop
    while(!inFS.eof())
    {
        inFS >> fileNum1;
        // Check previous stream operation had no problems
        if(inFS.good())
        {
            cout << "num: " << fileNum1 << endl;
        }
        else
        {
            cout << "bad record" << endl;
        }
        nums.push_back(fileNum1);
    }

    cout << "Opening file myoutfile.txt." << endl;
    outFS.open("../myoutfile.txt");
    if(!outFS.is_open())
    {
        cout << "Could not open file myoutfile.txt" << endl;
        return 1;
    }

    // Display items
    for(auto item:nums)
    {
        cout << item << endl;       // write to screen
        outFS << item << endl;      // write to file
    }

    inFS.close();
    outFS.close();

    return 0;
}

// Function Definitions