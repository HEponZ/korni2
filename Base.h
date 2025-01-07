#pragma once
#include <iostream>
#include <cmath>
#include <exception>
#include <vector>

using namespace std;

class Base
{
public:
	//Возвращаемое значение такое потому что в случае с квадратным уравнением
	//мы можем получить 2 ответа
	virtual vector<double> roots_equation() { return { 0.0 }; }
};