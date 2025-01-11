#pragma once
#include "Base.h"

class Quadr_equation : public Base
{
private:
	double c;
public:
	Quadr_equation(double a_S, double b_S, double c_S) noexcept : Base(a_S, b_S), c{ c_S } {}

	double get_c()const noexcept { return c; }
	void set_c(double c_S) noexcept { c = c_S; }

	pair<double, double> roots_equation() override;
};