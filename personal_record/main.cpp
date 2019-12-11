#include <iostream>
#include "menu.hpp"
using namespace std;

int main()
{
    while(Menu::execute());
    Menu::cleanup();
    return 0;
}
