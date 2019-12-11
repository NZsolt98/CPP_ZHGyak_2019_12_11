#pragma once

#include <string>
#include "name.hpp"

using namespace std;
class Person
{
public:
    Person(string fn, string ln,char rl): name_m(fn,ln),relation_m(rl) {}
    Name name() {return name_m;}
    bool operator == (Name n)
    {
        return name_m=n;
    }
    virtual int calculateCost(int daysInWork)=0;
private:
    Name name_m;
protected:
    char relation_m;
};
