#pragma once
#include <string>

using namespace std;

class Employee: public Person
{
public:
    int weeklyFee() {return weeklyFee_m;}
    Employee(string f, string l, int w): Person(f,l,'e'),weeklyFee_m(w) {}
    int calculateCost(int workDays)
    {
        return workDays * weeklyFee()/ 5;
    }
private:
    int weeklyFee_m;
};
