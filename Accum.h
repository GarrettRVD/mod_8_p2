//
// Created by GRees on 11/21/2017.
//

#ifndef MOD_8_P2_ACCUM_H
#define MOD_8_P2_ACCUM_H

#include "Person.h"

template <class T>
class Accum
{
private:
    T total;
public:
    Accum(T start) : total(start){};
    T operator += (const T& t)
    {
        return total = total + t;
    }
    T GetTotal()
    {
        return total;
    }
};
// Template Specialization
template<>
class Accum <Person>
{
private:
    int total;
public:
    Accum(int start): total(start){};

    int operator += (Person& t)
    {
        return total = total + t.getArNumber();
    }
    int GetTotal() {return total;}
};

#endif //MOD_8_P2_ACCUM_H
