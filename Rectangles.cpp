#include "Rectangles.h"
#include "BadFigure.h"

Rectangles::Rectangles(int a, int b)
try : Quadrilateral("Прямоугольник", a, b, a, b, 90, 90, 90, 90) {
    if (_a != _c || _b != _d ||
        _A != 90 || _B != 90 || _C != 90 || _D != 90) {
        throw BadFigure("Прямоугольник должен иметь попарно равные стороны и углы по 90");
    }
}
catch (const BadFigure& e) {
    std::cerr << "Ошибка создания прямоугольника. Причина: " << e.what() << std::endl;
    throw;
}