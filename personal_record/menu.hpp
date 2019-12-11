#pragma once
#include "menu_item.hpp"
#include <list>
#include "person.hpp"
#include "employee.hpp"
#include "subcontractor.hpp"

using namespace std;

class Menu
{
public:
    static bool execute();
    static void cleanup();
private:
    static MenuItem menu_s[];
    static int selection_s;

    static bool newEmployee();
    static bool newSubcontractor();
    static bool listMonthlyCost();

    static list<Person*> storage_s;
};
