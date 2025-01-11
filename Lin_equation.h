#pragma once
#include "Base.h"

class Lin_equation : protected Base
{
public:
	Lin_equation(double a_S, double b_S) noexcept : Base(a_S, b_S) {};

	pair<double, double> roots_equation() override;
};