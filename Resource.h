//
// Created by GRees on 11/21/2017.
//

#ifndef MOD_8_P2_RESOURCE_H
#define MOD_8_P2_RESOURCE_H

#include <iostream>
using namespace std;

class Resource
{
private:
    string name;
public:
    Resource(string n);
    ~Resource();

    string GetName() const;
};

#endif //MOD_8_P2_RESOURCE_H
