#pragma once
#include "Figure.h"

class Trapezoid : public Figure
{
	double m_value3;
public:
	void ShowArea() const;
	void SetDimension(const double value1, const double value2, const double value3);
};

