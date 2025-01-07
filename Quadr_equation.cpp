#include "Quadr_equation.h"

vector<double> Quadr_equation::roots_equation()
{
	double discr = b * b - 4 * a * c;

	if (discr < 0)
	{
		throw logic_error("Нет корней\n");
	}
	else if (discr == 0)
	{
		return { -b / (2 * a) };
	}
	//Функция sqrt ищет квадратный корень из числа
	return { (-b - sqrt(discr)) / (2 * a), (-b + sqrt(discr)) / (2 * a) };
}