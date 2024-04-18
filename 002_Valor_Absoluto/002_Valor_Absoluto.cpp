// 002_ValorAbsoluto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	float num = 0;

	std::cout << "Ingresa un numero" << std::endl;
	std::cin >> num;
	if (num < 0)
	{
		num = num * (-1);
	}
	std::cout << "Su valor absoluto es " << num << std::endl;
}

