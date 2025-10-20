#include "Quadrilateral.h"
#include "BadFigure.h"



Quadrilateral::Quadrilateral(string n, int a, int b, int c, int d,
    int A, int B, int C, int D)
    : Figure(n), _a(a), _b(b), _c(c), _d(d),
    _A(A), _B(B), _C(C), _D(D) {
    if (_A + _B + _C + _D != 360) {
        throw BadFigure("Сумма углов четырёхугольника должна быть равна 360");
    }
}


void Quadrilateral::print_info(){
        cout << name << " (";
        cout << "Стороны: a=" << _a << " b=" << _b << " c=" << _c << " d=" << _d;
        cout << "Углы: A=" << _A << " B=" << _B << " C=" << _C << " D=" << _D << ") coздан " <<  endl << endl;
    }
