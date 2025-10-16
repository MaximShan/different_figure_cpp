#include <iostream>
#include "Triangle.h"
#include "BadFigure.h"



    Triangle::Triangle(string n, int a, int b, int c, int A, int B, int C)
        try: Figure(n), _a(a), _b(b), _c(c), _A(A), _B(B), _C(C) {
        if (_A + _B + _C != 180) {
            throw BadFigure("Сумма углов треугольника должна быть равна 180");
        }
    }
    catch (const BadFigure& e) {
        cerr << "Ошибка создания фигуры. Причина: " << e.what() << endl;
        throw; 
    }

    void Triangle::print_info(){
        cout << name << " (" << endl;
        cout << "Стороны: a=" << _a << " b=" << _b << " c=" << _c << endl;
        cout << "Углы: A=" << _A << " B=" << _B << " C=" << _C << ") создан" << endl << endl;
    }
