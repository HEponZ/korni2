#pragma once
#include "Base.h"

class Quadr_equation : protected Base
{
private:
	double a;
	double b;
	double c;
public:
	Quadr_equation(double a_S, double b_S, double c_S) : a{ a_S }, b{ b_S }, c{ c_S } {}

	vector<double> roots_equation();
};