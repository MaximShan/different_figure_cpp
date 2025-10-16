#include <iostream>
#include "Right_angled_triangle.h"
#include "BadFigure.h"

Right_angled_triangle::Right_angled_triangle(int a, int b, int c, int A, int B)
try : Triangle("������������� �����������", a, b, c, A, B, 90) {
    if (_C != 90) { 
        throw BadFigure("������������� ����������� ������ ����� ���� 90");
    }
}
catch (const BadFigure& e) {
    std::cerr << "������ �������� ������. �������: " << e.what() << std::endl;
    throw;
}