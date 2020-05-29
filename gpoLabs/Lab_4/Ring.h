#pragma once
#include "../Lab_3/Point.h"
#define _USE_MATH_DEFINES
#include <cmath>

class Ring
{
private:
	double _innerRadius;
	double _outerRadius;
	Point* _centre;

	void AssertOnPositiveValue(double value);

public:
	Ring(double innerRadius, double outerRadius, Point* centre);

	void SetInnerOuterRadius(double innerRadius, double outerRadius);
	void SetCentre(Point* centre);

	double GetInnerRadius();
	double GetOuterRadius();
	Point* GetCentre();

	double GetArea();
};