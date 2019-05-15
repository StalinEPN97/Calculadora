#include "pch.h"
#include "Calculator.h"


/*Calculator::Calculator()
{
}


Calculator::~Calculator()
{
}*/

double Calculator::Suma(double x, double y)
{
	return x + y;
}
double Calculator::Resta(double x, double y)
{
	return x - y;
}
double Calculator::Multiplicacion(double x, double y)
{
	return x * y;
}
double Calculator::Division(double x, double y)
{
	return x / y;
}

double Calculator::Calculate(double x, char oper, double y)
{
	double resultado=0;
	switch (oper)
	{
	case '+':
		resultado = x + y;
		break;
	case '-':
		resultado = x - y;
		break;
	case '*':
		resultado = x * y;
		break;
	case '/':
		resultado = x / y;
		break;
	default:
		resultado = 0;
		break;
	}
	return resultado;
}
