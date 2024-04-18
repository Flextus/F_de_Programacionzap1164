// 003_Comparador_Numeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	float num1 = 0, num2 = 0;


	std::cout << "Ingresa 2 numeros a comparar" << std::endl;
	std::cin >> num1;
	std::cin >> num2;

	if (num1 == num2)
	{
		std::cout << "Los numeros son iguales" << std::endl;
	}
	else
	{
		if (num1 > num2)
		{
			std::cout << num1 << " Es mayor que " << num2 << std::endl;
		}
		else
		{
			std::cout << num2 << " Es mayor que " << num1 << std::endl;
		}
	}
}

