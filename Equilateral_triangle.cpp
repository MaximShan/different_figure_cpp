#include "Equilateral_triangle.h"
#include "BadFigure.h"
#include <iostream>



    Equilateral_triangle::Equilateral_triangle(int a)
       try : Triangle("�������������� �����������", a, a, a, 60, 60, 60) {
        if (a != _b || _b != _c || _A != 60 || _B != 60 || _C != 60) {
            throw BadFigure("�������������� ����������� ������ ����� ������ ������� � ���� �� 60");
        }
    }
    catch (const BadFigure& e) {
        std::cerr << "������ �������� ������. �������: " << e.what() << std::endl;
        throw;
    }

