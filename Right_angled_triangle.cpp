#include <iostream>
#include "Right_angled_triangle.h"
#include "BadFigure.h"

Right_angled_triangle::Right_angled_triangle(int a, int b, int c, int A, int B)
: Triangle("Прямоугольный треугольник", a, b, c, A, B, 90) {
    if (_C != 90) { 
        throw BadFigure("Прямоугольный треугольник должен иметь угол 90");
    }
}
