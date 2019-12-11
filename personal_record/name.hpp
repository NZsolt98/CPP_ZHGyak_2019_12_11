#pragma once
#include <string>

using namespace std;

class Name
{
public:
    Name(string fn, string ln): firstName_m(fn),lastName_m(ln) {}
    string firstName(){ return firstName_m;}
    string lastName() { return lastName_m;}
    bool operator == (Name n)
    {
        return (this->firstName_m== n.firstName()) && (this->lastName_m==n.lastName());
    }
private:
    string firstName_m;
    string lastName_m;
};

ostream& operator<< (ostream& s,Name n);
