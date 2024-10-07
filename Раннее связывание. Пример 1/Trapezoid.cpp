#include "Trapezoid.h"
#include <iostream>
using namespace std;

void Trapezoid::ShowArea() const
{
	cout << "Area of trapezoid: " << (m_value1 + m_value2) * m_value3 * 0.5 << endl;
}

void Trapezoid::SetDimension(const double value1, const double value2, const double value3)
{
	Figure::SetDimension(value1, value2);
	m_value3 = value3;
}
