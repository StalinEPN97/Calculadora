#include"pch.h"
#include "Calculator.h"
#include <iostream>

using namespace std;

int main()
{
	double valor1=0, valor2=0, valor3=0;
	char operacion = '\0';

	cout << "Calculator Console Application" << endl << endl;
	cout << "Porfavor ingrese la operacion en este formato: a+b | a-b | a*b | a/b" << endl;
	while (true)
	{
		cin >> valor1 >> operacion >> valor2;
		//cout << x + y << endl;
		Calculator calcular;
		valor3 = calcular.Calculate(valor1, operacion, valor2);
		cout <<"El resultado es " << valor3 << endl;
	}
	return 0;
}