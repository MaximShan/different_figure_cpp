#include <string>
#include "Figure.h"
#include <iostream>
using namespace std;



Figure::Figure(string n) : name(n) {};
void Figure::print_info() {
        cout << name << endl;
    }
    

