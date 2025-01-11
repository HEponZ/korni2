#pragma once
#include "Base.h"

class Lin_equation : protected Base
{
public:
	Lin_equation() = default;
	//Конструктор с параметрами для инициализации уравнения при создании
	Lin_equation(double a_S, double b_S) noexcept : Base(a_S, b_S) {};

	//Переопределенный метод для подсчитывания корней
	pair<double, double> roots_equation() override;
};