#include "Parallelogram.h"
#include "BadFigure.h"

Parallelogram::Parallelogram(int a, int b, int A, int B)
try : Quadrilateral("��������������", a, b, a, b, A, B, A, B) {
    if (_a != _c || _b != _d || _A != _C || _B != _D) {
        throw BadFigure("�������������� ������ ����� ������� a = c, b = d � ���� A = C, B = D");
    }
}
catch (const BadFigure& e) {
    std::cerr << "������ �������� ���������������. �������: " << e.what() << std::endl;
    throw;
}