#include "name.hpp"
#include <iostream>

using namespace std;

ostream& operator<< (ostream& s,Name n)
{
    s<<n.firstName()<<" "<<n.lastName();
    return s;
}
