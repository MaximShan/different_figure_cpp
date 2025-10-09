#pragma once
#include <string>
#include "Figure.h"

class Triangle : public Figure {
protected:
    int _a, _b, _c;
    int _A, _B, _C;
public:
    Triangle(string n, int a, int b, int c, int A, int B, int C);

    void print_info() override;
};
