#include "menu.hpp"
#include <iostream>

using namespace std;

MenuItem Menu::menu_s[] =
{
    {"New employee", newEmployee},
    {"New subcontractor", newSubcontractor},
    {"Calculate monthly cost", listMonthlyCost}
    {"Exit", exitFromApp}
};

int Menu::selection_s;

list<Person*> Menu::storage_s;
void Menu::cleanup() {for (Person p:storage_s) {delete p;}
void Menu::execute()
{
    cout << endl;
    int idx = 0;
    for(MenuItem m:menu_s){
        cout<< ++idx << ": " << m.text()<<endl;
    }
    cin >> selection_s;
    return menu_s[selection_s - 1].invokeMenuFunc();
}
bool newEmployee()
{
    cout<<"Please enter new employee name with salary: ";
    string fn,ln;
    int s;
    cin >> fn >> ln >> s;
    Employee* employee=new Employee(fn,kn,s);
    storage_s.push_back(employee);
}
