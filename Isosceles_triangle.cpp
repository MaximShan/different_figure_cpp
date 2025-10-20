#include "Isosceles_triangle.h"
#include <iostream>
#include "Right_angled_triangle.h"
#include "BadFigure.h"


Isosceles_triangle::Isosceles_triangle(int a, int b, int c, int A, int B, int C)
      : Triangle("Равнобедренный треугольник", a, b, c, A, B, C) {
    if (a != c || A != C) {
        throw BadFigure("У равнобедренного треугольника должны быть равны стороны a и c, а также углы A и C");
    }
    }

