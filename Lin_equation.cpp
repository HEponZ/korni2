#include "Lin_equation.h"

pair<double, double> Lin_equation::roots_equation()
{
	if (a == 0)
	{
		if (b == 0)
		{
			//Если а и б равны нулю, значит корень любое число
			return { 0,0 };
		}
		else
		{
			//Если а равно 0, значит корней нет
			throw logic_error("Нет корней\n");
		}
	}
	return  { -b / a,0 };
}