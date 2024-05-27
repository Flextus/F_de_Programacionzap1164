// 010_login_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string.h>

int main()
{
	//Password = holaclave, num acceso = 2785
	std::string pass;
	int pin = 0;
	bool checknum = 0;

	do 
	{
		std::cout << "Hola, ingresa tu clave de Acceso" << std::endl;

		std::cin >> pass;

		std::cout << "Hola, ingresa tu PIN de Acceso" << std::endl;

		do
		{
			std::cin >> pin;
			checknum = std::cin.fail();

			if (checknum)
			{
				std::cout << "La entrada no es un Valor valido, Ingresa u valor Valido" << std::endl;
			}
		} while (checknum == true);


		if (pass == "holaclave" && pin == 2785)
		{
			std::cout << "Login exitoso\n";
		}
		else
		{
			std::cout << "Login fallido\n";
		}
	} while (true);
		





}