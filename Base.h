#pragma once
#include <iostream>
#include <cmath>
#include <exception>
#include <vector>

using namespace std;

class Base
{
protected:
	double a;
	double b;
public:
	Base(double a_S, double b_S) noexcept : a{ a_S }, b{ b_S } {}

	double get_a()const noexcept { return a; }
	double get_b()const noexcept { return b; }
	void set_a(double a_S) noexcept { a = a_S; }
	void set_b(double b_S) noexcept { b = b_S; }
	//Возвращаемое значение такое потому что в случае с квадратным уравнением
	//мы можем получить 2 ответа
	virtual pair<double, double> roots_equation() { return { 0,0 }; }
};