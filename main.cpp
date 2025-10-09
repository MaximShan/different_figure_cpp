#include <iostream>
#include <string>
#include <windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "Right_Angled_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Equilateral_Triangle.h"
#include "Quadrilateral.h"
#include "Rectangles.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

using namespace std;

void print_info(Figure* fig) {
    fig->print_info();
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle triangle("Треугольник",10, 20, 30, 50, 60, 70);
    Right_angled_triangle right_triangle(10, 20, 30, 50, 60);
    Isosceles_triangle isosceles_triangle(10, 20, 10, 50, 60, 50);
    Equilateral_triangle equilateral_triangle(30);

    Quadrilateral quadrilateral("Четырехугольник" ,10, 20, 30, 40, 50, 60, 70, 80);
    Rectangles rectangles(10, 20);
    Square square( 20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    Figure* figures[] = {
        &triangle,
        &right_triangle,
        &isosceles_triangle,
        &equilateral_triangle,
        &quadrilateral,
        &rectangles,
        &square,
        &parallelogram,
        &rhombus
    };

    for (Figure* fig : figures) {
        print_info(fig);
    }

    return EXIT_SUCCESS;
}