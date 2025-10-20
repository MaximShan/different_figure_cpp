#include <iostream>
#include "Triangle.h"
#include "BadFigure.h"



Triangle::Triangle(string n, int a, int b, int c, int A, int B, int C)
: Figure(n), _a(a), _b(b), _c(c), _A(A), _B(B), _C(C) {
    if (_A + _B + _C != 180) {
        throw BadFigure("����� ����� ������������ ������ ���� ����� 180");
    }
};
    

    void Triangle::print_info(){
        cout << name << " (";
        cout << "�������: a=" << _a << " b=" << _b << " c=" << _c;
        cout << "����: A=" << _A << " B=" << _B << " C=" << _C << ") ������" << endl << endl;
    }
