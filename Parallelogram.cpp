#include "Parallelogram.h"
#include "BadFigure.h"

Parallelogram::Parallelogram(int a, int b, int A, int B)
try : Quadrilateral("Параллелограмм", a, b, a, b, A, B, A, B) {
    if (_a != _c || _b != _d || _A != _C || _B != _D) {
        throw BadFigure("Параллелограмм должен иметь стороны a = c, b = d и углы A = C, B = D");
    }
}
catch (const BadFigure& e) {
    std::cerr << "Ошибка создания параллелограмма. Причина: " << e.what() << std::endl;
    throw;
}