#pragma once
#include "Figure.h"
#include <iostream>


class Quadrilateral : public Figure {
protected:
    int _a, _b, _c, _d;
    int _A, _B, _C, _D;
public:
    Quadrilateral(string n, int a, int b, int c, int d, int A, int B, int C, int D);

    virtual void print_info() override;
};
