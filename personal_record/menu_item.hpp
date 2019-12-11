#pragma once
#include <string>

using namespace std;
typedef bool (*MenuFunc)();

class MenuItem
{
public:
    MenuItem(string text, MenuFunc mf):text_m(text),menuFunc_m(mf) {}
    string text() {return text_m;}
    bool invokeMenuFunc() {return menuFunc_m();}
private:
    string text_m;
    MenuFunc menuFunc_m;
};
