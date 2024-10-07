#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "Trapezoid.h"
#include "Rhombus.h"

int main()
{
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    circle.SetDimension(10.0);
    circle.ShowArea();
    
    rectangle.SetDimension(5.5, 10.0);
    rectangle.ShowArea();

    triangle.SetDimension(5.5, 10.0);
    triangle.ShowArea();

    Square square;
    Trapezoid trapezoid;
    Rhombus rhombus;

    square.SetDimension(8.0);
    square.ShowArea();

    trapezoid.SetDimension(6.0, 8.5, 12.2);
    trapezoid.ShowArea();

    rhombus.SetDimension(12.5, 4.0);
    rhombus.ShowArea();

    return 0;
}