#include "Lin_equation.h"

pair<double, double> Lin_equation::roots_equation()
{
	if (a == 0)
	{
		if (b == 0)
		{
			//���� � � � ����� ����, ������ ������ ����� �����
			return { 0,0 };
		}
		else
		{
			//���� � ����� 0, ������ ������ ���
			throw logic_error("��� ������\n");
		}
	}
	return  { -b / a,0 };
}