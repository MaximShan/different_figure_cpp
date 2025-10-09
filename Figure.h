#pragma once
#include <string>
using namespace std;
class Figure {
protected:
    string name;
public:
    Figure(string n);
    virtual void print_info(); 
    virtual ~Figure() = default;
};

