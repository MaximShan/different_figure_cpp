#include "Quadrilateral.h"



Quadrilateral:: Quadrilateral(string n, int a, int b, int c, int d, int A, int B, int C, int D)
        : Figure(n), _a(a), _b(b), _c(c), _d(d), _A(A), _B(B), _C(C), _D(D) {
    }

void Quadrilateral::print_info(){
        cout << name << ":" << endl;
        cout << "Стороны: a=" << _a << " b=" << _b << " c=" << _c << " d=" << _d << endl;
        cout << "Углы: A=" << _A << " B=" << _B << " C=" << _C << " D=" << _D << endl << endl;
    }
