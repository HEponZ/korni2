#pragma once
#include "Base.h"

class Lin_equation : protected Base
{
private:
	double a;
	double b;
public:
	Lin_equation(double a_S, double b_S) : a{ a_S }, b{ b_S } {};

	vector<double> roots_equation();
};