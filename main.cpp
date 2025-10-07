#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Figure {
protected:
    string name;
public:
    Figure(string n) : name(n) {}
    virtual void print_info() {
        cout << "Фигура: " << name << endl;
    }
    virtual ~Figure() = default;
};

class Triangle : public Figure {
protected:
    int _a, _b, _c;
    int _A, _B, _C;
public:
    Triangle(string n, int a, int b, int c, int A, int B, int C)
        : Figure(n), _a(a), _b(b), _c(c), _A(A), _B(B), _C(C) {
    }

    void print_info() override {
        cout << name << ":" << endl;
        cout << "Стороны: a=" << _a << " b=" << _b << " c=" << _c << endl;
        cout << "Углы: A=" << _A << " B=" << _B << " C=" << _C << endl << endl;
    }
};

class Right_angled_triangle : public Triangle {
public:
    Right_angled_triangle(string n, int a, int b, int c, int A, int B, int C)
        : Triangle(n, a, b, c, A, B, C) {
    }
};

class Isosceles_triangle : public Triangle {
public:
    Isosceles_triangle(string n, int a, int b, int c, int A, int B, int C)
        : Triangle(n, a, b, c, A, B, C) {
    }
};

class Equilateral_triangle : public Triangle {
public:
    Equilateral_triangle(string n, int a, int b, int c, int A, int B, int C)
        : Triangle(n, a, b, c, A, B, C) {
    }
};

class Quadrilateral : public Figure {
protected:
    int _a, _b, _c, _d;
    int _A, _B, _C, _D;
public:
    Quadrilateral(string n, int a, int b, int c, int d, int A, int B, int C, int D)
        : Figure(n), _a(a), _b(b), _c(c), _d(d), _A(A), _B(B), _C(C), _D(D) {
    }

    virtual void print_info() override {
        cout << name << ":" << endl;
        cout << "Стороны: a=" << _a << " b=" << _b << " c=" << _c << " d=" << _d << endl;
        cout << "Углы: A=" << _A << " B=" << _B << " C=" << _C << " D=" << _D << endl << endl;
    }
};

class Rectangles : public Quadrilateral {
public:
    Rectangles(string n, int a, int b, int c, int d, int A, int B, int C, int D)
        : Quadrilateral(n, a, b, c, d, A, B, C, D) {
    }
};

class Square : public Quadrilateral {
public:
    Square(string n, int a, int b, int c, int d, int A, int B, int C, int D)
        : Quadrilateral(n, a, b, c, d, A, B, C, D) {
    }
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(string n, int a, int b, int c, int d, int A, int B, int C, int D)
        : Quadrilateral(n, a, b, c, d, A, B, C, D) {
    }
};

class Rhombus : public Quadrilateral {
public:
    Rhombus(string n, int a, int b, int c, int d, int A, int B, int C, int D)
        : Quadrilateral(n, a, b, c, d, A, B, C, D) {
    }
};


void print_info(Figure* fig) {
    fig->print_info();
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle triangle("Треугольник", 10, 20, 30, 50, 60, 70);
    Right_angled_triangle right_triangle("Прямоугольный треугольник", 10, 20, 30, 50, 60, 90);
    Isosceles_triangle isosceles_triangle("Равнобедренный треугольник", 10, 20, 10, 50, 60, 50);
    Equilateral_triangle equilateral_triangle("Равносторонний треугольник", 30, 30, 30, 60, 60, 60);

    Quadrilateral quadrilateral("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80);
    Rectangles rectangles("Прямоугольник", 10, 20, 10, 20, 90, 90, 90, 90);
    Square square("Квадрат", 20, 20, 20, 20, 90, 90, 90, 90);
    Parallelogram parallelogram("Параллелограмм", 20, 30, 20, 30, 30, 40, 30, 40);
    Rhombus rhombus("Ромб", 30, 30, 30, 30, 30, 40, 30, 40);

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