#include "Square.h"
#include "BadFigure.h"

Square::Square(int a)
 : Quadrilateral(" вадрат", a, a, a, a, 90, 90, 90, 90) {
    if (_a != _b || _b != _c || _c != _d ||
        _A != 90 || _B != 90 || _C != 90 || _D != 90) {
        throw BadFigure(" вадрат должен иметь все стороны равны и углы по 90");
    }
}
