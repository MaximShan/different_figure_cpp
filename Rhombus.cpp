#include "Rhombus.h"
#include "BadFigure.h"

Rhombus::Rhombus(int a, int A, int B)
: Quadrilateral("Ромб", a, a, a, a, A, B, A, B) {
    if (_a != _b || _b != _c || _c != _d ||
        _A != _C || _B != _D) {
        throw BadFigure("Ромб должен иметь все стороны равны и углы A = C, B = D");
    }
}
