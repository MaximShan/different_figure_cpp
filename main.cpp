#include <iostream>
#include <string>
#include <windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "Right_angled_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrilateral.h"
#include "Rectangles.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "BadFigure.h"

using namespace std;

void print_info(Figure* fig) {
    fig->print_info();
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try {
        Triangle triangle("Треугольник", 10, 20, 30, 50, 60, 70);
        triangle.print_info();
    }
    catch (const BadFigure& e) {
        cerr << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        Right_angled_triangle right_triangle(10, 20, 30, 50, 60);
        right_triangle.print_info();
    }
    catch (const BadFigure& e) {
        cerr << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        Isosceles_triangle isosceles_triangle(10, 20, 10, 50, 60, 50);
        isosceles_triangle.print_info();
    }
    catch (const BadFigure& e) {
        cerr << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        Equilateral_triangle equilateral_triangle(30);
        equilateral_triangle.print_info();
    }
    catch (const BadFigure& e) {
        std::cerr << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
    }

    try {
        Quadrilateral quadrilateral("Четырехугольник", 10, 20, 30, 40, 50, 60, 70, 80);
        quadrilateral.print_info();
    }
    catch (const BadFigure& e) {
        cerr << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        Rectangles rectangles(10, 20);
        rectangles.print_info();
    }
    catch (const BadFigure& e) {
        cerr << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        Square square(20);
        square.print_info();
    }
    catch (const BadFigure& e) {
        cerr << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        Parallelogram parallelogram(20, 30, 30, 40);
        parallelogram.print_info();
    }
    catch (const BadFigure& e) {
        cerr << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    try {
        Rhombus rhombus(30, 30, 40);
        rhombus.print_info();
    }
    catch (const BadFigure& e) {
        cerr << "Ошибка создания фигуры. Причина: " << e.what() << endl;
    }

    

    return EXIT_SUCCESS;
}