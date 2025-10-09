#include <iostream>
#include "Triangle.h"



    Triangle::Triangle(string n, int a, int b, int c, int A, int B, int C)
        : Figure(n), _a(a), _b(b), _c(c), _A(A), _B(B), _C(C) {
    }

    void Triangle::print_info(){
        cout << name << ":" << endl;
        cout << "�������: a=" << _a << " b=" << _b << " c=" << _c << endl;
        cout << "����: A=" << _A << " B=" << _B << " C=" << _C << endl << endl;
    }
