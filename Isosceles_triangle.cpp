#include "Isosceles_triangle.h"
#include <iostream>
#include "Right_angled_triangle.h"
#include "BadFigure.h"


Isosceles_triangle::Isosceles_triangle(int a, int b, int c, int A, int B, int C)
      : Triangle("�������������� �����������", a, b, c, A, B, C) {
    if (a != c || A != C) {
        throw BadFigure("� ��������������� ������������ ������ ���� ����� ������� a � c, � ����� ���� A � C");
    }
    }

