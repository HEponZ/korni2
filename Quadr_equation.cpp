#include "Quadr_equation.h"

pair<double, double> Quadr_equation::roots_equation() 
{
	//Дискриминант
	double discr = b * b - 4 * a * c;

	//Если дискриминант меньше 0, то корней нет
	if (discr < 0)
	{
		throw logic_error("Нет корней\n");
	}
	//Если равен 0 то корень один
	else if (discr == 0)
	{
		return { -b / (2 * a), 0 };
	}
	//Функция sqrt ищет квадратный корень из числа
	return { (-b - sqrt(discr)) / (2 * a), (-b + sqrt(discr)) / (2 * a) };
}